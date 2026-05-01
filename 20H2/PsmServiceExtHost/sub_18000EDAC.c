/*
 * XREFs of sub_18000EDAC @ 0x18000EDAC
 * Callers:
 *     sub_180031128 @ 0x180031128 (sub_180031128.c)
 *     sub_180035B88 @ 0x180035B88 (sub_180035B88.c)
 * Callees:
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000EDAC(__int64 a1, void *a2, int a3, int a4, __int64 a5, char *a6)
{
  __int64 v10; // r8
  __int64 result; // rax

  memset(a6, 0, 0x228uLL);
  sub_1800114C0(a6, 232LL, v10, a1);
  RtlCopySid(0x44u, a6 + 464, a2);
  result = a5;
  *((_DWORD *)a6 + 133) = a3;
  *((_QWORD *)a6 + 68) = a5;
  *((_DWORD *)a6 + 134) = a4;
  return result;
}
