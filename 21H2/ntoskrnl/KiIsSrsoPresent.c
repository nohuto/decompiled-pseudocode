/*
 * XREFs of KiIsSrsoPresent @ 0x1403F33F4
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADE6C (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoPresent(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_BYTE *)(a1 + 141) != 1 || (KeFeatureBits2 & 0x400000000LL) != 0 )
    return 0LL;
  return result;
}
