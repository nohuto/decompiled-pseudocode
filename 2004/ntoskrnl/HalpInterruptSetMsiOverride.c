/*
 * XREFs of HalpInterruptSetMsiOverride @ 0x1404B79D0
 * Callers:
 *     HalpPiix4Detect @ 0x140996E20 (HalpPiix4Detect.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetMsiOverride(char a1)
{
  __int64 result; // rax

  if ( a1 )
    result = HalpInterruptMsiOverrideFlags & 0xFFFFFFFC | 1;
  else
    result = HalpInterruptMsiOverrideFlags & 0xFFFFFFFC | 2;
  HalpInterruptMsiOverrideFlags = result;
  return result;
}
