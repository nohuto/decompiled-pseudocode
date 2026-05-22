/*
 * XREFs of ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800C6210
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800C5D7C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 *     ?ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N0@Z @ 0x18016E204 (-ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Win.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800C5188 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     ?OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z @ 0x1800C63AC (-OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::OpenBestMatchingControllerKey(
        SpatialInteractionDevices *a1,
        unsigned __int16 a2,
        HKEY *a3,
        unsigned __int16 a4,
        int a5,
        PHKEY phkResult,
        _BYTE *a7)
{
  int v7; // r12d
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // ebx
  const wchar_t *v12; // rbx
  HKEY v13; // rcx
  HKEY v14; // rax
  HKEY hKey[2]; // [rsp+30h] [rbp-91h] BYREF
  WCHAR SubKey[64]; // [rsp+40h] [rbp-81h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v7 = a4;
  v8 = (unsigned __int16)a3;
  v9 = a2;
  *phkResult = 0LL;
  *a7 = 0;
  hKey[0] = 0LL;
  v10 = SpatialInteractionDevices::OpenHardwareKey(a1, (const wchar_t *)hKey, a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionDevice.h",
      (const char *)(unsigned int)v10);
LABEL_11:
    v13 = hKey[0];
    goto LABEL_13;
  }
  if ( a5 == 1 )
  {
    v12 = L"Left";
  }
  else if ( a5 == 2 )
  {
    v12 = L"Right";
  }
  else
  {
    v12 = L"Unspecified";
  }
  memset_0(SubKey, 0, sizeof(SubKey));
  swprintf_s<64>(SubKey, L"%04x_%04x_%04x_%ws", v9, v8, v7, v12);
  if ( !RegOpenKeyExW(hKey[0], SubKey, 0, 0x20019u, phkResult)
    || (swprintf_s<64>(SubKey, L"%04x_%04x_%ws", v9, v8, v12), !RegOpenKeyExW(hKey[0], SubKey, 0, 0x20019u, phkResult)) )
  {
    v11 = 0;
    *a7 = 1;
    goto LABEL_11;
  }
  v14 = hKey[0];
  v13 = 0LL;
  hKey[0] = 0LL;
  *phkResult = v14;
  v11 = 0;
LABEL_13:
  if ( v13 )
    RegCloseKey(v13);
  return v11;
}
