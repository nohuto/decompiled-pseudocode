/*
 * XREFs of _LdrpUnmapModule@4 @ 0x4B2E67DF
 * Callers:
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     _RtlRemoveInvertedFunctionTable@4 @ 0x4B2E680E (_RtlRemoveInvertedFunctionTable@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 */

int __thiscall LdrpUnmapModule(_DWORD *this)
{
  int result; // eax

  result = this[6];
  if ( result )
  {
    if ( (this[13] & 0x200) != 0 )
    {
      RtlRemoveInvertedFunctionTable(this[6]);
      result = this[6];
    }
    result = NtUnmapViewOfSection(-1, result);
    this[6] = 0;
  }
  return result;
}
