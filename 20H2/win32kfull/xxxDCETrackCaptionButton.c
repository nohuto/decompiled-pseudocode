/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C007C730
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C007C5D4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00393E0 (xxxSetCapture.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0052630 (xxxSleepThread2.c)
 *     xxxMNCanClose @ 0x1C005BDA0 (xxxMNCanClose.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 *     DwmSyncHitTestQuery @ 0x1C007F468 (DwmSyncHitTestQuery.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxTrackCaptionButton @ 0x1C0247470 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // si
  __int64 v4; // r14
  int v5; // r12d
  unsigned __int16 v6; // r15
  void *v7; // rdi
  __int64 v8; // rcx
  __int16 v9; // di
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rdi
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-11h]
  __int128 v23; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24[2]; // [rsp+70h] [rbp+7h]
  __int128 v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+D8h] [rbp+6Fh]
  __int16 v27; // [rsp+E0h] [rbp+77h]
  __int64 v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  LODWORD(v28) = a2;
  v23 = 0LL;
  v4 = a1;
  v5 = 0;
  *(_OWORD *)v24 = 0LL;
  v22 = gptiCurrent;
  v6 = 0;
  v25 = 0LL;
  v27 = 0;
  v26 = 0;
  LODWORD(v21) = 1;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v7 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v8);
  DwmSyncHitTestQuery(v7, 1LL, 0LL, a2, (__int64)&v28, (__int64)&v21);
  EnterCrit(0LL, 1LL);
  if ( !(_DWORD)v21 )
    return xxxTrackCaptionButton(v4, a2);
  if ( a2 == 8 )
  {
    v5 = 2;
    v6 = 1344;
    goto LABEL_37;
  }
  if ( a2 == 9 )
  {
    v14 = *(_QWORD *)(v4 + 40);
    v6 = 1312;
    if ( (*(_BYTE *)(v14 + 30) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v14 + 31) & 1) != 0 )
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
      v6 = 1408;
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 25LL) & 4) != 0 )
      {
        v2 = -3712;
        goto LABEL_8;
      }
LABEL_41:
      v9 = 0;
      goto LABEL_9;
    }
LABEL_37:
    if ( v5 == 2 )
    {
      v15 = *(_QWORD *)(v4 + 40);
      if ( (*(_BYTE *)(v15 + 30) & 2) != 0 )
      {
        v2 = -3808;
        if ( (*(_BYTE *)(v15 + 31) & 0x20) == 0 )
          v2 = -4064;
        goto LABEL_8;
      }
    }
    goto LABEL_41;
  }
  v6 = 1296;
  if ( !(unsigned int)xxxMNCanClose(v4) )
    goto LABEL_41;
  v2 = -4000;
LABEL_8:
  v27 = 1;
  v9 = 1;
  SetOrClrWF(1LL, v4, v6, 1LL);
  xxxWindowEvent(0x800Au, 0);
LABEL_9:
  xxxSetCapture(v4);
  v10 = v28;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v23, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)&v23, 0, 577, 599, 1, 0) )
      {
        v20 = v22;
        *(_DWORD *)(v22 + 488) |= 0x8000u;
        xxxDispatchMessage(&v23);
        *(_DWORD *)(v20 + 488) &= ~0x8000u;
        v9 = v27;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( DWORD2(v23) != 514 )
    {
      if ( DWORD2(v23) == 512 && v2 )
      {
        if ( gdwInAtomicOperation )
        {
          v11 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v16 = (void *)ReferenceDwmApiPort(v11);
        UserSessionSwitchLeaveCrit(v17);
        DwmSyncHitTestQuery(v16, v24[0], v24[1], a2, (__int64)&v28, (__int64)&v21);
        EnterCrit(0LL, 1LL);
        v10 = v28;
        if ( (_DWORD)v28 == a2 )
        {
          v18 = 1;
          v19 = 1LL;
        }
        else
        {
          v18 = 0;
          v19 = 0LL;
        }
        v9 = v27;
        if ( v27 != v18 )
        {
          v9 = v18;
          v27 = v18;
          SetOrClrWF(v19, v4, v6, 1LL);
          xxxWindowEvent(0x800Au, 0);
        }
      }
LABEL_23:
      v12 = v26;
      continue;
    }
    xxxReleaseCapture();
    v12 = 1;
    v26 = 1;
  }
  while ( v4 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) && !v12 );
  if ( !v2 )
    return 0LL;
  if ( v9 && v2 != 0xF180 )
  {
    SetOrClrWF(0LL, v4, v6, 1LL);
    xxxWindowEvent(0x800Au, 0);
  }
  if ( !v26 || v10 != a2 )
    return 0;
  return v2;
}
