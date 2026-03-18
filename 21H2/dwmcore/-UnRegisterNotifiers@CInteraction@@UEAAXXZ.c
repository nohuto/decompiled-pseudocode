/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801F3150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  ReleaseInterface<CWeakReference<CResource>>((__int64 *)this + 14);
}
