/*
 * XREFs of sub_180026B04 @ 0x180026B04
 * Callers:
 *     sub_180026A7C @ 0x180026A7C (sub_180026A7C.c)
 *     sub_180076F40 @ 0x180076F40 (sub_180076F40.c)
 *     sub_18007B5D8 @ 0x18007B5D8 (sub_18007B5D8.c)
 * Callees:
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     memset @ 0x18004683A (memset.c)
 */

NTSTATUS __fastcall sub_180026B04(__int64 a1, void *a2, int a3, _DWORD *a4)
{
  NTSTATUS result; // eax

  memset(a4, 0, 0xCCuLL);
  sub_180026C20(a4, 65LL, a1);
  result = RtlCopySid(0x44u, a4 + 33, a2);
  a4[50] = a3;
  return result;
}
