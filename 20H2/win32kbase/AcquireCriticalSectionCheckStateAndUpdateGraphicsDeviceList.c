/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00BBFE0
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00C6580 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00C77A0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C0141A70 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C0141D00 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C0141E60 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0013B40 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C0053230 (UpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00BC040 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  __int64 v1; // rdx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v2 = result;
  if ( (int)result >= 0 )
  {
    v8 = 0;
    UpdateGraphicsDeviceList(&v8, v1);
    if ( v8 && gfSwitchInProgress )
    {
      v2 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
      return (unsigned int)v2;
    }
    v7 = UserRemoteConnectedSessionUsingXddm();
    v4 = 3223193056LL;
    if ( v7 )
      v2 = -1071774240;
    if ( v2 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
