/*
 * XREFs of ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C005F860
 * Callers:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C0017A68 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(
        struct wil_FeatureState *a1,
        unsigned int a2,
        int a3,
        int *a4)
{
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  v5 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v6 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
         a2,
         a3 == 0,
         &v9,
         &v10);
  if ( !v6 )
  {
    v7 = HIDWORD(v10);
    v5 = 1;
    *(_DWORD *)a1 = (HIDWORD(v10) >> 4) & 3;
    *((_BYTE *)a1 + 4) = BYTE1(v7) & 0x3F;
    *((_DWORD *)a1 + 3) = v11;
    *((_DWORD *)a1 + 2) = (unsigned __int16)v7 >> 14;
    *((_DWORD *)a1 + 5) = (v7 >> 6) & 1;
LABEL_5:
    *((_DWORD *)a1 + 4) = (v7 >> 7) & 1;
    return v5;
  }
  if ( v6 == 279 )
  {
    v7 = HIDWORD(v10);
    goto LABEL_5;
  }
  return v5;
}
