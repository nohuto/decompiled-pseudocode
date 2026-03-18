/*
 * XREFs of _xxxMNStartMenuState@12 @ 0x184D3D
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF42A0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z @ 0x14CAE7 (--0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z.c)
 *     NullifyLookasideRef @ 0x184301 (NullifyLookasideRef.c)
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _MNAllocMenuState@4 @ 0x1843C6 (_MNAllocMenuState@4.c)
 *     _MNAllocPopup@4 @ 0x184482 (_MNAllocPopup@4.c)
 *     _MNFreePopup@8 @ 0x184632 (_MNFreePopup@8.c)
 *     _MNMarkDelayedFreePopup@8 @ 0x1846F6 (_MNMarkDelayedFreePopup@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxMNStartMenuState(_DWORD *a1, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  struct tagMENUSTATE *v9; // eax
  int v10; // ecx
  void *v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  _DWORD *v16; // ecx
  int v17; // edx
  char i; // al
  int v19; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v22; // esi
  int v24; // [esp-8h] [ebp-34h] BYREF
  _DWORD *v25; // [esp-4h] [ebp-30h]
  int v26; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v27; // [esp+14h] [ebp-18h]
  int v28; // [esp+18h] [ebp-14h]
  int *v29[2]; // [esp+1Ch] [ebp-10h] BYREF
  int **v30; // [esp+24h] [ebp-8h] BYREF
  int v31; // [esp+28h] [ebp-4h]

  v31 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, 0);
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_DWORD *)(_gptiCurrent + 328) )
    goto LABEL_29;
  v4 = a1[5];
  if ( (*(_BYTE *)(v4 + 23) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v4 + 22) & 8) != 0 )
        break;
      a1 = (_DWORD *)a1[14];
      v4 = a1[5];
    }
    while ( (*(_BYTE *)(v4 + 23) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(_DWORD **)(*(_DWORD *)(a1[2] + 236) + 64);
  }
  if ( !a1 )
    goto LABEL_29;
  v5 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 4) || *(_DWORD *)(v5 + 8) )
      goto LABEL_29;
  }
  v6 = a1[5];
  if ( ((*(_BYTE *)(v6 + 23) & 0xC0) == 0x40 || !a1[23]) && (*(_BYTE *)(v6 + 22) & 8) == 0 )
    goto LABEL_29;
  v7 = a1[2];
  if ( *(_DWORD *)(v7 + 328) )
    goto LABEL_29;
  if ( v7 != _gptiCurrent )
  {
    _PostTransformableMessage(a1, 274, v31, a3, 1);
LABEL_29:
    v22 = 0;
    goto LABEL_30;
  }
  v8 = MNAllocPopup(0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v29, (int)v8);
  if ( !*v29[0] )
    goto LABEL_29;
  v9 = (struct tagMENUSTATE *)MNAllocMenuState(v29);
  if ( !v9 )
  {
    v25 = (_DWORD *)v10;
    v24 = v10;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v24, *v29[0]);
    MNFreePopup(v24, (int)v25);
    if ( *(void *const *)v29[0] == _gpopupMenu )
    {
      _gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_DWORD **)&_gpopupMenu + 12));
    }
    else
    {
      v11 = (void *)*v29[0];
      NullifyLookasideRef(*(_DWORD **)(*v29[0] + 48));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<16384,56>>(v11);
    }
    goto LABEL_29;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&a3, v9);
  v25 = a1;
  **(_DWORD **)v29[0] |= 1u;
  **(_DWORD **)v29[0] |= 2u;
  v24 = *v29[0] + 4;
  HMAssignmentLock(v13, v12);
  *(_DWORD *)(*v29[0] + 40) = -1;
  HMAssignmentLock(v15, v14);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(&v30, 0);
  MNMarkDelayedFreePopup(v29, &v30);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v30);
  *(_DWORD *)(*v29[0] + 32) = *v29[0];
  v16 = a1;
  v17 = a1[5];
  for ( i = *(_BYTE *)(v17 + 23); (i & 0xC0) == 0x40; i = *(_BYTE *)(v16[5] + 23) )
    v16 = (_DWORD *)v16[14];
  v19 = v16[23];
  if ( v19 )
    **(_DWORD **)v29[0] ^= (**(_DWORD **)v29[0] ^ (*(_DWORD *)(*(_DWORD *)(v19 + 20) + 20) << 17)) & 0x400000;
  else
    **(_DWORD **)v29[0] = **(_DWORD **)v29[0] & 0xFFBFFFFF | ((*(_BYTE *)(v17 + 17) & 0x20) << 17);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v26 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v26;
  v27 = a1;
  HMLockObject(a1);
  xxxSendMessage(a1, 0, 0);
  ThreadUnlock1();
  v22 = a3;
  if ( !a3 || xxxUnlockMenuStateInternal(a3, 0) )
    goto LABEL_29;
LABEL_30:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29);
  return v22;
}
