/*
 * XREFs of sub_1800384E8 @ 0x1800384E8
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 *     sub_180065BE0 @ 0x180065BE0 (sub_180065BE0.c)
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 *     sub_180066864 @ 0x180066864 (sub_180066864.c)
 * Callees:
 *     sub_1800667D4 @ 0x1800667D4 (sub_1800667D4.c)
 */

BOOL __fastcall sub_1800384E8(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
  {
    sub_1800667D4(retaddr, 2352LL);
    __debugbreak();
  }
  return result;
}
