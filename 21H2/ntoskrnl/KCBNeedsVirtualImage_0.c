/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x14053F084
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1407CA920 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  LOBYTE(v2) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v2, v1, 0LL) == 0;
}
