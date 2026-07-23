/*
 * XREFs of _wil_details_StagingConfig_Free@4 @ 0x4B306902
 * Callers:
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x4B3A1088 (_wil_StagingConfig_QueryFeatureState@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

LOGICAL __thiscall wil_details_StagingConfig_Free(int this)
{
  LOGICAL result; // eax

  if ( *(_DWORD *)(this + 48) )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(this + 36));
    *(_DWORD *)(this + 36) = 0;
    *(_DWORD *)(this + 20) = 0;
  }
  return result;
}
