/*
 * XREFs of sub_180085084 @ 0x180085084
 * Callers:
 *     sub_18002F5D0 @ 0x18002F5D0 (sub_18002F5D0.c)
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180085084(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
