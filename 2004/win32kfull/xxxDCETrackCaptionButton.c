/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C00BAD98
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BA9D4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0035F20 (xxxSetCapture.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     xxxMNCanClose @ 0x1C00A00C0 (xxxMNCanClose.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     DwmSyncHitTestQuery @ 0x1C00BAB30 (DwmSyncHitTestQuery.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     xxxTrackCaptionButton @ 0x1C0248A20 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 *a1, unsigned int a2)
{
  unsigned __int16 v2; // si
  __int64 *v4; // r14
  unsigned int v5; // r12d
  unsigned __int16 v6; // r15
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int16 v12; // di
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int16 v24; // ax
  int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  __int64 v28; // [rsp+58h] [rbp-11h]
  __int128 v29; // [rsp+60h] [rbp-9h] BYREF
  __int64 v30[2]; // [rsp+70h] [rbp+7h]
  __int128 v31; // [rsp+80h] [rbp+17h]
  int v32; // [rsp+D8h] [rbp+6Fh]
  __int16 v33; // [rsp+E0h] [rbp+77h]
  __int64 v34; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  LODWORD(v34) = a2;
  v29 = 0LL;
  v4 = a1;
  v5 = 0;
  *(_OWORD *)v30 = 0LL;
  v28 = gptiCurrent;
  v6 = 0;
  v31 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 768LL);
  v33 = 0;
  v32 = 0;
  LODWORD(v27) = 1;
  if ( gdwInAtomicOperation )
  {
    a1 = (__int64 *)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v8 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  DwmSyncHitTestQuery(v8, *v4, 512, v7, 1LL, 0LL, a2, &v34, &v27);
  EnterCrit(0LL, 1LL);
  if ( !(_DWORD)v27 )
    return xxxTrackCaptionButton(v4, a2);
  if ( a2 == 8 )
  {
    v5 = 2;
    v6 = 1344;
    goto LABEL_37;
  }
  if ( a2 == 9 )
  {
    v17 = v4[5];
    v5 = 3;
    v6 = 1312;
    if ( (*(_BYTE *)(v17 + 30) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v17 + 31) & 1) != 0 )
        v2 = -3808;
      else
        v2 = -4048;
      goto LABEL_8;
    }
    goto LABEL_41;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v5 = 4;
      v6 = 1408;
      if ( (*(_BYTE *)(v4[5] + 25) & 4) != 0 )
      {
        v2 = -3712;
        goto LABEL_8;
      }
LABEL_41:
      v12 = 0;
      v5 = 0;
      goto LABEL_9;
    }
LABEL_37:
    if ( v5 == 2 )
    {
      v18 = v4[5];
      if ( (*(_BYTE *)(v18 + 30) & 2) != 0 )
      {
        v2 = -3808;
        if ( (*(_BYTE *)(v18 + 31) & 0x20) == 0 )
          v2 = -4064;
        goto LABEL_8;
      }
    }
    goto LABEL_41;
  }
  v5 = 5;
  v6 = 1296;
  if ( !(unsigned int)xxxMNCanClose((__int64)v4) )
    goto LABEL_41;
  v2 = -4000;
LABEL_8:
  v33 = 1;
  v12 = 1;
  SetOrClrWF(1, (__int64)v4, v6, 1);
  xxxWindowEvent(0x800Au, (struct tagWND *)v4, -2, v5, 0);
LABEL_9:
  xxxSetCapture((__int64)v4);
  v13 = v34;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v29, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)&v29, 0, 577, 599, 1, 0) )
      {
        v26 = v28;
        *(_DWORD *)(v28 + 480) |= 0x8000u;
        xxxDispatchMessage((__int64)&v29);
        *(_DWORD *)(v26 + 480) &= ~0x8000u;
        v12 = v33;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( DWORD2(v29) != 514 )
    {
      if ( DWORD2(v29) == 512 && v2 )
      {
        v19 = *(_QWORD *)(gptiCurrent + 768LL);
        if ( gdwInAtomicOperation )
        {
          v14 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v20 = (void *)ReferenceDwmApiPort(v14);
        UserSessionSwitchLeaveCrit(v22, v21, v23);
        DwmSyncHitTestQuery(v20, *v4, 512, v19, v30[0], v30[1], a2, &v34, &v27);
        EnterCrit(0LL, 1LL);
        v13 = v34;
        if ( (_DWORD)v34 == a2 )
        {
          v24 = 1;
          v25 = 1;
        }
        else
        {
          v24 = 0;
          v25 = 0;
        }
        v12 = v33;
        if ( v33 != v24 )
        {
          v12 = v24;
          v33 = v24;
          SetOrClrWF(v25, (__int64)v4, v6, 1);
          xxxWindowEvent(0x800Au, (struct tagWND *)v4, -2, v5, 0);
        }
      }
LABEL_23:
      v15 = v32;
      continue;
    }
    xxxReleaseCapture();
    v15 = 1;
    v32 = 1;
  }
  while ( v4 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) && !v15 );
  if ( !v2 )
    return 0LL;
  if ( v12 && v2 != 0xF180 )
  {
    SetOrClrWF(0, (__int64)v4, v6, 1);
    xxxWindowEvent(0x800Au, (struct tagWND *)v4, -2, v5, 0);
  }
  if ( !v32 || v13 != a2 )
    return 0;
  return v2;
}
