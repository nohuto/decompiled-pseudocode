/*
 * XREFs of ?ValidateParams@@YAJPEBUInputProcessorCreateParams@@_N@Z @ 0x180028D00
 * Callers:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180028440 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateParams(const struct InputProcessorCreateParams *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !*(_QWORD *)a1 || !*((_QWORD *)a1 + 1) || a2 && !*((_QWORD *)a1 + 2) )
    return 2147942487LL;
  return result;
}
