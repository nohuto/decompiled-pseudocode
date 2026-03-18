/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x1404EADE0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x14060C930 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x14060D910 (CmpIsSystemEntity.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  __int64 v1; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1) == 0;
}
