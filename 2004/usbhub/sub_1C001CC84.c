/*
 * XREFs of sub_1C001CC84 @ 0x1C001CC84
 * Callers:
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C00140B0 @ 0x1C00140B0 (sub_1C00140B0.c)
 *     sub_1C0015264 @ 0x1C0015264 (sub_1C0015264.c)
 *     sub_1C0015704 @ 0x1C0015704 (sub_1C0015704.c)
 *     sub_1C005A12C @ 0x1C005A12C (sub_1C005A12C.c)
 *     sub_1C005A1A8 @ 0x1C005A1A8 (sub_1C005A1A8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

LONG __fastcall sub_1C001CC84(__int64 a1, int a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r8

  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = 8LL * (unsigned int)v4[864];
  v4[781] = a2;
  v4[v5 + 867] = a2;
  *(_DWORD *)(a1 + 120) = 1734964085;
  *((_QWORD *)v4 + 399) = 0LL;
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
}
