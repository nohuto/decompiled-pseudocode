/*
 * XREFs of ?IsSingleBit@@YAHJ@Z @ 0x18003AE88
 * Callers:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800283B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSingleBit(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 > 0 )
    return ((a1 - 1) & a1) == 0;
  return v1;
}
