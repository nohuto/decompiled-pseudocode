/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C0089AF0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxGetInputEvent @ 0x1C0091F60 (xxxGetInputEvent.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     zzzWakeInputIdle @ 0x1C00BE498 (zzzWakeInputIdle.c)
 *     xxxHungAppDemon @ 0x1C00E7C60 (xxxHungAppDemon.c)
 *     zzzShowStartGlass @ 0x1C01D3CA0 (zzzShowStartGlass.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00163E4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 */

void __fastcall zzzCalcStartCursorHide(__int64 a1, int a2)
{
  unsigned __int64 v4; // rsi
  struct _W32PROCESS **v5; // r8
  struct _W32PROCESS *v6; // rcx
  unsigned int *v7; // r10
  int v8; // edx
  unsigned int v9; // r9d
  struct _W32PROCESS **v10; // r11
  PVOID v11; // rbx
  bool v12; // bl
  struct _W32PROCESS *i; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v11 = *(PVOID *)a1;
    AutoSharedPushLock::AutoSharedPushLock(
      (AutoSharedPushLock *)&v14,
      (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    v12 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v11;
    if ( v14 )
    {
      GreReleasePushLockShared(v14);
      KeLeaveCriticalRegion();
    }
    if ( v12 )
      __debugbreak();
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      for ( i = gpwpCalcFirst; i; i = (struct _W32PROCESS *)*((_QWORD *)i + 4) )
      {
        if ( i == (struct _W32PROCESS *)a1 )
          goto LABEL_24;
      }
      if ( a1 )
      {
        *(_QWORD *)(a1 + 32) = gpwpCalcFirst;
        gpwpCalcFirst = (struct _W32PROCESS *)a1;
      }
    }
LABEL_24:
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v4 + a2;
  }
  HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = 0;
  v5 = &gpwpCalcFirst;
  v6 = gpwpCalcFirst;
  if ( gpwpCalcFirst )
  {
    while ( 1 )
    {
      v7 = (unsigned int *)((char *)v6 + 12);
      v8 = *((_DWORD *)v6 + 3);
      if ( (v8 & 6) != 4 )
        break;
      v9 = *((_DWORD *)v6 + 6);
      if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) < v9 )
        HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = *((_DWORD *)v6 + 6);
      v10 = (struct _W32PROCESS **)((char *)v6 + 32);
      v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
      if ( (int)(v4 - v9) > 0 )
      {
        *v7 = v8 & 0xFFFFFFFB;
        goto LABEL_11;
      }
      v5 = v10;
LABEL_12:
      if ( !v6 )
      {
        if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) > (unsigned int)v4 )
          goto LABEL_4;
        goto LABEL_3;
      }
    }
    v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
LABEL_11:
    *v5 = v6;
    goto LABEL_12;
  }
LABEL_3:
  HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = 0;
LABEL_4:
  zzzUpdateCursorImage();
}
