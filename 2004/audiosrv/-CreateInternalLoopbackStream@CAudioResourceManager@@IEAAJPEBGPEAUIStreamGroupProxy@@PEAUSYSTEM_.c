/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB74C
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EB52C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000FC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180011E70 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180013770 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x1800139B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180013C08 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B548 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B790 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052AB8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006EDF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180070AE8 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E485C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800E9FD8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByR.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x1800EA0B0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_1800EA0B0.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800EA198 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??_GStreamGroupParams@@QEAAPEAXI@Z @ 0x1800EB3CC (--_GStreamGroupParams@@QEAAPEAXI@Z.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDC0C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x18011C1E4 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18011E158 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  int v6; // eax
  int v7; // esi
  __int64 v8; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // r13d
  struct _GUID v10; // xmm6
  struct _GUID v11; // xmm7
  void *v12; // rdx
  void *v13; // rdx
  struct tWAVEFORMATEX *v14; // rdx
  struct tWAVEFORMATEX *v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  _DWORD *v18; // rbx
  _DWORD *v19; // rcx
  unsigned int v20; // eax
  _DWORD *v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rbx
  _DWORD *v26; // rcx
  unsigned int v27; // eax
  _DWORD *v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // r8
  __int64 v31; // r9
  struct tWAVEFORMATEX *v32; // rbx
  _DWORD *v33; // rcx
  unsigned int wFormatTag; // eax
  _DWORD *v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // r8
  __int64 v38; // r9
  struct tWAVEFORMATEX *v39; // rbx
  _DWORD *v40; // rcx
  unsigned int v41; // eax
  _DWORD *v42; // r8
  __int64 v43; // r9
  _DWORD *v44; // r8
  __int64 v45; // r9
  int SharedModeEnginePeriodicity; // eax
  double v47; // xmm1_8
  __int64 v48; // rbx
  void *v49; // rdx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // eax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rbx
  int v59; // eax
  struct ISaDeviceProxy *v60; // rcx
  LPVOID *v61; // rdx
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v63; // rbx
  int AudioSessionManager; // eax
  bool DoesExclusiveModeOverrideShared; // r12
  struct CAudioSessionManager *v66; // rdi
  __int64 *v67; // rsi
  __int64 v68; // rdi
  unsigned int v69; // eax
  int SaDeviceForSharedStream; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // r8
  LPVOID *v76; // rcx
  bool v77; // bl
  _DWORD *v78; // rbx
  __int64 v79; // r8
  __int64 v80; // r9
  void *v81; // rcx
  struct tWAVEFORMATEX *v82; // rcx
  struct tWAVEFORMATEX *v83; // rcx
  void *v84; // rcx
  void *v85; // rcx
  void *v87; // [rsp+28h] [rbp-130h]
  CEndpointCharacteristics *v88; // [rsp+D8h] [rbp-80h] BYREF
  struct ISaDeviceProxy *v89; // [rsp+E0h] [rbp-78h] BYREF
  struct tWAVEFORMATEX *v90; // [rsp+E8h] [rbp-70h] BYREF
  LPVOID v91; // [rsp+F0h] [rbp-68h] BYREF
  __int16 v92; // [rsp+F8h] [rbp-60h] BYREF
  __int16 v93; // [rsp+FAh] [rbp-5Eh] BYREF
  __int16 v94; // [rsp+FCh] [rbp-5Ch] BYREF
  __int16 v95; // [rsp+FEh] [rbp-5Ah] BYREF
  WORD v96; // [rsp+100h] [rbp-58h] BYREF
  WORD nChannels; // [rsp+102h] [rbp-56h] BYREF
  WORD v98; // [rsp+104h] [rbp-54h] BYREF
  WORD v99; // [rsp+106h] [rbp-52h] BYREF
  struct tWAVEFORMATEX *v100; // [rsp+108h] [rbp-50h] BYREF
  LPVOID Src; // [rsp+110h] [rbp-48h] BYREF
  __int64 v102; // [rsp+118h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+120h] [rbp-38h] BYREF
  struct CAudioSessionManagerProvider *v104; // [rsp+128h] [rbp-30h] BYREF
  struct CAudioSessionManager *v105; // [rsp+130h] [rbp-28h] BYREF
  SaDeviceParams *v106; // [rsp+138h] [rbp-20h] BYREF
  __int64 v107; // [rsp+140h] [rbp-18h] BYREF
  StreamGroupParams *v108; // [rsp+148h] [rbp-10h] BYREF
  int v109; // [rsp+150h] [rbp-8h] BYREF
  DWORD v110; // [rsp+154h] [rbp-4h] BYREF
  int v111; // [rsp+158h] [rbp+0h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+15Ch] [rbp+4h] BYREF
  DWORD nSamplesPerSec; // [rsp+160h] [rbp+8h] BYREF
  int v114; // [rsp+164h] [rbp+Ch] BYREF
  DWORD v115; // [rsp+168h] [rbp+10h] BYREF
  DWORD v116; // [rsp+16Ch] [rbp+14h] BYREF
  DWORD v117; // [rsp+170h] [rbp+18h] BYREF
  DWORD v118; // [rsp+174h] [rbp+1Ch] BYREF
  DWORD v119; // [rsp+178h] [rbp+20h] BYREF
  int v120; // [rsp+17Ch] [rbp+24h] BYREF
  int v121; // [rsp+180h] [rbp+28h] BYREF
  int v122; // [rsp+184h] [rbp+2Ch] BYREF
  int v123; // [rsp+188h] [rbp+30h] BYREF
  int v124; // [rsp+18Ch] [rbp+34h] BYREF
  int v125; // [rsp+190h] [rbp+38h] BYREF
  int v126; // [rsp+194h] [rbp+3Ch] BYREF
  int v127; // [rsp+198h] [rbp+40h] BYREF
  int v128; // [rsp+19Ch] [rbp+44h] BYREF
  int v129; // [rsp+1A0h] [rbp+48h] BYREF
  int v130; // [rsp+1A4h] [rbp+4Ch] BYREF
  int v131; // [rsp+1A8h] [rbp+50h] BYREF
  int v132; // [rsp+1ACh] [rbp+54h] BYREF
  int v133; // [rsp+1B0h] [rbp+58h] BYREF
  int v134; // [rsp+1B4h] [rbp+5Ch] BYREF
  SaDeviceParams *v135; // [rsp+1B8h] [rbp+60h] BYREF
  CAudioResourceManager *v136; // [rsp+1C0h] [rbp+68h]
  int v137[2]; // [rsp+1C8h] [rbp+70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+1D0h] [rbp+78h] BYREF
  unsigned __int64 v139; // [rsp+1D8h] [rbp+80h] BYREF
  int v140; // [rsp+1E0h] [rbp+88h]
  LPVOID *v141; // [rsp+1E8h] [rbp+90h]
  struct tWAVEFORMATEX *v142; // [rsp+1F0h] [rbp+98h] BYREF
  char v143; // [rsp+1F8h] [rbp+A0h]
  LPVOID *p_Src; // [rsp+200h] [rbp+A8h]
  struct tWAVEFORMATEX *v145; // [rsp+208h] [rbp+B0h] BYREF
  char v146; // [rsp+210h] [rbp+B8h]
  struct tWAVEFORMATEX **v147; // [rsp+218h] [rbp+C0h]
  struct tWAVEFORMATEX *v148; // [rsp+220h] [rbp+C8h] BYREF
  char v149; // [rsp+228h] [rbp+D0h]
  struct tWAVEFORMATEX **v150; // [rsp+230h] [rbp+D8h]
  struct tWAVEFORMATEX *v151; // [rsp+238h] [rbp+E0h] BYREF
  char v152; // [rsp+240h] [rbp+E8h]
  LPVOID *p_pv; // [rsp+248h] [rbp+F0h]
  void *v154; // [rsp+250h] [rbp+F8h] BYREF
  char v155; // [rsp+258h] [rbp+100h]
  SaDeviceParams **v156; // [rsp+260h] [rbp+108h]
  struct SaDeviceParams *v157; // [rsp+268h] [rbp+110h] BYREF
  char v158; // [rsp+270h] [rbp+118h]
  SaDeviceParams **v159; // [rsp+278h] [rbp+120h]
  SaDeviceParams *v160; // [rsp+280h] [rbp+128h] BYREF
  char v161; // [rsp+288h] [rbp+130h]
  GUID *v162; // [rsp+290h] [rbp+138h] BYREF
  const wchar_t *v163; // [rsp+298h] [rbp+140h] BYREF
  __int64 v164; // [rsp+2A0h] [rbp+148h] BYREF
  const wchar_t *v165; // [rsp+2A8h] [rbp+150h] BYREF
  GUID *v166; // [rsp+2B0h] [rbp+158h] BYREF
  const wchar_t *v167; // [rsp+2B8h] [rbp+160h] BYREF
  __int64 v168; // [rsp+2C0h] [rbp+168h] BYREF
  const wchar_t *v169; // [rsp+2C8h] [rbp+170h] BYREF
  const unsigned __int16 *v170; // [rsp+2D0h] [rbp+178h]
  char *v171; // [rsp+2D8h] [rbp+180h] BYREF
  GUID *v172; // [rsp+2E0h] [rbp+188h] BYREF
  GUID *v173; // [rsp+2E8h] [rbp+190h] BYREF
  GUID v174; // [rsp+2F8h] [rbp+1A0h] BYREF
  const wchar_t *v175; // [rsp+308h] [rbp+1B0h] BYREF
  _DWORD *v176; // [rsp+310h] [rbp+1B8h] BYREF
  const wchar_t *v177; // [rsp+318h] [rbp+1C0h] BYREF
  GUID *v178; // [rsp+320h] [rbp+1C8h] BYREF
  const wchar_t *v179; // [rsp+328h] [rbp+1D0h] BYREF
  _DWORD *v180; // [rsp+330h] [rbp+1D8h] BYREF
  const wchar_t *v181; // [rsp+338h] [rbp+1E0h] BYREF
  GUID v182; // [rsp+348h] [rbp+1F0h] BYREF
  GUID v183; // [rsp+358h] [rbp+200h] BYREF
  GUID v184; // [rsp+368h] [rbp+210h] BYREF
  GUID v185; // [rsp+378h] [rbp+220h] BYREF
  struct _GUID v186; // [rsp+388h] [rbp+230h] BYREF
  struct _GUID v187; // [rsp+398h] [rbp+240h] BYREF
  struct _GUID v188; // [rsp+3A8h] [rbp+250h] BYREF
  GUID v189; // [rsp+3B8h] [rbp+260h] BYREF
  GUID v190; // [rsp+3C8h] [rbp+270h] BYREF
  IID v191; // [rsp+3D8h] [rbp+280h] BYREF
  struct _GUID v192; // [rsp+3E8h] [rbp+290h] BYREF
  __int64 v193[2]; // [rsp+3F8h] [rbp+2A0h] BYREF
  struct _GUID v194; // [rsp+408h] [rbp+2B0h] BYREF
  struct _GUID v195; // [rsp+418h] [rbp+2C0h] BYREF
  struct _GUID v196; // [rsp+428h] [rbp+2D0h] BYREF
  _DWORD v197[3]; // [rsp+438h] [rbp+2E0h] BYREF
  struct _GUID v198; // [rsp+444h] [rbp+2ECh]
  int v199; // [rsp+454h] [rbp+2FCh]
  __int64 v200; // [rsp+458h] [rbp+300h]
  const unsigned __int16 *v201; // [rsp+460h] [rbp+308h]
  GUID v202; // [rsp+468h] [rbp+310h] BYREF
  GUID v203; // [rsp+478h] [rbp+320h] BYREF
  GUID v204; // [rsp+488h] [rbp+330h] BYREF
  GUID v205; // [rsp+498h] [rbp+340h] BYREF
  char v206[32]; // [rsp+4A8h] [rbp+350h] BYREF
  int *v207; // [rsp+4C8h] [rbp+370h]
  __int64 v208; // [rsp+4D0h] [rbp+378h]
  char v209[32]; // [rsp+4D8h] [rbp+380h] BYREF
  int *v210; // [rsp+4F8h] [rbp+3A0h]
  __int64 v211; // [rsp+500h] [rbp+3A8h]
  char v212[32]; // [rsp+508h] [rbp+3B0h] BYREF
  int *v213; // [rsp+528h] [rbp+3D0h]
  __int64 v214; // [rsp+530h] [rbp+3D8h]
  char v215[32]; // [rsp+538h] [rbp+3E0h] BYREF
  int *v216; // [rsp+558h] [rbp+400h]
  __int64 v217; // [rsp+560h] [rbp+408h]
  int v218[4]; // [rsp+568h] [rbp+410h] BYREF
  int v219[4]; // [rsp+578h] [rbp+420h] BYREF
  char v220[16]; // [rsp+588h] [rbp+430h] BYREF
  char v221[16]; // [rsp+598h] [rbp+440h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+620h] [rbp+4C8h]

  *(_QWORD *)v137 = a4;
  v170 = a2;
  v136 = this;
  v88 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v88);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2765LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_146;
  }
  v9 = (unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v88) != 0
     ? eLoopbackConnector
     : eHostProcessConnector;
  v174 = GUID_00000000_0000_0000_0000_000000000000;
  v183 = GUID_00000000_0000_0000_0000_000000000000;
  v184 = GUID_00000000_0000_0000_0000_000000000000;
  v182 = GUID_00000000_0000_0000_0000_000000000000;
  v185 = GUID_00000000_0000_0000_0000_000000000000;
  v6 = DeriveAudioProcessingModeConfiguration(
         0,
         0,
         0,
         v88,
         2,
         0,
         v9,
         0LL,
         0,
         0,
         &v174,
         &v183,
         &v184,
         (__int64)&v182,
         &v185);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2786LL;
    goto LABEL_5;
  }
  v91 = 0LL;
  Src = 0LL;
  v100 = 0LL;
  v90 = 0LL;
  v150 = &v90;
  v151 = 0LL;
  v152 = 1;
  v147 = &v100;
  v148 = 0LL;
  v149 = 1;
  p_Src = &Src;
  v145 = 0LL;
  v146 = 1;
  v141 = &v91;
  v142 = 0LL;
  v143 = 1;
  v10 = v174;
  v186 = v174;
  v11 = v183;
  v187 = v183;
  v188 = v184;
  v7 = DeriveDeviceGraphFormatsForStream(
         v88,
         0,
         (struct _GUID *)(unsigned int)v9,
         AUDCLNT_SHAREMODE_SHARED,
         0,
         &v188,
         &v187,
         &v186,
         0LL,
         &v142,
         &v145,
         &v148,
         &v151);
  if ( v143 )
  {
    v12 = *v141;
    *v141 = v142;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v146 )
  {
    v13 = *p_Src;
    *p_Src = v145;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( v149 )
  {
    v14 = *v147;
    *v147 = v148;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( v152 )
  {
    v15 = *v150;
    *v150 = v151;
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( v7 >= 0 )
  {
    v18 = v91;
    if ( v91 )
    {
      v20 = *(unsigned __int16 *)v91;
      if ( (_WORD)v20 == 0xFFFE )
      {
        v23 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v23 > 4u )
        {
          v126 = v18[5];
          v176 = v18 + 6;
          v127 = *((_DWORD *)v91 + 2);
          v128 = *((_DWORD *)v91 + 1);
          v93 = *((_WORD *)v91 + 1);
          v177 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            (__int64)v23,
            byte_180169319,
            (__int64)v23,
            v24,
            (void **)&v177,
            (__int64)&v93,
            (__int64)&v128,
            (__int64)&v127,
            (__int64 *)&v176,
            (__int64)&v126);
        }
      }
      else
      {
        v202 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v202.Data1 = v20;
        v21 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v21 > 4u )
        {
          v173 = &v202;
          v123 = *((_DWORD *)v91 + 2);
          v125 = *((_DWORD *)v91 + 1);
          v92 = *((_WORD *)v91 + 1);
          v175 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            (__int64)v21,
            byte_1801693BD,
            (__int64)v21,
            v22,
            (void **)&v175,
            (__int64)&v92,
            (__int64)&v125,
            (__int64)&v123,
            (__int64 *)&v173);
        }
      }
    }
    else
    {
      v19 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    65534LL,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v19 > 4u )
      {
        v122 = 0;
        v210 = &v122;
        v211 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)v19, byte_180169454, 0LL, 0LL, 3, (__int64)v209);
      }
    }
    v25 = Src;
    if ( Src )
    {
      v27 = *(unsigned __int16 *)Src;
      if ( (_WORD)v27 == 0xFFFE )
      {
        v30 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v30 > 4u )
        {
          v132 = v25[5];
          v180 = v25 + 6;
          v133 = *((_DWORD *)Src + 2);
          v134 = *((_DWORD *)Src + 1);
          v95 = *((_WORD *)Src + 1);
          v181 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            (__int64)v30,
            byte_180169177,
            (__int64)v30,
            v31,
            (void **)&v181,
            (__int64)&v95,
            (__int64)&v134,
            (__int64)&v133,
            (__int64 *)&v180,
            (__int64)&v132);
        }
      }
      else
      {
        v203 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v203.Data1 = v27;
        v28 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v28 > 4u )
        {
          v178 = &v203;
          v130 = *((_DWORD *)Src + 2);
          v131 = *((_DWORD *)Src + 1);
          v94 = *((_WORD *)Src + 1);
          v179 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            (__int64)v28,
            byte_18016921E,
            (__int64)v28,
            v29,
            (void **)&v179,
            (__int64)&v94,
            (__int64)&v131,
            (__int64)&v130,
            (__int64 *)&v178);
        }
      }
    }
    else
    {
      v26 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    (__int64)v19,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v26 > 4u )
      {
        v129 = 0;
        v213 = &v129;
        v214 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)v26, byte_1801692B8, 0LL, 0LL, 3, (__int64)v212);
      }
    }
    v32 = v100;
    if ( v100 )
    {
      wFormatTag = v100->wFormatTag;
      if ( (_WORD)wFormatTag == 0xFFFE )
      {
        v37 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v37 > 4u )
        {
          v111 = *(_DWORD *)&v32[1].nChannels;
          v164 = (__int64)&v32[1].nSamplesPerSec + 2;
          nAvgBytesPerSec = v100->nAvgBytesPerSec;
          nSamplesPerSec = v100->nSamplesPerSec;
          nChannels = v100->nChannels;
          v165 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            (__int64)v37,
            byte_180168FD8,
            (__int64)v37,
            v38,
            (void **)&v165,
            (__int64)&nChannels,
            (__int64)&nSamplesPerSec,
            (__int64)&nAvgBytesPerSec,
            &v164,
            (__int64)&v111);
        }
      }
      else
      {
        v204 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v204.Data1 = wFormatTag;
        v35 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v35 > 4u )
        {
          v162 = &v204;
          v110 = v100->nAvgBytesPerSec;
          v117 = v100->nSamplesPerSec;
          v96 = v100->nChannels;
          v163 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            (__int64)v35,
            byte_18016907E,
            (__int64)v35,
            v36,
            (void **)&v163,
            (__int64)&v96,
            (__int64)&v117,
            (__int64)&v110,
            (__int64 *)&v162);
        }
      }
    }
    else
    {
      v33 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    (__int64)v26,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v33 > 4u )
      {
        v109 = 0;
        v216 = &v109;
        v217 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)v33, byte_180169117, 0LL, 0LL, 3, (__int64)v215);
      }
    }
    v39 = v90;
    if ( v90 )
    {
      v41 = v90->wFormatTag;
      if ( (_WORD)v41 == 0xFFFE )
      {
        v44 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v44 > 4u )
        {
          v124 = *(_DWORD *)&v39[1].nChannels;
          v168 = (__int64)&v39[1].nSamplesPerSec + 2;
          v118 = v90->nAvgBytesPerSec;
          v119 = v90->nSamplesPerSec;
          v99 = v90->nChannels;
          v169 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            (__int64)v44,
            byte_180168E3C,
            (__int64)v44,
            v45,
            (void **)&v169,
            (__int64)&v99,
            (__int64)&v119,
            (__int64)&v118,
            &v168,
            (__int64)&v124);
        }
      }
      else
      {
        v205 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v205.Data1 = v41;
        v42 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      65534LL,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v42 > 4u )
        {
          v166 = &v205;
          v115 = v90->nAvgBytesPerSec;
          v116 = v90->nSamplesPerSec;
          v98 = v90->nChannels;
          v167 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            (__int64)v42,
            byte_180168EE1,
            (__int64)v42,
            v43,
            (void **)&v167,
            (__int64)&v98,
            (__int64)&v116,
            (__int64)&v115,
            (__int64 *)&v166);
        }
      }
    }
    else
    {
      v40 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    (__int64)v33,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v40 > 4u )
      {
        v114 = 0;
        v207 = &v114;
        v208 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)v40, byte_180168F79, 0LL, 0LL, 3, (__int64)v206);
      }
    }
    v189 = v10;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                    (__int64)v88,
                                    v9,
                                    v90,
                                    &v189,
                                    0,
                                    &v120,
                                    0LL,
                                    0LL,
                                    0LL);
    v7 = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      v16 = (unsigned int)SharedModeEnginePeriodicity;
      v17 = 2812LL;
      goto LABEL_54;
    }
    v47 = (double)v120 * 10000000.0 / (double)(int)v90->nSamplesPerSec + 0.5;
    v48 = (unsigned int)(int)v47;
    pv = 0LL;
    p_pv = &pv;
    v154 = 0LL;
    v155 = 1;
    v190 = v185;
    v191 = v11;
    v192 = v10;
    v7 = InitializeStreamAndModeDescriptors(
           v88,
           0,
           0x20002u,
           2,
           v9,
           &v192,
           &v191,
           &v190,
           0,
           0LL,
           (__int64)v91,
           0LL,
           v48,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0,
           0,
           0,
           0LL,
           0LL,
           0LL,
           &v154);
    if ( v155 )
    {
      v49 = *p_pv;
      *p_pv = v154;
      if ( v49 )
        CoTaskMemFree(v49);
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB05,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_136:
      v81 = pv;
      pv = 0LL;
      if ( v81 )
        CoTaskMemFree(v81);
      goto LABEL_138;
    }
    v199 = 0;
    v200 = (unsigned int)(int)v47;
    v197[0] = 2;
    v198 = v11;
    v197[2] = v9;
    v201 = a2;
    v197[1] = 1;
    if ( pv )
    {
      *((_DWORD *)pv + 2) = *((unsigned __int16 *)v91 + 8) + 18;
      *((_QWORD *)pv + 2) = v91;
      v48 = v200;
    }
    v108 = 0LL;
    *(GUID *)v193 = v182;
    v50 = DeriveStreamGroupParametersForStream(
            (__int64)v88,
            v9,
            2,
            v48,
            v87,
            (__int128 *)v193,
            0,
            0,
            (unsigned __int16 *)Src,
            0,
            &v108);
    v7 = v50;
    if ( v50 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB19,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v50);
      goto LABEL_134;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v51,
        (__int64)&AudioResourceManager_StreamSettings_Derived,
        v52,
        1LL,
        (__int64)v218);
    v107 = 0LL;
    v53 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
            g_DeviceGraphStore,
            a2,
            &v107);
    v7 = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v53);
