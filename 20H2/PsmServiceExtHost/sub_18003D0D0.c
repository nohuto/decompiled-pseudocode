/*
 * XREFs of sub_18003D0D0 @ 0x18003D0D0
 * Callers:
 *     sub_18003D040 @ 0x18003D040 (sub_18003D040.c)
 *     sub_180064130 @ 0x180064130 (sub_180064130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003D0D0(__int64 a1)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)a1, 0, 0);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  return a1;
}
