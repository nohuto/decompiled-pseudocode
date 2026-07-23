/*
 * XREFs of wil_StagingConfig_QueryFeatureState @ 0x18011A0A8
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x18009BBC0 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     wil_details_StagingConfig_Load @ 0x18009BDF8 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x18009C0E4 (wil_details_StagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // esi
  unsigned int FeatureState; // ebx
  _BYTE v9[56]; // [rsp+30h] [rbp-148h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-110h]
  int v11; // [rsp+80h] [rbp-F8h]
  __int64 v12; // [rsp+90h] [rbp-E8h] BYREF

  v5 = a3;
  FeatureState = 0;
  if ( !(unsigned int)wil_details_StagingConfig_Load((__int64)v9, a2, a3, &v12) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((__int64)v9, a2, v5, a4);
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return FeatureState;
}
