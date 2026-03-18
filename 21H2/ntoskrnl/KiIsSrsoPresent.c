/*
 * XREFs of KiIsSrsoPresent @ 0x140418D94
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403BFE70 (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoPresent(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_BYTE *)(a1 + 141) != 1 || _bittest64((const signed __int64 *)&KeFeatureBits2, 0x22u) )
    return 0LL;
  return result;
}
