/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x1404ECBB0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x14064A930 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  __int64 v1; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1) == 0;
}
