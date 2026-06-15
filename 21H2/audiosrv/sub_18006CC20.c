/*
 * XREFs of sub_18006CC20 @ 0x18006CC20
 * Callers:
 *     sub_18006CAE0 @ 0x18006CAE0 (sub_18006CAE0.c)
 *     sub_18006CB60 @ 0x18006CB60 (sub_18006CB60.c)
 *     sub_18006CBC0 @ 0x18006CBC0 (sub_18006CBC0.c)
 * Callees:
 *     <none>
 */

HMODULE sub_18006CC20()
{
  HMODULE result; // rax

  result = (HMODULE)qword_18019E400;
  if ( !qword_18019E400 )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    qword_18019E400 = (__int64)result;
  }
  return result;
}
