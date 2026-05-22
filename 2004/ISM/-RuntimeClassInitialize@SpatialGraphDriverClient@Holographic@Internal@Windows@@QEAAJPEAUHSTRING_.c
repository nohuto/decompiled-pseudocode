/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x1801636A0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDriverClient@234@AEAPEAUHSTRING__@@USpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@$$QEAUSpatialGraphSettings@456@@Z @ 0x18014F39C (--$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDrive.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@$$QEA_N@Z @ 0x18014E304 (--$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@.c)
 *     ?AddNodePoseValidityChangedCallback@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJPEAUISpatialGraphNodePoseValidityChangedCallback@234@@Z @ 0x180159074 (-AddNodePoseValidityChangedCallback@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x18015A0B8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x18015EA04 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(
        __int64 a1,
        char *a2,
        char a3,
        int *a4)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper **v6; // r14
  __int128 *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  const char *v10; // r9
  __int64 result; // rax
  int SupportedDDILevelsInternal; // eax
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v16; // rcx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v17; // rcx
  int v18; // eax
  int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v21; // [rsp+50h] [rbp+8h] BYREF
  int v22; // [rsp+60h] [rbp+18h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  *(_BYTE *)(a1 + 160) = a3;
  if ( a4 )
    *a4 = 3;
  v6 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  v7 = (__int128 *)(a1 + 80);
  try
  {
    v8 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(v7, a2, 0, 1, 0LL, v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    SupportedDDILevelsInternal = Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevelsInternal(
                                   (Windows::Internal::Holographic::HolographicDriverHandleWrapper **)a1,
                                   (struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *)&v23);
    if ( SupportedDDILevelsInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        408LL,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)SupportedDDILevelsInternal);
    if ( !HIDWORD(v23) )
    {
      v14 = 1;
LABEL_12:
      if ( a4 )
        *a4 = v14;
      LOBYTE(v22) = 0;
      v21 = 1;
      HolographicDriverClientTrace::DriverCompatibilityDetermined<enum TraceDriverType,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS const &,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS &,bool>(
        &v21,
        v13,
        &v23,
        (char *)&v22);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AD,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x80070032LL);
      return 2147942450LL;
    }
    v15 = v23;
    if ( (unsigned int)v23 > 8 )
    {
      v14 = 2;
      goto LABEL_12;
    }
    if ( a4 )
      *a4 = 4;
    v16 = *v6;
    *((_QWORD *)v16 + 20) = v15;
    *((_BYTE *)v16 + 168) = 1;
    LOBYTE(v22) = 1;
    v21 = 1;
    HolographicDriverClientTrace::DriverCompatibilityDetermined<enum TraceDriverType,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS const &,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS &,bool>(
      &v21,
      v13,
      &v23,
      (char *)&v22);
    v17 = *v6;
    *(_BYTE *)(a1 + 162) = *((_DWORD *)*v6 + 41) >= 4u;
    *(_BYTE *)(a1 + 163) = *((_DWORD *)v17 + 41) >= 2u;
    *(_BYTE *)(a1 + 164) = *((_DWORD *)v17 + 41) >= 3u;
    *(_BYTE *)(a1 + 165) = *((_DWORD *)v17 + 41) >= 8u;
    v18 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::AddNodePoseValidityChangedCallback(
            *(Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper **)(a1 + 96),
            (struct Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback *)((a1 + 40) & -(__int64)(a1 != -32)));
    v19 = v18;
    if ( v18 >= 0 )
      v19 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDF,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v18);
    if ( v19 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B5,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v19);
      result = (unsigned int)v19;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B8,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v10);
  }
  return result;
}
