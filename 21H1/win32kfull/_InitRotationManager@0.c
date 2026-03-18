/*
 * XREFs of _InitRotationManager@0 @ 0xEC21A
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck@@YGHXZ @ 0xEC254 (-Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck@@YGHXZ.c)
 */

int __stdcall InitRotationManager()
{
  _DWORD *PoolWithTag; // eax

  Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck();
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8u, 0x6D747255u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0;
    *PoolWithTag = &CLegacyRotationMgr::`vftable';
  }
  else
  {
    PoolWithTag = 0;
  }
  dword_274060 = PoolWithTag;
  return PoolWithTag != 0 ? 0 : -1073741801;
}
