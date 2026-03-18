/*
 * XREFs of ACPIBuildProcessThermalZoneHid @ 0x1C004AC70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneHid(__int64 a1)
{
  __int64 v1; // rax
  signed __int32 v3; // edx
  void *v4; // r8
  char v5; // r11
  void *v6; // r10
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v3 = 0;
  v4 = &unk_1C006FB8B;
  *(_DWORD *)(a1 + 32) = 0;
  v5 = 0;
  v6 = &unk_1C006FB8B;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = *(void **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(void **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x51u,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      0,
      v5,
      (__int64)v4,
      (__int64)v6);
    v3 = *(_DWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v3);
  return 0LL;
}
