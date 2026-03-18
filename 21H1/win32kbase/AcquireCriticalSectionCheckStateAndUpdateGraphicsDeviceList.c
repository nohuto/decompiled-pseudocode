/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C004E1B0
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00C6BF0 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00C7E10 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C014A250 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C014A4E0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C014A640 (NtGdiGetCertificateSize.c)
 * Callees:
 *     AcquireCriticalSectionAndCheckState @ 0x1C004E210 (AcquireCriticalSectionAndCheckState.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C0093320 (UpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0096410 (UserRemoteConnectedSessionUsingXddm.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  int v1; // ebx
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v1 = result;
  if ( (int)result >= 0 )
  {
    v4 = 0;
    UpdateGraphicsDeviceList(&v4);
    if ( v4 && gfSwitchInProgress )
    {
      v1 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit(v2);
      return (unsigned int)v1;
    }
    v3 = UserRemoteConnectedSessionUsingXddm();
    v2 = 3223193056LL;
    if ( v3 )
      v1 = -1071774240;
    if ( v1 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
