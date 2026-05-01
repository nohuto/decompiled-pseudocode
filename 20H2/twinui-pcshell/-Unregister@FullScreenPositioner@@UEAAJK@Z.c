/*
 * XREFs of ?Unregister@FullScreenPositioner@@UEAAJK@Z @ 0x1801A7F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::Unregister(FullScreenPositioner *this, unsigned int a2)
{
  return CGITRegistrationList::Unregister((FullScreenPositioner *)((char *)this + 208), a2);
}
