/*
 * XREFs of SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800C79E0
 * Callers:
 *     ?GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z @ 0x1800C9808 (-GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800894A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800CA988 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800CBBBC (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800CC0D0 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  _BYTE *v5; // r14
  _WORD *v6; // rdi
  __int64 v9; // rsi
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rbx
  float v13; // xmm5_4
  __int64 result; // rax
  unsigned int ScaledUsageValue; // eax
  int v16; // edx
  int v17; // eax
  const struct _HIDP_VALUE_CAPS *v18; // r8
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LONG UsageValue; // [rsp+90h] [rbp+18h] BYREF

  LOBYTE(UsageValue) = a3;
  v5 = a5;
  v6 = (_WORD *)(a2 + 2);
  LOBYTE(a3) = 0;
  *a5 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 184);
    v11 = 0LL;
    if ( v10 )
      break;
LABEL_10:
    v13 = 0.0;
LABEL_11:
    *(float *)(a4 + 4 * v9) = v13;
    v6 += 8;
    if ( (unsigned __int64)++v9 >= 3 )
    {
      *v5 = a3;
      return 0LL;
    }
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 176) + 72 * v11;
    if ( *(v6 - 1) == *(_WORD *)(v12 + 10)
      && v6[1] == *(_WORD *)v12
      && *v6 == *(_WORD *)(v12 + 8)
      && !*(_BYTE *)(v12 + 12)
      && v6[2] == *(_WORD *)(v12 + 56)
      && ((*(_DWORD *)(v12 + 36) - 17) & 0xFFFFFFFD) == 0 )
    {
      break;
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10 )
      goto LABEL_10;
  }
  LOBYTE(v11) = *(_BYTE *)(v12 + 2);
  result = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(a1, v11, a3);
  if ( (int)result < 0 )
    return result;
  ScaledUsageValue = HidP_GetScaledUsageValue(
                       HidP_Feature,
                       *(_WORD *)v12,
                       *(_WORD *)(v12 + 6),
                       *(_WORD *)(v12 + 56),
                       &UsageValue,
                       *(PHIDP_PREPARSED_DATA *)(a1 + 56),
                       *(PCHAR *)(a1 + 288),
                       *(_DWORD *)(a1 + 280));
  v17 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ScaledUsageValue, v16);
  if ( v17 >= 0 )
  {
    v13 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
            (SpatialInteractionDevices::Internal *)UsageValue,
            v12,
            v18);
    if ( *(_DWORD *)(v12 + 36) == 19 )
      v13 = v13 * 2.54;
    LOBYTE(a3) = 1;
    goto LABEL_11;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x4DA,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
           (const char *)(unsigned int)v17);
}
