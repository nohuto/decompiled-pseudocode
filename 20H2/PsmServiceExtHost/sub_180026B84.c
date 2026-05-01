/*
 * XREFs of sub_180026B84 @ 0x180026B84
 * Callers:
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 *     sub_1800378A4 @ 0x1800378A4 (sub_1800378A4.c)
 * Callees:
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_180026CA0 @ 0x180026CA0 (sub_180026CA0.c)
 *     memset @ 0x18004683A (memset.c)
 */

NTSTATUS __fastcall sub_180026B84(__int64 a1, void *a2, unsigned int a3, int a4, _DWORD *a5)
{
  NTSTATUS result; // eax

  memset(a5, 0, 0x218uLL);
  sub_180026CA0(a1, a2, a3);
  sub_180026C20(a5, 232LL, a1);
  result = RtlCopySid(0x44u, a5 + 116, a2);
  a5[133] = a4;
  return result;
}
