/*
 * XREFs of sub_18005B060 @ 0x18005B060
 * Callers:
 *     sub_18005AD24 @ 0x18005AD24 (sub_18005AD24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005B060(__int64 a1, int a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 52) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 56), 0, 0);
  return a1;
}
