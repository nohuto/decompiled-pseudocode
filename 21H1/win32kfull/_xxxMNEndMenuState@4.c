/*
 * XREFs of _xxxMNEndMenuState@4 @ 0x1847C9
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _xxxCallHandleMenuMessages@20 @ 0x1978D8 (_xxxCallHandleMenuMessages@20.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF42A0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z.c)
 *     NullifyLookasideRef @ 0x184301 (NullifyLookasideRef.c)
 *     _MNFlushDestroyedPopups@4 @ 0x184561 (_MNFlushDestroyedPopups@4.c)
 *     _MNFreePopup@8 @ 0x184632 (_MNFreePopup@8.c)
 *     _MNUnlinkDelayedFreePopups@4 @ 0x18473A (_MNUnlinkDelayedFreePopups@4.c)
 *     _xxxMNEndMenuStateInternal@8 @ 0x1848C0 (_xxxMNEndMenuStateInternal@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__stdcall xxxMNEndMenuState(int *a1)
{
  int v1; // ecx
  void *v2; // esi
  int v4; // [esp-8h] [ebp-20h] BYREF
  int v5; // [esp-4h] [ebp-1Ch]
  _DWORD v6[2]; // [esp+10h] [ebp-8h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, 0);
  a1[1] |= 0x1000000u;
  if ( !a1[7] )
  {
    if ( *a1 )
    {
      MNFlushDestroyedPopups(*a1);
      MNUnlinkDelayedFreePopups(*a1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v6, *a1);
      v5 = v1;
      v4 = v1;
      **(_DWORD **)v6[0] |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v4, *a1);
      MNFreePopup(v4, v5);
    }
    xxxMNEndMenuStateInternal(_gptiCurrent, a1);
    if ( !*(_DWORD *)v6[0] || (**(_DWORD **)v6[0] & 0x40000000) != 0 )
    {
      if ( *(_DWORD *)v6[0] )
        **(_DWORD **)v6[0] &= ~0x20000000u;
    }
    else if ( *(void *const *)v6[0] == _gpopupMenu )
    {
      _gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_DWORD **)&_gpopupMenu + 12));
    }
    else
    {
      v2 = *(void **)v6[0];
      NullifyLookasideRef(*(_DWORD **)(*(_DWORD *)v6[0] + 48));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<16384,56>>(v2);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v6);
}