LABEL_133:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v107);
LABEL_134:
      if ( v108 )
        StreamGroupParams::`scalar deleting destructor'((void **)v108);
      goto LABEL_136;
    }
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v107 + 112LL))(v107, &lpCriticalSection);
    v102 = 0LL;
    v54 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, StreamGroupParams *, _QWORD, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
            g_DeviceGraphManager,
            v107,
            v108,
            0LL,
            pv,
            &v102);
    v7 = v54;
    if ( v54 < 0 )
    {
      v55 = 2855LL;
LABEL_72:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v55,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v54);
      goto LABEL_109;
    }
    v54 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct IStreamGroupProxy *, _QWORD))(*(_QWORD *)v102 + 240LL))(
            v102,
            v197,
            a3,
            *(_QWORD *)v137);
    v7 = v54;
    if ( v54 < 0 )
    {
      v55 = 2858LL;
      goto LABEL_72;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v56, (__int64)&AudioResourceManager_Stream_Created, v57, 1LL, (__int64)v219);
    v89 = 0LL;
    v58 = v102;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v89);
    v59 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v58 + 192LL))(v58, &v89);
    v7 = v59;
    if ( v59 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB30,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v59);
LABEL_108:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v89);
LABEL_109:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v102);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_133;
    }
    v60 = v89;
    if ( !v89 )
    {
      v106 = 0LL;
      v156 = &v106;
      v157 = 0LL;
      v158 = 1;
      v194 = v11;
      v195 = v10;
      v7 = DeriveSaDeviceParametersForStream(
             v88,
             AUDCLNT_SHAREMODE_SHARED,
             v9,
             &v195,
             &v194,
             v90,
             v100,
             *((_QWORD *)v108 + 3),
             &v157);
      if ( v158 )
      {
        v61 = (LPVOID *)*v156;
        *v156 = v157;
        if ( v61 )
          SaDeviceParams::`scalar deleting destructor'(v61);
      }
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB38,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v7);
LABEL_106:
        if ( v106 )
          SaDeviceParams::`scalar deleting destructor'((LPVOID *)v106);
        goto LABEL_108;
      }
      v104 = 0LL;
      AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v104);
      v7 = AudioSessionManagerProvider;
      if ( AudioSessionManagerProvider < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB3C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)AudioSessionManagerProvider);
        v63 = v104;
LABEL_104:
        if ( v63 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v63);
        goto LABEL_106;
      }
      v105 = 0LL;
      v63 = v104;
      AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v104, a2, &v105);
      v7 = AudioSessionManager;
      if ( AudioSessionManager < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB3F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)AudioSessionManager);
LABEL_90:
        v66 = v105;
LABEL_102:
        if ( v66 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v66);
        goto LABEL_104;
      }
      DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v88);
      if ( DoesExclusiveModeOverrideShared )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v105 + 77, 0, 0) )
        {
          v7 = -2005139364;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB47,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x887C005CLL);
          v63 = v104;
          goto LABEL_90;
        }
        v10 = v174;
        v63 = v104;
      }
      v139 = 0LL;
      v140 = 0;
      v196 = v10;
      v67 = (__int64 *)*((_QWORD *)v136 + 6);
      v68 = *v67;
      v69 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v88 + 56LL))(v88);
      SaDeviceForSharedStream = (*(__int64 (__fastcall **)(__int64 *, const unsigned __int16 *, _QWORD, struct _GUID *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, _DWORD, unsigned __int64 *))(v68 + 56))(
                                  v67,
                                  v170,
                                  v69,
                                  &v196,
                                  v9,
                                  0,
                                  &v139);
      v7 = SaDeviceForSharedStream;
      v66 = v105;
      if ( SaDeviceForSharedStream < 0 )
      {
        v71 = 2893LL;
        goto LABEL_100;
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v89);
      SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                  v136,
                                  v88,
                                  v106,
                                  0x20002u,
                                  AUDCLNT_SHAREMODE_SHARED,
                                  (struct SaDeviceResourceParams *)&v139,
                                  DoesExclusiveModeOverrideShared,
                                  0,
                                  v66,
                                  0,
                                  0,
                                  &v89);
      v7 = SaDeviceForSharedStream;
      if ( SaDeviceForSharedStream < 0 )
      {
        v71 = 2898LL;
        goto LABEL_100;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v72,
          (__int64)&AudioResourceManager_SaDevice_Created,
          v73,
          1LL,
          (__int64)v221);
      SaDeviceForSharedStream = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, __int64, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                  g_DeviceGraphManager,
                                  v102,
                                  v89,
                                  1LL,
                                  *(_QWORD *)v137);
      v7 = SaDeviceForSharedStream;
      if ( SaDeviceForSharedStream < 0 )
      {
        v71 = 2910LL;
LABEL_100:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v71,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)SaDeviceForSharedStream);
        if ( v139 )
          ReleaseAudioResourceHandle(v139);
        goto LABEL_102;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v74,
          (__int64)&AudioResourceManager_SaDevice_Connected,
          v75,
          1LL,
          (__int64)v220);
      if ( v139 )
        ReleaseAudioResourceHandle(v139);
      if ( v66 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v66);
      if ( v63 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v63);
      if ( v106 )
        SaDeviceParams::`scalar deleting destructor'((LPVOID *)v106);
      v60 = v89;
    }
    v135 = 0LL;
    v159 = &v135;
    v160 = 0LL;
    v161 = 1;
    v77 = (*(int (__fastcall **)(struct ISaDeviceProxy *, SaDeviceParams **))(*(_QWORD *)v60 + 104LL))(v60, &v160) >= 0;
    if ( v161 )
    {
      v76 = (LPVOID *)*v159;
      *v159 = v160;
      if ( v76 )
        SaDeviceParams::`scalar deleting destructor'(v76);
    }
    if ( v77 )
    {
      v78 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    (__int64)v76,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v78 > 4u )
      {
        v121 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v88 + 56LL))(v88);
        v171 = (char *)v135 + 80;
        v172 = &GUID_00000000_0000_0000_0000_000000000000;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          (__int64)v78,
          byte_180168DF5,
          v79,
          v80,
          &v172,
          &v171,
          (__int64)&v121);
      }
    }
    if ( v135 )
      SaDeviceParams::`scalar deleting destructor'((LPVOID *)v135);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v89);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v102);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v7 = 0;
    goto LABEL_133;
  }
  v16 = (unsigned int)v7;
  v17 = 2802LL;
LABEL_54:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v16);
LABEL_138:
  v82 = v90;
  v90 = 0LL;
  if ( v82 )
    CoTaskMemFree(v82);
  v83 = v100;
  v100 = 0LL;
  if ( v83 )
    CoTaskMemFree(v83);
  v84 = Src;
  Src = 0LL;
  if ( v84 )
    CoTaskMemFree(v84);
  v85 = v91;
  v91 = 0LL;
  if ( v85 )
    CoTaskMemFree(v85);
LABEL_146:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v88);
  return (unsigned int)v7;
}
