/*
 * XREFs of ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01AD8F4
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C012F120 (NtSetCursorInputSpace.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C000AEF0 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C000B8CC (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::BindMouse(CInputConfig *this, struct _LUID a2)
{
  CInputConfig *v2; // rdi
  CCursorClip *v4; // rcx

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  *((struct _LUID *)v2 + 2) = a2;
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)v2 + 16));
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CCursorClip::OnDisplayStateChange(v4);
  return 0LL;
}
