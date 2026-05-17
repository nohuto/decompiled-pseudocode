/*
 * XREFs of _wil_details_StagingConfig_Free@4 @ 0x4B306902
 * Callers:
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x4B3A1088 (_wil_StagingConfig_QueryFeatureState@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __thiscall wil_details_StagingConfig_Free(_DWORD *this)
{
  int result; // eax

  if ( this[12] )
  {
    result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, this[9]);
    this[9] = 0;
    this[5] = 0;
  }
  return result;
}
