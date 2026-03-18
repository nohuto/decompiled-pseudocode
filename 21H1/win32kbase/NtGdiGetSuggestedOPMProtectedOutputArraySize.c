/*
 * XREFs of NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00C7E10
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C002AE30 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C004E1B0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall NtGdiGetSuggestedOPMProtectedOutputArraySize(struct _UNICODE_STRING *a1, unsigned int *Address)
{
  __int64 result; // rax
  unsigned int v5; // edi
  int SuggestedPhysicalMonitorArraySize; // ebx
  __int64 v7; // rcx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, UserMode, Address);
    UserSessionSwitchLeaveCrit(v7);
    if ( SuggestedPhysicalMonitorArraySize < 0 )
      return (unsigned int)SuggestedPhysicalMonitorArraySize;
    return v5;
  }
  return result;
}
