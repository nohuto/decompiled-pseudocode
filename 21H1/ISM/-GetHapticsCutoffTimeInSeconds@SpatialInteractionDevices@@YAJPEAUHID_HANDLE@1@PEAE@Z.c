/*
 * XREFs of ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x1800C9728
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016BF00 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x1800C769C (--$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800CA988 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 */

__int64 __fastcall SpatialInteractionDevices::GetHapticsCutoffTimeInSeconds(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        unsigned __int8 *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  ULONG v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !this )
  {
    v5 = -2147024809;
    v6 = 799LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 800LL;
    goto LABEL_3;
  }
  *(_BYTE *)a2 = 0;
  v8 = 0LL;
  v9 = *((unsigned int *)this + 46);
  if ( !(_DWORD)v9 )
    return 0LL;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 22) + 72 * v8;
    if ( *(_WORD *)v10 == 14 && !*(_BYTE *)(v10 + 12) && *(_WORD *)(v10 + 56) == 40 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= (unsigned int)v9 )
      return 0LL;
  }
  LOBYTE(v8) = *(_BYTE *)(v10 + 2);
  result = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(this, v8, v9);
  if ( (int)result >= 0 )
  {
    v5 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned char>(
           (__int64)this,
           (__int64)this + 280,
           v10,
           a2,
           v11);
    if ( v5 < 0 )
    {
      v6 = 811LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  return result;
}
