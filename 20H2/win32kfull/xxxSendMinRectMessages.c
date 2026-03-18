/*
 * XREFs of xxxSendMinRectMessages @ 0x1C011B6F8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C011B570 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C003E904 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, struct _LARGE_STRING *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  struct tagVWPL **v5; // rsi
  __int64 v6; // rdx
  void *v7; // rcx
  struct tagWND *i; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagWND *v13; // rdi
  _QWORD v15[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h]
  unsigned int v18; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 LowLimit; // [rsp+C0h] [rbp+40h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v5 = *(struct tagVWPL ***)(gptiCurrent + 464LL);
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *((_DWORD *)*v5 + 4)) & 0x800) != 0 )
  {
    xxxCallHook(5, v4, (__int64)a2, 10);
    v5 = *(struct tagVWPL ***)(gptiCurrent + 464LL);
    v2 = 1;
  }
  if ( v5[30] )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v16, UserDereferenceObject);
    v7 = *(void **)(gptiCurrent + 456LL);
    if ( v7 )
      ObfReferenceObject(v7);
    v18 = 0;
    for ( i = 0LL; ; i = v13 )
    {
      v13 = VWPLNextBase(v5[30], v6, i, &v18);
      if ( !v13 )
        break;
      v15[2] = 0LL;
      LowLimit = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v15[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v15;
      v15[1] = v13;
      HMLockObject(v13);
      if ( xxxSendTransformableMessageTimeout(
             (unsigned __int64)v13,
             0x8Bu,
             v4,
             a2,
             0,
             0x64u,
             (__int64 *)&LowLimit,
             1,
             0) )
      {
        v2 = 1;
      }
      ThreadUnlock1(v11, v10, v12);
    }
    PopAndFreeW32ThreadLock((__int64)&v16);
  }
  return v2;
}
