/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801C67D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 12);
}
