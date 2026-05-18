/*
 * XREFs of sub_1800ED08C @ 0x1800ED08C
 * Callers:
 *     sub_18008C954 @ 0x18008C954 (sub_18008C954.c)
 *     sub_18008D290 @ 0x18008D290 (sub_18008D290.c)
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 *     sub_1800F0318 @ 0x1800F0318 (sub_1800F0318.c)
 *     sub_18010D300 @ 0x18010D300 (sub_18010D300.c)
 * Callees:
 *     sub_1800A02D8 @ 0x1800A02D8 (sub_1800A02D8.c)
 */

__int64 __fastcall sub_1800ED08C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1800A02D8(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)result + 128) == 0xFFFF )
    return 511LL;
  return result;
}
