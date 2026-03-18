/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0003050
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C0003090 (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C00066AC (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this)
{
  if ( *((int *)this + 6) < 3 )
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  CCompositionToken::ReleaseAllUpdates((CCompositionToken *)((char *)this - 8));
  *((_DWORD *)this + 6) = 6;
}
