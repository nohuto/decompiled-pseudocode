/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801C8670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 12);
}
