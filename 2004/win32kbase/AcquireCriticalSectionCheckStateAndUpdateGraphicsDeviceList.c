/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C005BB70
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00C7310 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00C8530 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C0143F00 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C0144190 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C01442F0 (NtGdiGetCertificateSize.c)
 * Callees:
 *     AcquireCriticalSectionAndCheckState @ 0x1C005BBD0 (AcquireCriticalSectionAndCheckState.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C00B3D60 (UserRemoteConnectedSessionUsingXddm.c)
 *     UpdateGraphicsDeviceList @ 0x1C00B4A30 (UpdateGraphicsDeviceList.c)
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
