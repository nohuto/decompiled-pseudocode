/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x1404E7814
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x140694490 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  __int64 v1; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1) == 0;
}
