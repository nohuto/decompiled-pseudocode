/*
 * XREFs of sub_180085180 @ 0x180085180
 * Callers:
 *     sub_18008532C @ 0x18008532C (sub_18008532C.c)
 * Callees:
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     memset @ 0x18004683A (memset.c)
 */

NTSTATUS __fastcall sub_180085180(__int64 a1, void *a2, __int64 a3, int a4, _DWORD *a5)
{
  NTSTATUS result; // eax

  memset(a5, 0, 0xCCuLL);
  sub_180026C20(a5, 65LL, a1);
  result = RtlCopySid(0x44u, a5 + 33, a2);
  a5[50] = a4;
  return result;
}
