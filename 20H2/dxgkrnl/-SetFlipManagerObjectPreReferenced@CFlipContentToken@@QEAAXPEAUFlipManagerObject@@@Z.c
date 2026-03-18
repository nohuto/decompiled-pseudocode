/*
 * XREFs of ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C006EFA4
 * Callers:
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0069444 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AE.c)
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x1C006ED40 (--1CFlipContentToken@@UEAA@XZ.c)
 *     ?Discard@CFlipContentToken@@UEAAXXZ @ 0x1C006EE70 (-Discard@CFlipContentToken@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipContentToken::SetFlipManagerObjectPreReferenced(
        CFlipContentToken *this,
        struct FlipManagerObject *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 11) = a2;
}
