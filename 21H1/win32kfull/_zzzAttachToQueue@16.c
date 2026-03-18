/*
 * XREFs of _zzzAttachToQueue@16 @ 0xC7DF0
 * Callers:
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 * Callees:
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 *     _LockQCursor@8 @ 0x9C34C (_LockQCursor@8.c)
 *     _UnlockCaptureWindow@4 @ 0x9D16E (_UnlockCaptureWindow@4.c)
 *     _IsInsideMenuLoop@4 @ 0xACC66 (_IsInsideMenuLoop@4.c)
 *     _LockCaptureWindow@8 @ 0xC5242 (_LockCaptureWindow@8.c)
 *     ?CheckTransferState@@YGKPAUtagTHREADINFO@@PAUtagQ@@JH@Z @ 0xC7F9A (-CheckTransferState@@YGKPAUtagTHREADINFO@@PAUtagQ@@JH@Z.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     ?CancelInputState@@YGXPAUtagTHREADINFO@@K@Z @ 0x14CC2B (-CancelInputState@@YGXPAUtagTHREADINFO@@K@Z.c)
 */

int __fastcall zzzAttachToQueue(int a1, int a2, _DWORD *a3, struct tagQ *a4)
{
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // edx
  int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // eax
  int result; // eax
  _DWORD *v18; // esi
  const void *v19; // esi
  int v20; // ecx
  int v21; // esi
  int v22; // ecx
  int v23; // eax
  int v24; // [esp+0h] [ebp-10h]
  struct tagTHREADINFO *v25; // [esp+0h] [ebp-10h]
  struct tagTHREADINFO *v26; // [esp+0h] [ebp-10h]
  struct tagTHREADINFO *v27; // [esp+0h] [ebp-10h]
  struct tagQ *v28; // [esp+0h] [ebp-10h]
  int v29; // [esp+4h] [ebp-Ch]
  unsigned int v30; // [esp+4h] [ebp-Ch]
  unsigned int v31; // [esp+4h] [ebp-Ch]
  unsigned int v32; // [esp+4h] [ebp-Ch]
  struct tagTHREADINFO *v33; // [esp+4h] [ebp-Ch]

  v6 = CheckTransferState((struct tagTHREADINFO *)0x40, a4, v24, v29) - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      HMAssignmentLock(*(_DWORD *)(*(_DWORD *)(a1 + 236) + 64), v7);
      HMAssignmentUnlock(*(_DWORD *)(a1 + 236) + 64);
      v19 = (const void *)(*(_DWORD *)(a1 + 236) + 216);
      if ( *(_DWORD *)v19 )
      {
        if ( *(_DWORD *)(*(_DWORD *)v19 + 8) == a1 && !*(_DWORD *)(a2 + 216) )
        {
          qmemcpy((void *)(a2 + 216), v19, 0x3Cu);
          a2 = v30;
          *(_DWORD *)(*(_DWORD *)(a1 + 236) + 216) = 0;
        }
      }
    }
  }
  else
  {
    CancelInputState(v25, v30);
  }
  v8 = CheckTransferState((struct tagTHREADINFO *)0x3C, a4, (int)v25, v30) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      HMAssignmentLock(*(_DWORD *)(*(_DWORD *)(a1 + 236) + 60), v9);
      HMAssignmentUnlock(*(_DWORD *)(a1 + 236) + 60);
    }
  }
  else
  {
    CancelInputState(v26, v31);
  }
  v10 = *(_DWORD *)(a1 + 236);
  HMAssignmentUnlock(v10 + 72);
  *(_BYTE *)(v10 + 76) = 0;
  HMAssignmentUnlock(a2 + 72);
  *(_BYTE *)(a2 + 76) = 0;
  v11 = CheckTransferState((struct tagTHREADINFO *)0x38, a4, (int)v26, v31) - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      LockCaptureWindow(a2, *(_DWORD *)(*(_DWORD *)(a1 + 236) + 56));
      UnlockCaptureWindow(*(int **)(a1 + 236));
      v20 = 3;
      v21 = a2;
      while ( v20 )
      {
        v21 += 4;
        --v20;
      }
      UpdateRawMouseMode((_DWORD *)a2);
      v22 = *(_DWORD *)(a2 + 284);
      *(_DWORD *)(a2 + 80) = *(_DWORD *)(*(_DWORD *)(a1 + 236) + 80);
      *(_DWORD *)(a2 + 284) = v22 ^ (v22 ^ *(_DWORD *)(*(_DWORD *)(a1 + 236) + 284)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v27, v32);
  }
  v12 = CheckTransferState((struct tagTHREADINFO *)0x44, a4, (int)v27, v32) - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
      goto LABEL_10;
    v14 = a2 + 68;
    goto LABEL_20;
  }
  v14 = *(_DWORD *)(a2 + 64);
  if ( v14 )
  {
    v13 = a2 + 68;
    if ( *(_DWORD *)(a2 + 68) )
    {
      v23 = *(_DWORD *)(*(_DWORD *)(a1 + 236) + 68);
      if ( v23 )
      {
        if ( *(_DWORD *)(v14 + 48) == v23 )
        {
LABEL_20:
          HMAssignmentLock(v14, v13);
          HMAssignmentUnlock(*(_DWORD *)(a1 + 236) + 68);
        }
      }
    }
  }
LABEL_10:
  v15 = *(_DWORD *)(a1 + 236);
  if ( a1 == *(_DWORD *)(v15 + 36) )
  {
    *(_DWORD *)(a2 + 284) ^= (*(_DWORD *)(a2 + 284) ^ *(_DWORD *)(v15 + 284)) & 0xFFEFFFFF;
    if ( !IsInsideMenuLoop((_DWORD *)a1) )
    {
      v15 &= ~0x40u;
      *(_DWORD *)(a2 + 284) = v15;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_qqq(
        *(_DWORD *)(a1 + 236),
        v15,
        0x12u,
        39,
        (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
        *(_DWORD *)(a1 + 236),
        _gptiCurrent,
        *(_DWORD *)(*(_DWORD *)(a1 + 236) + 36));
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 236) + 36) = 0;
  }
  if ( gspwndCursor && a1 == *(_DWORD *)(gspwndCursor + 8) )
    LockQCursor(v14, v15, a2, *(_DWORD *)(*(_DWORD *)(a1 + 236) + 276));
  *(_DWORD *)(a2 + 280) += *(_DWORD *)(a1 + 412);
  *(_DWORD *)(a2 + 48) = a1;
  *(_DWORD *)(a2 + 52) = a1;
  v16 = *(_DWORD *)(*(_DWORD *)(a1 + 232) + 496);
  if ( *(_DWORD *)(a2 + 316) >= v16 )
  {
    result = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 316) = v16;
    result = 0;
    *(_DWORD *)(a2 + 320) = 0;
  }
  v18 = *(_DWORD **)(a1 + 236);
  *(_DWORD *)(a1 + 236) = a2;
  if ( v18 == a3 )
  {
    --v18[72];
  }
  else
  {
    v18[3] = 0;
    v18[4] = 0;
    v18[5] = 0;
    RedistributeInput(0, v28, v33);
    return zzzDestroyQueue(v18, a1);
  }
  return result;
}
