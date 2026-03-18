/*
 * XREFs of ?RemoveMappedGuestAlloc@DXGGLOBAL@@SA_NPEAVDXGPROCESS@@PEAX1@Z @ 0x1C030C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C000C224 (-Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ.c)
 */

bool __fastcall DXGGLOBAL::RemoveMappedGuestAlloc(struct DXGPROCESS *a1, void *a2, void *a3)
{
  Feature_GuestAllocMapping__private_IsEnabledPreCheck();
  return 0;
}
