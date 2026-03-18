/*
 * XREFs of _MNUnlinkDelayedFreePopups@4 @ 0x18473A
 * Callers:
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 */

_DWORD *__stdcall MNUnlinkDelayedFreePopups(int a1)
{
  _DWORD v2[2]; // [esp+4h] [ebp-10h] BYREF
  _DWORD v3[2]; // [esp+Ch] [ebp-8h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v2, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v3, a1);
  while ( *(_DWORD *)v3[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v2, *(_DWORD *)(*(_DWORD *)v3[0] + 36));
    **(_DWORD **)v3[0] &= ~0x10000u;
    if ( *(_DWORD *)v3[0] != a1 )
      **(_DWORD **)v3[0] &= ~0x20000000u;
    *(_DWORD *)(*(_DWORD *)v3[0] + 36) = 0;
    *(_DWORD *)(*(_DWORD *)v3[0] + 32) = 0;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v3, *(_DWORD *)v2[0]);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v3);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v2);
}
