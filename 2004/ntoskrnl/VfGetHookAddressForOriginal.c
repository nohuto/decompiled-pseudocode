/*
 * XREFs of VfGetHookAddressForOriginal @ 0x1409C5908
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408BCF38 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViLookupThunkArray @ 0x1409C5B8C (ViLookupThunkArray.c)
 */

__int64 __fastcall VfGetHookAddressForOriginal(__int64 a1)
{
  __int64 result; // rax

  result = ViLookupThunkArray(&VfXdvThunks, 48LL, a1);
  if ( !result )
  {
    result = ViLookupThunkArray(&VfPoolThunks, 48LL, a1);
    if ( !result )
    {
      result = ViLookupThunkArray(&VfMandatoryThunks, 48LL, a1);
      if ( !result )
      {
        result = ViLookupThunkArray(&VfRegularThunks, 48LL, a1);
        if ( !result )
          return ViLookupThunkArray(&VfOrderDependentThunks, 56LL, a1);
      }
    }
  }
  return result;
}
