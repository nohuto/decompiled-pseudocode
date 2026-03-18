/*
 * XREFs of HalpInterruptSetMsiOverride @ 0x1404BAEF0
 * Callers:
 *     HalpPiix4Detect @ 0x14099CE60 (HalpPiix4Detect.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
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
