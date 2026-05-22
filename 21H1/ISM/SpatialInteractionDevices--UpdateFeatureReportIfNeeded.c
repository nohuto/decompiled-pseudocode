/*
 * XREFs of SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800CA988
 * Callers:
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800C79E0 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x1800C7B7C (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x1800C9528 (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 *     ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x1800C9728 (-GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x1800CA7B0 (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevices::UpdateFeatureReportIfNeeded(__int64 *a1, __int64 a2)
{
  _BYTE *v2; // rax
  char v3; // di
  void *v5; // rcx
  size_t v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = (_BYTE *)a1[36];
  v3 = a2;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 296) && *v2 == (_BYTE)a2 )
      return 0LL;
  }
  else
  {
    v5 = (void *)a1[26];
    a1[36] = (__int64)v5;
    v6 = *((unsigned __int16 *)a1 + 36);
    *((_DWORD *)a1 + 70) = *((unsigned __int16 *)a1 + 36);
    memset_0(v5, 0, v6);
  }
  v7 = *a1;
  LOBYTE(a2) = v3;
  *((_BYTE *)a1 + 296) = 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 40LL))(
             v7,
             a2,
             a1[36],
             *((unsigned int *)a1 + 70));
  if ( (int)result < 0 )
    return result;
  *((_BYTE *)a1 + 296) = 1;
  return 0LL;
}
