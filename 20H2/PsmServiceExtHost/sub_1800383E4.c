/*
 * XREFs of sub_1800383E4 @ 0x1800383E4
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 *     sub_18003AE4C @ 0x18003AE4C (sub_18003AE4C.c)
 *     sub_18003B18C @ 0x18003B18C (sub_18003B18C.c)
 *     sub_1800641A0 @ 0x1800641A0 (sub_1800641A0.c)
 *     sub_180064374 @ 0x180064374 (sub_180064374.c)
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 *     sub_1800655B4 @ 0x1800655B4 (sub_1800655B4.c)
 *     sub_18006570C @ 0x18006570C (sub_18006570C.c)
 * Callees:
 *     sub_1800667D4 @ 0x1800667D4 (sub_1800667D4.c)
 */

BOOL __fastcall sub_1800383E4(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
  {
    sub_1800667D4(retaddr, 2342LL);
    __debugbreak();
  }
  return result;
}
