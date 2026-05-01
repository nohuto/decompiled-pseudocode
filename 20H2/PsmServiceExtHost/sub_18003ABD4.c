/*
 * XREFs of sub_18003ABD4 @ 0x18003ABD4
 * Callers:
 *     sub_18003A740 @ 0x18003A740 (sub_18003A740.c)
 *     sub_18003A830 @ 0x18003A830 (sub_18003A830.c)
 *     sub_18003A890 @ 0x18003A890 (sub_18003A890.c)
 *     sub_18003A904 @ 0x18003A904 (sub_18003A904.c)
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18003AB4C @ 0x18003AB4C (sub_18003AB4C.c)
 *     sub_180066030 @ 0x180066030 (sub_180066030.c)
 *     sub_180066378 @ 0x180066378 (sub_180066378.c)
 *     sub_18006649C @ 0x18006649C (sub_18006649C.c)
 *     sub_1800668CC @ 0x1800668CC (sub_1800668CC.c)
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 * Callees:
 *     <none>
 */

HMODULE sub_18003ABD4()
{
  HMODULE result; // rax

  result = (HMODULE)qword_1800B3FE8;
  if ( !qword_1800B3FE8 )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    qword_1800B3FE8 = (__int64)result;
  }
  return result;
}
