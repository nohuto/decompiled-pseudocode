/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000FC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013280 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x1800139B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180013C08 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180017CE0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18001DA40 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D58 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18004BCA0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180054860 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006D68C (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006ECF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x1800709E8 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB120 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D15F0 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800DCB64 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E479C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800E9F18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByR.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800EA178 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlg.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800EB23C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EB46C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ECEF8 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@7PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED0CC (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDB4C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        struct CEndpointCharacteristics *a12,
        unsigned int a13,
        _AUDCLNT_SHAREMODE a14,
        struct IAudioGraphCallback *a15,
        struct tWAVEFORMATEX *a16,
        __int64 a17,
        __int64 a18,
        struct _GUID *a19,
        struct _GUID *a20,
        const struct _GUID *a21,
        unsigned int a22,
        const unsigned __int16 *a23,
        unsigned int a24,
        const struct SPATIAL_STREAM_PROPERTIES *a25,
        struct IProcessSubmixProxy *a26,
        struct SYSTEM_AUDIO_STREAM *a27)
{
  __int64 *v27; // rcx
  struct IProcessSubmixProxy *v28; // r15
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64 *, unsigned __int16 **); // rax
  int v31; // eax
  int v32; // edi
  int v33; // eax
  unsigned int v34; // edx
  struct IMMDevice *v35; // rcx
  void (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // r9
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // rcx
  int v40; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v41; // edx
  enum _AUDCLNT_SHAREMODE v42; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43; // r13d
  unsigned int v44; // eax
  void *v45; // rcx
  int v46; // eax
  unsigned int v47; // ebx
  int v48; // eax
  struct _GUID v49; // xmm6
  struct _GUID v50; // xmm7
  struct _GUID v51; // xmm8
  void *v52; // rcx
  void *v53; // rcx
  struct tWAVEFORMATEX *v54; // rcx
  struct tWAVEFORMATEX *v55; // rcx
  __int64 v56; // rcx
  unsigned int wFormatTag; // eax
  _DWORD *v58; // rdx
  _DWORD *v59; // rbx
  _DWORD *v60; // rcx
  unsigned int v61; // eax
  _DWORD *v62; // r8
  int v63; // r9d
  __int16 v64; // dx
  __int64 v65; // r10
  __int16 v66; // cx
  __int64 v67; // rcx
  _DWORD *v68; // rbx
  _DWORD *v69; // rcx
  unsigned int v70; // eax
  _DWORD *v71; // r8
  int v72; // r9d
  __int16 v73; // dx
  __int64 v74; // r10
  __int16 v75; // cx
  __int64 v76; // rcx
  struct tWAVEFORMATEX *v77; // rbx
  _DWORD *v78; // rcx
  unsigned int v79; // eax
  _DWORD *v80; // r8
  int v81; // r9d
  WORD v82; // dx
  __int64 v83; // r10
  WORD nChannels; // cx
  __int64 v85; // rcx
  struct tWAVEFORMATEX *v86; // rbx
  _DWORD *v87; // rcx
  unsigned int v88; // eax
  _DWORD *v89; // r8
  int v90; // r9d
  WORD v91; // dx
  int v92; // eax
  __int64 v93; // r10
  WORD v94; // cx
  __int64 v95; // rcx
  __int64 v96; // rax
  void (__fastcall *v97)(struct IAudioStreamInfo *); // rax
  unsigned int v98; // r15d
  struct CEndpointCharacteristics *v99; // r12
  void *v100; // rcx
  void *v101; // rcx
  __int64 v102; // rcx
  unsigned int v103; // r14d
  struct IAudioStreamInfo *v104; // rbx
  int v105; // eax
  __int64 v106; // rax
  int v107; // eax
  int v108; // eax
  unsigned int v109; // edx
  SaDeviceParams *v110; // rcx
  unsigned __int64 v111; // r9
  __int64 v112; // rdx
  const struct tWAVEFORMATEX *v113; // rbx
  const struct tWAVEFORMATEX *v114; // rax
  unsigned int v115; // edx
  int v116; // eax
  unsigned int v117; // edx
  SaDeviceParams *v118; // rcx
  __int64 v119; // rsi
  unsigned int v120; // edx
  SaDeviceParams *v121; // rcx
  unsigned __int16 *v122; // rdi
  __int64 *v123; // rsi
  __int64 v124; // rbx
  unsigned int v125; // eax
  int v126; // eax
  int *v127; // rbx
  __int64 v128; // rdx
  unsigned __int64 v129; // r9
  __int64 v130; // rdx
  struct CAudioSessionManager *v131; // r15
  unsigned __int16 *v132; // r14
  struct CAudioSessionManager **v133; // rsi
  int v134; // eax
  int v135; // eax
  int AudioSessionManagerInternal; // eax
  struct CAudioSessionManager *v137; // rcx
  __int64 v138; // rcx
  bool v139; // r15
  __int64 v140; // rdx
  CAudioResourceManager *v141; // rcx
  int SaDeviceForOffloadedStream; // eax
  struct CAudioSessionManager *v143; // rcx
  __int64 v144; // r8
  __int64 v145; // rdx
  unsigned int v146; // esi
  CAudioResourceManager *v147; // rcx
  int v148; // eax
  struct ISaDeviceProxy *v149; // rcx
  bool v150; // r12
  struct CAudioSessionManager *v151; // rsi
  struct SaDeviceParams *v152; // r14
  char v153; // di
  char v154; // al
  LPVOID *v155; // rax
  LPVOID *v156; // rsi
  int v157; // eax
  int v158; // eax
  unsigned int v159; // edx
  char v160; // al
  int v161; // eax
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r10
  SaDeviceParams *v165; // rbx
  struct ISaDeviceProxy *v166; // rcx
  bool v167; // bl
  unsigned int v168; // edx
  SaDeviceParams *v169; // rcx
  __int64 v170; // rdi
  __int64 v171; // rbx
  int v172; // eax
  int v173; // r8d
  int v174; // r9d
  void *v175; // rbx
  __int64 v176; // rbx
  int v177; // eax
  int v178; // eax
  __int64 v179; // rdx
  unsigned int v180; // eax
  int v181; // eax
  struct IAudioGraphCallback *v182; // rcx
  __int64 v183; // rdx
  void *v184; // rcx
  void *v185; // rcx
  struct tWAVEFORMATEX *v186; // rcx
  void *v187; // rcx
  struct tWAVEFORMATEX *v188; // rcx
  void *v189; // rcx
  int v191; // [rsp+28h] [rbp-130h]
  int v192; // [rsp+28h] [rbp-130h]
  int v193; // [rsp+28h] [rbp-130h]
  int v194; // [rsp+28h] [rbp-130h]
  int v195; // [rsp+28h] [rbp-130h]
  int v196; // [rsp+28h] [rbp-130h]
  bool v197; // [rsp+40h] [rbp-118h]
  struct tWAVEFORMATEX *v198; // [rsp+48h] [rbp-110h]
  char v199; // [rsp+D8h] [rbp-80h]
  struct ISaDeviceProxy *v200; // [rsp+E0h] [rbp-78h] BYREF
  bool v201; // [rsp+E8h] [rbp-70h]
  unsigned int v202; // [rsp+ECh] [rbp-6Ch]
  __int64 v203; // [rsp+F0h] [rbp-68h] BYREF
  unsigned int v204; // [rsp+F8h] [rbp-60h]
  struct CAudioSessionManager *v205; // [rsp+100h] [rbp-58h] BYREF
  struct IAudioStreamInfo *v206; // [rsp+108h] [rbp-50h]
  struct tWAVEFORMATEX *v207; // [rsp+110h] [rbp-48h] BYREF
  __int16 v208; // [rsp+118h] [rbp-40h] BYREF
  __int16 v209; // [rsp+11Ah] [rbp-3Eh] BYREF
  __int16 v210; // [rsp+11Ch] [rbp-3Ch] BYREF
  WORD v211; // [rsp+11Eh] [rbp-3Ah] BYREF
  WORD v212; // [rsp+120h] [rbp-38h] BYREF
  WORD v213; // [rsp+122h] [rbp-36h] BYREF
  WORD v214; // [rsp+124h] [rbp-34h] BYREF
  int v215; // [rsp+128h] [rbp-30h]
  struct tWAVEFORMATEX *Src; // [rsp+130h] [rbp-28h] BYREF
  LPVOID v217; // [rsp+138h] [rbp-20h] BYREF
  LPVOID v218; // [rsp+140h] [rbp-18h] BYREF
  WORD v219; // [rsp+148h] [rbp-10h] BYREF
  WORD v220; // [rsp+14Ah] [rbp-Eh] BYREF
  __int16 v221; // [rsp+14Ch] [rbp-Ch] BYREF
  int *v222; // [rsp+150h] [rbp-8h] BYREF
  __int64 v223; // [rsp+158h] [rbp+0h] BYREF
  __int64 v224; // [rsp+160h] [rbp+8h] BYREF
  SaDeviceParams *v225; // [rsp+168h] [rbp+10h] BYREF
  LPVOID v226; // [rsp+170h] [rbp+18h] BYREF
  unsigned __int16 *v227; // [rsp+178h] [rbp+20h] BYREF
  unsigned int v228; // [rsp+180h] [rbp+28h]
  int v229; // [rsp+184h] [rbp+2Ch] BYREF
  LPVOID pv; // [rsp+188h] [rbp+30h] BYREF
  struct IAudioProcess *v231; // [rsp+190h] [rbp+38h]
  __int64 v232; // [rsp+198h] [rbp+40h] BYREF
  SaDeviceParams *v233; // [rsp+1A0h] [rbp+48h] BYREF
  __int64 v234; // [rsp+1A8h] [rbp+50h] BYREF
  __int64 v235; // [rsp+1B0h] [rbp+58h] BYREF
  __int64 v236; // [rsp+1B8h] [rbp+60h] BYREF
  LPVOID v237; // [rsp+1C0h] [rbp+68h] BYREF
  int v238; // [rsp+1C8h] [rbp+70h] BYREF
  WINBOOL fPending; // [rsp+1CCh] [rbp+74h] BYREF
  DWORD v240; // [rsp+1D0h] [rbp+78h] BYREF
  DWORD v241; // [rsp+1D4h] [rbp+7Ch] BYREF
  int v242; // [rsp+1D8h] [rbp+80h] BYREF
  DWORD v243; // [rsp+1DCh] [rbp+84h] BYREF
  DWORD v244; // [rsp+1E0h] [rbp+88h] BYREF
  int v245; // [rsp+1E4h] [rbp+8Ch] BYREF
  int v246; // [rsp+1E8h] [rbp+90h] BYREF
  int v247; // [rsp+1ECh] [rbp+94h] BYREF
  WINBOOL v248; // [rsp+1F0h] [rbp+98h] BYREF
  int v249; // [rsp+1F4h] [rbp+9Ch] BYREF
  int v250; // [rsp+1F8h] [rbp+A0h] BYREF
  int v251; // [rsp+1FCh] [rbp+A4h] BYREF
  int v252; // [rsp+200h] [rbp+A8h] BYREF
  int v253; // [rsp+204h] [rbp+ACh] BYREF
  int v254; // [rsp+208h] [rbp+B0h] BYREF
  WINBOOL v255; // [rsp+20Ch] [rbp+B4h] BYREF
  int v256; // [rsp+210h] [rbp+B8h] BYREF
  int v257; // [rsp+214h] [rbp+BCh] BYREF
  int v258; // [rsp+218h] [rbp+C0h] BYREF
  int v259; // [rsp+21Ch] [rbp+C4h] BYREF
  DWORD v260; // [rsp+220h] [rbp+C8h] BYREF
  DWORD v261; // [rsp+224h] [rbp+CCh] BYREF
  WINBOOL v262; // [rsp+228h] [rbp+D0h] BYREF
  int v263; // [rsp+22Ch] [rbp+D4h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+230h] [rbp+D8h] BYREF
  DWORD nSamplesPerSec; // [rsp+234h] [rbp+DCh] BYREF
  int v266; // [rsp+238h] [rbp+E0h] BYREF
  DWORD v267; // [rsp+23Ch] [rbp+E4h] BYREF
  DWORD v268; // [rsp+240h] [rbp+E8h] BYREF
  WINBOOL v269; // [rsp+244h] [rbp+ECh] BYREF
  int v270; // [rsp+248h] [rbp+F0h] BYREF
  DWORD v271; // [rsp+24Ch] [rbp+F4h] BYREF
  DWORD v272; // [rsp+250h] [rbp+F8h] BYREF
  WINBOOL v273; // [rsp+254h] [rbp+FCh] BYREF
  int v274; // [rsp+258h] [rbp+100h] BYREF
  unsigned int v275; // [rsp+25Ch] [rbp+104h]
  __int64 v276; // [rsp+260h] [rbp+108h] BYREF
  LPVOID Context; // [rsp+268h] [rbp+110h] BYREF
  LPVOID v278; // [rsp+270h] [rbp+118h] BYREF
  LPVOID v279; // [rsp+278h] [rbp+120h] BYREF
  LPVOID v280; // [rsp+280h] [rbp+128h] BYREF
  LPVOID v281; // [rsp+288h] [rbp+130h] BYREF
  CAudioResourceManager *v282; // [rsp+290h] [rbp+138h]
  int v283[2]; // [rsp+298h] [rbp+140h]
  LPVOID v284; // [rsp+2A0h] [rbp+148h] BYREF
  void *v285; // [rsp+2A8h] [rbp+150h] BYREF
  bool v286[8]; // [rsp+2B0h] [rbp+158h] BYREF
  unsigned int v287; // [rsp+2B8h] [rbp+160h]
  struct _GUID *v288; // [rsp+2C0h] [rbp+168h]
  struct _GUID *v289; // [rsp+2C8h] [rbp+170h]
  struct CEndpointCharacteristics *v290; // [rsp+2D0h] [rbp+178h]
  const struct _GUID *v291; // [rsp+2D8h] [rbp+180h]
  struct IAudioGraphCallback *v292; // [rsp+2E0h] [rbp+188h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+2E8h] [rbp+190h] BYREF
  struct IMMDevice *v294; // [rsp+2F0h] [rbp+198h]
  __int64 v295; // [rsp+2F8h] [rbp+1A0h] BYREF
  LPVOID *v296; // [rsp+300h] [rbp+1A8h]
  struct tWAVEFORMATEX *v297; // [rsp+308h] [rbp+1B0h] BYREF
  char v298; // [rsp+310h] [rbp+1B8h]
  LPVOID *v299; // [rsp+318h] [rbp+1C0h]
  struct tWAVEFORMATEX *v300; // [rsp+320h] [rbp+1C8h] BYREF
  char v301; // [rsp+328h] [rbp+1D0h]
  struct tWAVEFORMATEX **v302; // [rsp+330h] [rbp+1D8h]
  struct tWAVEFORMATEX *v303; // [rsp+338h] [rbp+1E0h] BYREF
  char v304; // [rsp+340h] [rbp+1E8h]
  LPVOID *v305; // [rsp+348h] [rbp+1F0h]
  void *v306; // [rsp+350h] [rbp+1F8h]
  char v307; // [rsp+358h] [rbp+200h]
  LPVOID *v308; // [rsp+360h] [rbp+208h]
  void *v309; // [rsp+368h] [rbp+210h]
  char v310; // [rsp+370h] [rbp+218h]
  struct tWAVEFORMATEX **p_Src; // [rsp+378h] [rbp+220h]
  struct tWAVEFORMATEX *v312; // [rsp+380h] [rbp+228h] BYREF
  char v313; // [rsp+388h] [rbp+230h]
  __int64 *v314; // [rsp+390h] [rbp+238h]
  __int64 v315; // [rsp+398h] [rbp+240h] BYREF
  char v316; // [rsp+3A0h] [rbp+248h]
  unsigned int v317[2]; // [rsp+3A8h] [rbp+250h]
  __int64 v318; // [rsp+3B0h] [rbp+258h] BYREF
  char v319; // [rsp+3B8h] [rbp+260h]
  unsigned int v320[2]; // [rsp+3C0h] [rbp+268h]
  struct SaDeviceParams *v321; // [rsp+3C8h] [rbp+270h] BYREF
  char v322; // [rsp+3D0h] [rbp+278h]
  struct CAudioSessionManager **v323; // [rsp+3D8h] [rbp+280h]
  struct CAudioSessionManager *v324; // [rsp+3E0h] [rbp+288h] BYREF
  char v325; // [rsp+3E8h] [rbp+290h]
  unsigned int v326[2]; // [rsp+3F0h] [rbp+298h]
  __int64 v327; // [rsp+3F8h] [rbp+2A0h] BYREF
  char v328; // [rsp+400h] [rbp+2A8h]
  char *v329; // [rsp+408h] [rbp+2B0h] BYREF
  unsigned int v330[2]; // [rsp+410h] [rbp+2B8h] BYREF
  GUID *v331; // [rsp+418h] [rbp+2C0h] BYREF
  _DWORD v332[2]; // [rsp+420h] [rbp+2C8h] BYREF
  __int64 v333; // [rsp+428h] [rbp+2D0h]
  _DWORD v334[2]; // [rsp+430h] [rbp+2D8h] BYREF
  __int64 v335; // [rsp+438h] [rbp+2E0h]
  _DWORD v336[2]; // [rsp+440h] [rbp+2E8h] BYREF
  __int64 v337; // [rsp+448h] [rbp+2F0h]
  _DWORD v338[2]; // [rsp+450h] [rbp+2F8h] BYREF
  __int64 v339; // [rsp+458h] [rbp+300h]
  _DWORD v340[2]; // [rsp+460h] [rbp+308h] BYREF
  __int64 v341; // [rsp+468h] [rbp+310h]
  _DWORD v342[2]; // [rsp+470h] [rbp+318h] BYREF
  __int64 v343; // [rsp+478h] [rbp+320h]
  const wchar_t *v344; // [rsp+480h] [rbp+328h] BYREF
  GUID *v345; // [rsp+488h] [rbp+330h] BYREF
  const wchar_t *v346; // [rsp+490h] [rbp+338h] BYREF
  GUID *v347; // [rsp+498h] [rbp+340h] BYREF
  const wchar_t *v348; // [rsp+4A0h] [rbp+348h] BYREF
  GUID *v349; // [rsp+4A8h] [rbp+350h] BYREF
  _QWORD v350[3]; // [rsp+4B0h] [rbp+358h] BYREF
  struct IProcessSubmixProxy *v351; // [rsp+4C8h] [rbp+370h]
  __int64 v352; // [rsp+4D0h] [rbp+378h] BYREF
  PROPVARIANT v353[2]; // [rsp+4D8h] [rbp+380h] BYREF
  __int64 v354; // [rsp+4E8h] [rbp+390h]
  PROPVARIANT pvar[2]; // [rsp+4F0h] [rbp+398h] BYREF
  __int64 v356; // [rsp+500h] [rbp+3A8h]
  GUID v357; // [rsp+508h] [rbp+3B0h]
  GUID v358; // [rsp+518h] [rbp+3C0h]
  GUID v359; // [rsp+528h] [rbp+3D0h]
  union _RTL_RUN_ONCE *v360; // [rsp+538h] [rbp+3E0h] BYREF
  int v361; // [rsp+540h] [rbp+3E8h]
  GUID v362; // [rsp+548h] [rbp+3F0h]
  union _RTL_RUN_ONCE *v363; // [rsp+558h] [rbp+400h] BYREF
  int v364; // [rsp+560h] [rbp+408h]
  GUID v365; // [rsp+568h] [rbp+410h]
  struct _GUID v366; // [rsp+578h] [rbp+420h]
  GUID v367; // [rsp+588h] [rbp+430h] BYREF
  struct _GUID v368; // [rsp+598h] [rbp+440h] BYREF
  struct _GUID v369; // [rsp+5A8h] [rbp+450h] BYREF
  struct _GUID v370; // [rsp+5B8h] [rbp+460h] BYREF
  struct _GUID v371; // [rsp+5C8h] [rbp+470h] BYREF
  struct _GUID v372; // [rsp+5D8h] [rbp+480h] BYREF
  struct _GUID v373; // [rsp+5E8h] [rbp+490h] BYREF
  struct _GUID v374; // [rsp+5F8h] [rbp+4A0h] BYREF
  struct _GUID v375; // [rsp+608h] [rbp+4B0h] BYREF
  struct _GUID v376; // [rsp+618h] [rbp+4C0h] BYREF
  GUID v377; // [rsp+628h] [rbp+4D0h]
  struct _GUID v378; // [rsp+638h] [rbp+4E0h]
  GUID v379; // [rsp+648h] [rbp+4F0h] BYREF
  GUID v380; // [rsp+658h] [rbp+500h] BYREF
  GUID v381; // [rsp+668h] [rbp+510h] BYREF
  GUID v382; // [rsp+678h] [rbp+520h] BYREF
  GUID v383; // [rsp+688h] [rbp+530h] BYREF
  unsigned __int16 *v384; // [rsp+698h] [rbp+540h]
  int v385; // [rsp+6A0h] [rbp+548h]
  int v386; // [rsp+6A4h] [rbp+54Ch]
  void *v387; // [rsp+6A8h] [rbp+550h]
  int v388; // [rsp+6B0h] [rbp+558h]
  int v389; // [rsp+6B4h] [rbp+55Ch]
  const wchar_t *v390; // [rsp+6B8h] [rbp+560h]
  __int64 v391; // [rsp+6C0h] [rbp+568h]
  WORD *v392; // [rsp+6C8h] [rbp+570h]
  __int64 v393; // [rsp+6D0h] [rbp+578h]
  DWORD *v394; // [rsp+6D8h] [rbp+580h]
  __int64 v395; // [rsp+6E0h] [rbp+588h]
  DWORD *v396; // [rsp+6E8h] [rbp+590h]
  __int64 v397; // [rsp+6F0h] [rbp+598h]
  GUID *v398; // [rsp+6F8h] [rbp+5A0h]
  __int64 v399; // [rsp+700h] [rbp+5A8h]
  unsigned __int16 *v400; // [rsp+708h] [rbp+5B0h]
  int v401; // [rsp+710h] [rbp+5B8h]
  int v402; // [rsp+714h] [rbp+5BCh]
  void *v403; // [rsp+718h] [rbp+5C0h]
  int v404; // [rsp+720h] [rbp+5C8h]
  int v405; // [rsp+724h] [rbp+5CCh]
  const wchar_t *v406; // [rsp+728h] [rbp+5D0h]
  __int64 v407; // [rsp+730h] [rbp+5D8h]
  WORD *v408; // [rsp+738h] [rbp+5E0h]
  __int64 v409; // [rsp+740h] [rbp+5E8h]
  DWORD *v410; // [rsp+748h] [rbp+5F0h]
  __int64 v411; // [rsp+750h] [rbp+5F8h]
  DWORD *v412; // [rsp+758h] [rbp+600h]
  __int64 v413; // [rsp+760h] [rbp+608h]
  char *v414; // [rsp+768h] [rbp+610h]
  __int64 v415; // [rsp+770h] [rbp+618h]
  int *v416; // [rsp+778h] [rbp+620h]
  __int64 v417; // [rsp+780h] [rbp+628h]
  unsigned __int16 *v418; // [rsp+788h] [rbp+630h]
  int v419; // [rsp+790h] [rbp+638h]
  int v420; // [rsp+794h] [rbp+63Ch]
  void *v421; // [rsp+798h] [rbp+640h]
  int v422; // [rsp+7A0h] [rbp+648h]
  int v423; // [rsp+7A4h] [rbp+64Ch]
  const wchar_t *v424; // [rsp+7A8h] [rbp+650h]
  __int64 v425; // [rsp+7B0h] [rbp+658h]
  WORD *v426; // [rsp+7B8h] [rbp+660h]
  __int64 v427; // [rsp+7C0h] [rbp+668h]
  DWORD *v428; // [rsp+7C8h] [rbp+670h]
  __int64 v429; // [rsp+7D0h] [rbp+678h]
  DWORD *v430; // [rsp+7D8h] [rbp+680h]
  __int64 v431; // [rsp+7E0h] [rbp+688h]
  char *v432; // [rsp+7E8h] [rbp+690h]
  __int64 v433; // [rsp+7F0h] [rbp+698h]
  int *v434; // [rsp+7F8h] [rbp+6A0h]
  __int64 v435; // [rsp+800h] [rbp+6A8h]
  unsigned __int16 *v436; // [rsp+808h] [rbp+6B0h]
  int v437; // [rsp+810h] [rbp+6B8h]
  int v438; // [rsp+814h] [rbp+6BCh]
  void *v439; // [rsp+818h] [rbp+6C0h]
  int v440; // [rsp+820h] [rbp+6C8h]
  int v441; // [rsp+824h] [rbp+6CCh]
  const wchar_t *v442; // [rsp+828h] [rbp+6D0h]
  __int64 v443; // [rsp+830h] [rbp+6D8h]
  __int16 *v444; // [rsp+838h] [rbp+6E0h]
  __int64 v445; // [rsp+840h] [rbp+6E8h]
  int *v446; // [rsp+848h] [rbp+6F0h]
  __int64 v447; // [rsp+850h] [rbp+6F8h]
  int *v448; // [rsp+858h] [rbp+700h]
  __int64 v449; // [rsp+860h] [rbp+708h]
  char *v450; // [rsp+868h] [rbp+710h]
  __int64 v451; // [rsp+870h] [rbp+718h]
  int *v452; // [rsp+878h] [rbp+720h]
  __int64 v453; // [rsp+880h] [rbp+728h]
  unsigned __int16 *v454; // [rsp+888h] [rbp+730h]
  int v455; // [rsp+890h] [rbp+738h]
  int v456; // [rsp+894h] [rbp+73Ch]
  void *v457; // [rsp+898h] [rbp+740h]
  int v458; // [rsp+8A0h] [rbp+748h]
  int v459; // [rsp+8A4h] [rbp+74Ch]
  const wchar_t *v460; // [rsp+8A8h] [rbp+750h]
  __int64 v461; // [rsp+8B0h] [rbp+758h]
  __int16 *v462; // [rsp+8B8h] [rbp+760h]
  __int64 v463; // [rsp+8C0h] [rbp+768h]
  int *v464; // [rsp+8C8h] [rbp+770h]
  __int64 v465; // [rsp+8D0h] [rbp+778h]
  int *v466; // [rsp+8D8h] [rbp+780h]
  __int64 v467; // [rsp+8E0h] [rbp+788h]
  char *v468; // [rsp+8E8h] [rbp+790h]
  __int64 v469; // [rsp+8F0h] [rbp+798h]
  int *v470; // [rsp+8F8h] [rbp+7A0h]
  __int64 v471; // [rsp+900h] [rbp+7A8h]
  unsigned __int16 *v472; // [rsp+908h] [rbp+7B0h]
  int v473; // [rsp+910h] [rbp+7B8h]
  int v474; // [rsp+914h] [rbp+7BCh]
  void *v475; // [rsp+918h] [rbp+7C0h]
  int v476; // [rsp+920h] [rbp+7C8h]
  int v477; // [rsp+924h] [rbp+7CCh]
  const wchar_t *v478; // [rsp+928h] [rbp+7D0h]
  __int64 v479; // [rsp+930h] [rbp+7D8h]
  WORD *v480; // [rsp+938h] [rbp+7E0h]
  __int64 v481; // [rsp+940h] [rbp+7E8h]
  DWORD *p_nSamplesPerSec; // [rsp+948h] [rbp+7F0h]
  __int64 v483; // [rsp+950h] [rbp+7F8h]
  DWORD *p_nAvgBytesPerSec; // [rsp+958h] [rbp+800h]
  __int64 v485; // [rsp+960h] [rbp+808h]
  char *v486; // [rsp+968h] [rbp+810h]
  __int64 v487; // [rsp+970h] [rbp+818h]
  int *v488; // [rsp+978h] [rbp+820h]
  __int64 v489; // [rsp+980h] [rbp+828h]
  char v490[32]; // [rsp+988h] [rbp+830h] BYREF
  int *v491; // [rsp+9A8h] [rbp+850h]
  __int64 v492; // [rsp+9B0h] [rbp+858h]
  char v493[32]; // [rsp+9B8h] [rbp+860h] BYREF
  int *v494; // [rsp+9D8h] [rbp+880h]
  __int64 v495; // [rsp+9E0h] [rbp+888h]
  char v496[32]; // [rsp+9E8h] [rbp+890h] BYREF
  int *v497; // [rsp+A08h] [rbp+8B0h]
  __int64 v498; // [rsp+A10h] [rbp+8B8h]
  char v499[32]; // [rsp+A18h] [rbp+8C0h] BYREF
  int *v500; // [rsp+A38h] [rbp+8E0h]
  __int64 v501; // [rsp+A40h] [rbp+8E8h]
  char v502[32]; // [rsp+A48h] [rbp+8F0h] BYREF
  int *v503; // [rsp+A68h] [rbp+910h]
  __int64 v504; // [rsp+A70h] [rbp+918h]
  int v505[4]; // [rsp+A78h] [rbp+920h] BYREF
  char v506[16]; // [rsp+A88h] [rbp+930h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B20h] [rbp+9C8h]

  v292 = a15;
  v289 = a19;
  v288 = a20;
  v291 = a21;
  v350[2] = a23;
  v350[1] = a25;
  *(_QWORD *)v283 = a27;
  v282 = this;
  v27 = (__int64 *)*((_QWORD *)a12 + 2);
  v227 = 0LL;
  v28 = a26;
  v29 = *v27;
  v231 = a2;
  v228 = a4;
  v206 = a3;
  v30 = *(__int64 (__fastcall **)(__int64 *, unsigned __int16 **))(v29 + 40);
  v202 = a13;
  v290 = a12;
  v351 = a26;
  v31 = v30(v27, &v227);
  v32 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x538,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v31,
      v191);
    goto LABEL_305;
  }
  v33 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a12 + 56LL))(a12);
  v34 = 1;
  if ( !v33 )
    v34 = HIWORD(a13) & 2;
  v35 = (struct IMMDevice *)*((_QWORD *)a12 + 2);
  v215 = v34;
  v294 = v35;
  ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->AddRef)(v35);
  v36 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a12 + 2);
  v37 = 0LL;
  v229 = 0;
  v276 = 0LL;
  if ( v36 )
  {
    (**v36)(v36, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, &v276);
    v37 = v276;
    if ( v276 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v276 + 88LL))(v276, &v229);
      v37 = v276;
    }
  }
  v38 = v229;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v39 = *((_QWORD *)a12 + 5);
  v356 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v40 = 1;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v39 + 40LL))(
         v39,
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v40 = 0;
  }
  PropVariantClear(pvar);
  v275 = a13 & 0x400000;
  if ( (a13 & 0x400000) != 0 )
  {
    v42 = a14;
    v43 = eKeywordDetectorConnector;
    goto LABEL_28;
  }
  v44 = a13 & 0x20000;
  if ( v28 && v44 )
  {
    v43 = eHostProcessConnector;
    v42 = a14;
    goto LABEL_28;
  }
  if ( v40 && v44 )
  {
    v42 = a14;
    v43 = eLoopbackConnector;
    goto LABEL_28;
  }
  v42 = a14;
  if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    pv = 0LL;
    v45 = 0LL;
    if ( v38 )
    {
      if ( a16 )
      {
        v46 = IsFormatSupportedByHwAudioEngine(v294, v41, a16, (struct tWAVEFORMATEX **)&pv);
        v45 = pv;
        if ( !v46 )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
          v43 = a14;
          goto LABEL_28;
        }
      }
    }
    CoTaskMemFree(v45);
    pv = 0LL;
  }
  v43 = ((unsigned __int8)~(_BYTE)a13 >> 1) & 1;
LABEL_28:
  v47 = v228;
  v357 = GUID_00000000_0000_0000_0000_000000000000;
  v358 = GUID_00000000_0000_0000_0000_000000000000;
  v359 = GUID_00000000_0000_0000_0000_000000000000;
  v365 = GUID_00000000_0000_0000_0000_000000000000;
  v362 = GUID_00000000_0000_0000_0000_000000000000;
  v48 = DeriveAudioProcessingModeConfiguration(v228, a5, a6, a12);
  v32 = v48;
  if ( v48 >= 0 )
  {
    v49 = v359;
    v302 = &v207;
    v50 = v357;
    p_Src = &Src;
    v296 = &v218;
    v299 = &v217;
    v217 = 0LL;
    Src = 0LL;
    v218 = 0LL;
    v207 = 0LL;
    v303 = 0LL;
    v312 = 0LL;
    v297 = 0LL;
    v300 = 0LL;
    v51 = v358;
    v201 = a8 != 0;
    v371 = v357;
    v372 = v358;
    v373 = v359;
    v304 = 1;
    v313 = 1;
    v298 = 1;
    v301 = 1;
    v32 = DeriveDeviceGraphFormatsForStream(
            a12,
            a8 != 0,
            (struct _GUID *)(unsigned int)v43,
            v42,
            v47,
            &v373,
            &v372,
            &v371,
            a16,
            &v300,
            &v297,
            &v312,
            &v303);
    if ( v301 )
    {
      v52 = *v299;
      *v299 = v300;
      if ( v52 )
        CoTaskMemFree(v52);
    }
    if ( v298 )
    {
      v53 = *v296;
      *v296 = v297;
      if ( v53 )
        CoTaskMemFree(v53);
    }
    if ( v313 )
    {
      v54 = *p_Src;
      *p_Src = v312;
      if ( v54 )
        CoTaskMemFree(v54);
    }
    if ( v304 )
    {
      v55 = *v302;
      *v302 = v303;
      if ( v55 )
        CoTaskMemFree(v55);
    }
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x553,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v32,
        v192);
LABEL_295:
      v186 = v207;
      v207 = 0LL;
      if ( v186 )
        CoTaskMemFree(v186);
      v187 = v218;
      v218 = 0LL;
      if ( v187 )
        CoTaskMemFree(v187);
      v188 = Src;
      Src = 0LL;
      if ( v188 )
        CoTaskMemFree(v188);
      v189 = v217;
      v217 = 0LL;
      if ( v189 )
        CoTaskMemFree(v189);
      goto LABEL_303;
    }
    if ( !a16 )
    {
      v56 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v56 > 4u )
      {
        v492 = 4LL;
        v238 = 0;
        v491 = &v238;
        tlgWriteTransfer_EtwEventWriteTransfer(v56, (unsigned int)&unk_180169C82, 0, 0, 3, (__int64)v490);
      }
      goto LABEL_56;
    }
    wFormatTag = a16->wFormatTag;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v56 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v56 <= 4u )
      {
LABEL_56:
        v59 = v217;
        if ( v217 )
        {
          v61 = *(unsigned __int16 *)v217;
          if ( (_WORD)v61 == 0xFFFE )
          {
            v278 = 0LL;
            if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v248, &v278) && v248 )
            {
              v278 = qword_18019F838;
              qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
              qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register(
                (wil::TraceLoggingProvider *)qword_18019F838,
                qword_18019F850,
                (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
              InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
            }
            v65 = *((_QWORD *)v278 + 1);
            if ( *(_DWORD *)v65 > 4u )
            {
              v249 = v59[5];
              v453 = 4LL;
              v451 = 16LL;
              v449 = 4LL;
              v250 = *((_DWORD *)v217 + 2);
              v251 = *((_DWORD *)v217 + 1);
              v66 = *((_WORD *)v217 + 1);
              v452 = &v249;
              v450 = (char *)(v59 + 6);
              v448 = &v250;
              v446 = &v251;
              v444 = &v208;
              v442 = L"WAVEFORMATEXTENSIBLE";
              v336[1] = 4;
              v436 = *(unsigned __int16 **)(v65 + 8);
              v208 = v66;
              v337 = 0LL;
              v447 = 4LL;
              v445 = 2LL;
              v443 = 42LL;
              v336[0] = 184549376;
              v437 = *v436;
              v439 = &unk_180169A0D;
              v438 = 2;
              v67 = *(_QWORD *)(v65 + 32);
              v440 = 136;
              v441 = 1;
              v204 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(v67, v336, 0LL);
            }
          }
          else
          {
            v382 = GUID_00000000_0000_0010_8000_00aa00389b71;
            v382.Data1 = v61;
            v62 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              65534LL,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
            if ( *v62 > 4u )
            {
              v331 = &v382;
              v246 = *((_DWORD *)v217 + 2);
              v247 = *((_DWORD *)v217 + 1);
              v64 = *((_WORD *)v217 + 1);
              v344 = L"WAVEFORMATEX";
              v221 = v64;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                (_DWORD)v62,
                (unsigned int)&unk_180169A96,
                (_DWORD)v62,
                v63,
                (__int64)&v344,
                (__int64)&v221,
                (__int64)&v247,
                (__int64)&v246,
                (__int64)&v331);
            }
          }
        }
        else
        {
          v60 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            v56,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
          if ( *v60 > 4u )
          {
            v504 = 4LL;
            v245 = 0;
            v503 = &v245;
            tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v60, (unsigned int)&unk_180169B1D, 0, 0, 3, (__int64)v502);
          }
        }
        v68 = v218;
        if ( v218 )
        {
          v70 = *(unsigned __int16 *)v218;
          if ( (_WORD)v70 == 0xFFFE )
          {
            v279 = 0LL;
            if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v255, &v279) && v255 )
            {
              v279 = qword_18019F838;
              qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
              qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register(
                (wil::TraceLoggingProvider *)qword_18019F838,
                qword_18019F850,
                (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
              InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
            }
            v74 = *((_QWORD *)v279 + 1);
            if ( *(_DWORD *)v74 > 4u )
            {
              v256 = v68[5];
              v471 = 4LL;
              v469 = 16LL;
              v467 = 4LL;
              v257 = *((_DWORD *)v218 + 2);
              v258 = *((_DWORD *)v218 + 1);
              v75 = *((_WORD *)v218 + 1);
              v470 = &v256;
              v468 = (char *)(v68 + 6);
              v466 = &v257;
              v464 = &v258;
              v462 = &v210;
              v460 = L"WAVEFORMATEXTENSIBLE";
              v338[1] = 4;
              v454 = *(unsigned __int16 **)(v74 + 8);
              v210 = v75;
              v339 = 0LL;
              v465 = 4LL;
              v463 = 2LL;
              v461 = 42LL;
              v338[0] = 184549376;
              v455 = *v454;
              v457 = &unk_18016989B;
              v456 = 2;
              v76 = *(_QWORD *)(v74 + 32);
              v458 = 139;
              v459 = 1;
              v204 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(v76, v338, 0LL);
            }
          }
          else
          {
            v381 = GUID_00000000_0000_0010_8000_00aa00389b71;
            v381.Data1 = v70;
            v71 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              65534LL,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
            if ( *v71 > 4u )
            {
              v345 = &v381;
              v253 = *((_DWORD *)v218 + 2);
              v254 = *((_DWORD *)v218 + 1);
              v73 = *((_WORD *)v218 + 1);
              v346 = L"WAVEFORMATEX";
              v209 = v73;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                (_DWORD)v71,
                (unsigned int)&unk_180169927,
                (_DWORD)v71,
                v72,
                (__int64)&v346,
                (__int64)&v209,
                (__int64)&v254,
                (__int64)&v253,
                (__int64)&v345);
            }
          }
        }
        else
        {
          v69 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            (__int64)v60,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
          if ( *v69 > 4u )
          {
            v495 = 4LL;
            v252 = 0;
            v494 = &v252;
            tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v69, (unsigned int)&unk_1801699B1, 0, 0, 3, (__int64)v493);
          }
        }
        v77 = Src;
        if ( Src )
        {
          v79 = Src->wFormatTag;
          if ( (_WORD)v79 == 0xFFFE )
          {
            v280 = 0LL;
            if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v262, &v280) && v262 )
            {
              v280 = qword_18019F838;
              qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
              qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register(
                (wil::TraceLoggingProvider *)qword_18019F838,
                qword_18019F850,
                (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
              InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
            }
            v83 = *((_QWORD *)v280 + 1);
            if ( *(_DWORD *)v83 > 4u )
            {
              v263 = *(_DWORD *)&v77[1].nChannels;
              v489 = 4LL;
              v487 = 16LL;
              v485 = 4LL;
              nAvgBytesPerSec = Src->nAvgBytesPerSec;
              nSamplesPerSec = Src->nSamplesPerSec;
              nChannels = Src->nChannels;
              v488 = &v263;
              v486 = (char *)&v77[1].nSamplesPerSec + 2;
              p_nAvgBytesPerSec = &nAvgBytesPerSec;
              p_nSamplesPerSec = &nSamplesPerSec;
              v480 = &v212;
              v478 = L"WAVEFORMATEXTENSIBLE";
              v340[1] = 4;
              v472 = *(unsigned __int16 **)(v83 + 8);
              v212 = nChannels;
              v341 = 0LL;
              v483 = 4LL;
              v481 = 2LL;
              v479 = 42LL;
              v340[0] = 184549376;
              v473 = *v472;
              v475 = &unk_18016972C;
              v474 = 2;
              v85 = *(_QWORD *)(v83 + 32);
              v476 = 138;
              v477 = 1;
              v204 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(v85, v340, 0LL);
            }
          }
          else
          {
            v380 = GUID_00000000_0000_0010_8000_00aa00389b71;
            v380.Data1 = v79;
            v80 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              65534LL,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
            if ( *v80 > 4u )
            {
              v347 = &v380;
              v260 = Src->nAvgBytesPerSec;
              v261 = Src->nSamplesPerSec;
              v82 = Src->nChannels;
              v348 = L"WAVEFORMATEX";
              v211 = v82;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                (_DWORD)v80,
                (unsigned int)&unk_1801697B7,
                (_DWORD)v80,
                v81,
                (__int64)&v348,
                (__int64)&v211,
                (__int64)&v261,
                (__int64)&v260,
                (__int64)&v347);
            }
          }
        }
        else
        {
          v78 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            (__int64)v69,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
          if ( *v78 > 4u )
          {
            v498 = 4LL;
            v259 = 0;
            v497 = &v259;
            tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v78, (unsigned int)&unk_180169840, 0, 0, 3, (__int64)v496);
          }
        }
        v86 = v207;
        if ( v207 )
        {
          v88 = v207->wFormatTag;
          if ( (_WORD)v88 == 0xFFFE )
          {
            v281 = 0LL;
            if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v269, &v281) && v269 )
            {
              v360 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
              v281 = qword_18019F838;
              qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
              qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              v361 = 0;
              wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v360);
            }
            v93 = *((_QWORD *)v281 + 1);
            if ( *(_DWORD *)v93 > 4u )
            {
              v270 = *(_DWORD *)&v86[1].nChannels;
              v417 = 4LL;
              v415 = 16LL;
              v413 = 4LL;
              v271 = v207->nAvgBytesPerSec;
              v272 = v207->nSamplesPerSec;
              v94 = v207->nChannels;
              v416 = &v270;
              v414 = (char *)&v86[1].nSamplesPerSec + 2;
              v214 = v94;
              v95 = *(_QWORD *)(v93 + 32);
              v412 = &v271;
              v410 = &v272;
              v408 = &v214;
              v406 = L"WAVEFORMATEXTENSIBLE";
              v342[1] = 4;
              v400 = *(unsigned __int16 **)(v93 + 8);
              v411 = 4LL;
              v409 = 2LL;
              v407 = 42LL;
              v342[0] = 184549376;
              v343 = 0LL;
              v401 = *v400;
              v403 = &unk_1801695C0;
              v402 = 2;
              v404 = 137;
              v405 = 1;
              v204 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(v95, v342, 0LL);
            }
          }
          else
          {
            v379 = GUID_00000000_0000_0010_8000_00aa00389b71;
            v379.Data1 = v88;
            v89 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              65534LL,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
            if ( *v89 > 4u )
            {
              v349 = &v379;
              v267 = v207->nAvgBytesPerSec;
              v268 = v207->nSamplesPerSec;
              v91 = v207->nChannels;
              v350[0] = L"WAVEFORMATEX";
              v213 = v91;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                (_DWORD)v89,
                (unsigned int)&unk_18016964A,
                (_DWORD)v89,
                v90,
                (__int64)v350,
                (__int64)&v213,
                (__int64)&v268,
                (__int64)&v267,
                (__int64)&v349);
            }
          }
        }
        else
        {
          v87 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            (__int64)v78,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
          if ( *v87 > 4u )
          {
            v266 = 0;
            v500 = &v266;
            v501 = 4LL;
            tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v87, (unsigned int)&unk_1801696D2, 0, 0, 3, (__int64)v499);
          }
        }
        v295 = 0LL;
        v374 = v51;
        v375 = v49;
        v376 = v50;
        v92 = DerivePeriodicityForStream(
                a12,
                a16,
                v206,
                v202,
                v42,
                v43,
                v207,
                &v376,
                &v375,
                &v374,
                a7 != 0,
                v201,
                a17,
                a18,
                v28,
                &a18,
                &v295);
        v32 = v92;
        if ( v92 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x55F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v92,
            v193);
          goto LABEL_295;
        }
        (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v231 + 368LL))(v231);
        v305 = &v237;
        v308 = &v226;
        v96 = *(_QWORD *)v206;
        v226 = 0LL;
        v237 = 0LL;
        v306 = 0LL;
        v97 = *(void (__fastcall **)(struct IAudioStreamInfo *))(v96 + 80);
        v309 = 0LL;
        v377 = v362;
        v378 = v51;
        v366 = v50;
        v307 = 1;
        v310 = 1;
        v97(v206);
        v98 = a22;
        v99 = v290;
        LODWORD(v198) = a22;
        v32 = InitializeStreamAndModeDescriptors(v290, (unsigned int)a14, v202, (unsigned int)v215);
        if ( v310 )
        {
          v100 = *v308;
          *v308 = v309;
          if ( v100 )
            CoTaskMemFree(v100);
        }
        if ( v307 )
        {
          v101 = *v305;
          *v305 = v306;
          if ( v101 )
            CoTaskMemFree(v101);
        }
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x569,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v32,
            v43);
LABEL_291:
          v184 = v237;
          v237 = 0LL;
          if ( v184 )
            CoTaskMemFree(v184);
          v185 = v226;
          v226 = 0LL;
          if ( v185 )
            CoTaskMemFree(v185);
          goto LABEL_295;
        }
        v314 = &v236;
        v316 = 1;
        v236 = 0LL;
        v315 = 0LL;
        v32 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                g_DeviceGraphStore,
                v227,
                &v315);
        if ( v316 )
        {
          v102 = *v314;
          *v314 = v315;
          if ( v102 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
        }
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x56F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v32,
            v43);
LABEL_289:
          if ( v236 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v236 + 16LL))(v236);
          goto LABEL_291;
        }
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v236 + 112LL))(v236, &lpCriticalSection);
        v103 = a24;
        v104 = v206;
        v367 = v365;
        v105 = BuildDeviceGraphForStream(
                 (int)v99,
                 (__int64)v206,
                 (__int64)v231,
                 v236,
                 v228,
                 v202,
                 a14,
                 v43,
                 (__int64)v198,
                 &v367,
                 (__int64)v226,
                 (__int64)v237,
                 v218,
                 v215,
                 (__int64)v292,
                 a24,
                 a14 == AUDCLNT_SHAREMODE_EXCLUSIVE,
                 (__int64)v351,
                 *(__int64 *)v283);
        v32 = v105;
        if ( v105 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x577,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v105,
            v194);
          goto LABEL_278;
        }
        v106 = *(_QWORD *)v206;
        v203 = 0LL;
        v107 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v106 + 120))(v206, &v203);
        v32 = v107;
        if ( v107 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x57B,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v107,
            v194);
LABEL_277:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v203);
LABEL_278:
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_289;
        }
        v200 = 0LL;
        v108 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v203 + 192LL))(v203, &v200);
        v32 = v108;
        if ( v108 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x57F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v108,
            v194);
LABEL_276:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v200);
          goto LABEL_277;
        }
        if ( v200 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v104 + 144LL))(v104) )
          {
            v319 = 1;
            v233 = 0LL;
            v318 = 0LL;
            *(_QWORD *)v317 = &v233;
            v32 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)v200 + 104LL))(v200, &v318);
            if ( v319 )
            {
              v109 = v317[0];
              v110 = **(SaDeviceParams ***)v317;
              **(_QWORD **)v317 = v318;
              if ( v110 )
                SaDeviceParams::`scalar deleting destructor'(v110, v109);
            }
            if ( v32 < 0 )
            {
              v111 = (unsigned int)v32;
              v112 = 1421LL;
              goto LABEL_131;
            }
            v113 = (const struct tWAVEFORMATEX *)*((_QWORD *)v233 + 3);
            v114 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v203 + 120LL))(v203);
            if ( !(unsigned int)CompareWaveFormat(v113, v114) )
            {
              v116 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                       g_DeviceGraphManager,
                       v203,
                       v200);
              v32 = v116;
              if ( v116 < 0 )
              {
                v111 = (unsigned int)v116;
                v112 = 1429LL;
LABEL_131:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v112,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)v111,
                  v194);
                v118 = v233;
                if ( !v233 )
                  goto LABEL_276;
LABEL_132:
                SaDeviceParams::`scalar deleting destructor'(v118, v117);
                goto LABEL_276;
              }
              wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v200);
            }
            if ( v233 )
              SaDeviceParams::`scalar deleting destructor'(v233, v115);
            v104 = v206;
          }
          if ( v200 )
          {
            (*(void (__fastcall **)(__int64))(*((_QWORD *)v104 - 1) + 152LL))((__int64)v104 - 8);
            v119 = *(_QWORD *)v283;
            goto LABEL_240;
          }
        }
        v368 = v51;
        *(_QWORD *)v320 = &v225;
        v369 = v50;
        v225 = 0LL;
        v321 = 0LL;
        v322 = 1;
        v32 = DeriveSaDeviceParametersForStream(v99, a14, v43, &v369, &v368, v207, Src, *((_QWORD *)v226 + 4), &v321);
        if ( v322 )
        {
          v120 = v320[0];
          v121 = **(SaDeviceParams ***)v320;
          **(_QWORD **)v320 = v321;
          if ( v121 )
            SaDeviceParams::`scalar deleting destructor'(v121, v120);
        }
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5A2,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v32,
            v195);
          goto LABEL_222;
        }
        v122 = v227;
        *(_QWORD *)v286 = 0LL;
        v370 = v50;
        v123 = (__int64 *)*((_QWORD *)v282 + 5);
        v124 = *v123;
        v125 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v99 + 56LL))(v99);
        v194 = v43;
        v126 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 *, _QWORD, struct _GUID *))(v124 + 56))(
                 v123,
                 v122,
                 v125,
                 &v370);
        v32 = v126;
        if ( v126 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5A6,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v126,
            v43);
LABEL_220:
          if ( *(_QWORD *)v286 )
            ReleaseAudioResourceHandle(*(unsigned __int64 *)v286);
LABEL_222:
          v118 = v225;
          if ( !v225 )
            goto LABEL_276;
          goto LABEL_132;
        }
        v287 = v103;
        v127 = 0LL;
        v205 = 0LL;
        v222 = 0LL;
        EnterCriticalSection(&g_SessionManagerProviderLock);
        if ( g_SingletonAudioSessionManagerProvider )
        {
          wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
            g_SingletonAudioSessionManagerProvider,
            v128,
            &v222);
          v127 = v222;
        }
        v32 = 0;
        if ( !v127 )
          v32 = -2147467259;
        LeaveCriticalSection(&g_SessionManagerProviderLock);
        if ( !v127 )
        {
          v129 = (unsigned int)v32;
          v130 = 1452LL;
          goto LABEL_215;
        }
        v131 = 0LL;
        v324 = 0LL;
        v132 = v227;
        v133 = &v205;
        v323 = &v205;
        v325 = 1;
        if ( v227 )
        {
          v223 = 0LL;
          v134 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                  + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   v227,
                   &v223);
          v32 = v134;
          if ( v134 >= 0 )
          {
            v234 = 0LL;
            v135 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v223)(
                     v223,
                     &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                     &v234);
            v32 = v135;
            if ( v135 >= 0 )
            {
              AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
                                              (CAudioSessionManagerProvider *)v127,
                                              v132,
                                              &v324);
              v32 = AudioSessionManagerInternal;
              if ( AudioSessionManagerInternal >= 0 )
              {
                if ( v234 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v234 + 16LL))(v234);
                if ( v223 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v223 + 16LL))(v223);
                v32 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xAE,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                  (const char *)(unsigned int)AudioSessionManagerInternal,
                  v43);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v234);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v223);
              }
              if ( !v325 )
              {
LABEL_169:
                if ( v32 < 0 )
                {
                  v129 = (unsigned int)v32;
                  v130 = 1453LL;
                  goto LABEL_215;
                }
                v138 = *((_QWORD *)v99 + 5);
                v139 = 1;
                if ( v138 )
                {
                  v354 = 0LL;
                  *(_OWORD *)v353 = 0LL;
                  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v138 + 40LL))(
                         v138,
                         &PKEY_Endpoint_AllowPreemption,
                         v353) >= 0
                    && ((LOWORD(v353[0]) - 11) & 0xFFF7) == 0 )
                  {
                    v139 = LOWORD(v353[1]) != 0;
                  }
                  PropVariantClear(v353);
                }
                v199 = 0;
                if ( v139 )
                {
                  if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
                  {
                    if ( _InterlockedCompareExchange((volatile signed __int32 *)v205 + 77, GetCurrentThreadId(), 0) )
                    {
                      v140 = 1471LL;
LABEL_183:
                      v32 = -2005139364;
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v140,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)0x887C005CLL,
                        v194);
                      v127 = v222;
                      goto LABEL_196;
                    }
                    v127 = v222;
                    v199 = 1;
                    goto LABEL_186;
                  }
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)v205 + 77, 0, 0) )
                  {
                    v140 = 1477LL;
                    goto LABEL_183;
                  }
                  v127 = v222;
                }
                if ( a14 != AUDCLNT_SHAREMODE_EXCLUSIVE )
                {
                  v146 = v202;
                  if ( (v202 & 1) != 0 )
                  {
                    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v200);
                    SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                                   v147,
                                                   v99,
                                                   v225,
                                                   v146,
                                                   a14,
                                                   (struct SaDeviceResourceParams *)v286,
                                                   (bool)v286,
                                                   v231,
                                                   v205,
                                                   v289,
                                                   v288,
                                                   &v200);
                    v32 = SaDeviceForOffloadedStream;
                    if ( SaDeviceForOffloadedStream < 0 )
                    {
                      v145 = 1491LL;
                      goto LABEL_195;
                    }
                  }
                  else
                  {
                    v148 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v231 + 96LL))(v231);
                    v149 = v200;
                    v200 = 0LL;
                    v150 = v148 != 0;
                    if ( v149 )
                      (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v149 + 16LL))(v149);
                    v151 = v205;
                    v152 = v225;
                    v153 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v206 + 144LL))(v206);
                    v154 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v206 + 136LL))(v206);
                    v197 = v150;
                    v99 = v290;
                    SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                                   (CAudioResourceManager *)((char *)v282 - 8),
                                                   v290,
                                                   v152,
                                                   v202,
                                                   a14,
                                                   (struct SaDeviceResourceParams *)v286,
                                                   v139,
                                                   v197,
                                                   v151,
                                                   v154,
                                                   v153,
                                                   &v200);
                    v32 = SaDeviceForOffloadedStream;
                    if ( SaDeviceForOffloadedStream < 0 )
                    {
                      v145 = 1498LL;
                      goto LABEL_195;
                    }
                  }
LABEL_198:
                  if ( v199 )
                  {
                    v143 = v205;
                    _InterlockedExchange((volatile __int32 *)v205 + 77, 0);
                    v127 = v222;
                  }
                  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
                    McGenEventWrite_EtwEventWriteTransfer(
                      (__int64)v143,
                      (__int64)&AudioResourceManager_SaDevice_Created,
                      v144,
                      1LL,
                      (__int64)v505);
                  v155 = (LPVOID *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
                  v156 = v155;
                  if ( v155 )
                  {
                    *v155 = 0LL;
                    v155[1] = 0LL;
                  }
                  else
                  {
                    v156 = 0LL;
                  }
                  v157 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v203 + 264LL))(v203, v156);
                  if ( v157 >= 0 )
                  {
                    if ( *(_DWORD *)v156 == 1 )
                    {
                      v235 = v203;
                      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v235);
                      v158 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup((CAudioResourceManager *)((char *)v282 - 8));
                      v32 = v158;
                      if ( v158 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x5E7,
                          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                          (const char *)(unsigned int)v158,
                          v196);
                        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v235);
                        AuxiliaryInputDescriptor::`scalar deleting destructor'((AuxiliaryInputDescriptor *)v156, v159);
LABEL_216:
                        if ( v127 )
                          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v127);
                        if ( v205 )
                          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release();
                        goto LABEL_220;
                      }
                      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v235);
                    }
                  }
                  else
                  {
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x5E3,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                      (const char *)(unsigned int)v157,
                      v196);
                  }
                  if ( v156 )
                  {
                    CoTaskMemFree(v156[1]);
                    v156[1] = 0LL;
                    operator delete(v156, (const struct std::nothrow_t *)0x10);
                  }
                  v160 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v203 + 208LL))(v203);
                  v119 = *(_QWORD *)v283;
                  v194 = v283[0];
                  v161 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, bool))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                           g_DeviceGraphManager,
                           v203,
                           v200,
                           v160 == 0);
                  v32 = v161;
                  if ( v161 >= 0 )
                  {
                    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
                      McGenEventWrite_EtwEventWriteTransfer(
                        v162,
                        (__int64)&AudioResourceManager_SaDevice_Connected,
                        v163,
                        1LL,
                        (__int64)v506);
                    if ( !ATL::SafeDecrementReferenceMultiThread(v127 + 3) )
                    {
                      (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v127 + 24LL))(v127, 1LL);
                      if ( Microsoft::WRL::Details::ModuleBase::module_ )
                        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                    }
                    if ( v205 && !ATL::SafeDecrementReferenceMultiThread((int *)v205 + 3) )
                    {
                      if ( v164 )
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v164 + 104LL))(v164, 1LL);
                      if ( Microsoft::WRL::Details::ModuleBase::module_ )
                        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                    }
                    if ( *(_QWORD *)v286 )
                      ReleaseAudioResourceHandle(*(unsigned __int64 *)v286);
                    v165 = v225;
                    if ( v225 )
                    {
                      CoTaskMemFree(*((LPVOID *)v225 + 3));
                      *((_QWORD *)v165 + 3) = 0LL;
                      CoTaskMemFree(*((LPVOID *)v165 + 2));
                      *((_QWORD *)v165 + 2) = 0LL;
                      CoTaskMemFree(*(LPVOID *)v165);
                      *(_QWORD *)v165 = 0LL;
                      operator delete(v165, (const struct std::nothrow_t *)0x60);
                    }
                    v98 = a22;
LABEL_240:
                    v166 = v200;
                    if ( v200 )
                    {
                      v285 = 0LL;
                      *(_QWORD *)v326 = &v285;
                      v327 = 0LL;
                      v328 = 1;
                      v167 = (*(int (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)v200 + 104LL))(
                               v200,
                               &v327) >= 0;
                      if ( v328 )
                      {
                        v168 = v326[0];
                        v169 = **(SaDeviceParams ***)v326;
                        **(_QWORD **)v326 = v327;
                        if ( v169 )
                          SaDeviceParams::`scalar deleting destructor'(v169, v168);
                      }
                      if ( v167 )
                      {
                        v284 = 0LL;
                        if ( InitOnceBeginInitialize(
                               &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
                               0,
                               &v273,
                               &v284)
                          && v273 )
                        {
                          v363 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
                          v284 = qword_18019F838;
                          qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
                          qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                          v364 = 0;
                          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v363);
                        }
                        v170 = *((_QWORD *)v284 + 1);
                        if ( *(_DWORD *)v170 > 4u
                          && (*(_QWORD *)(v170 + 16) & 0x400000000000LL) != 0
                          && (*(_QWORD *)(v170 + 24) & 0x400000000000LL) == *(_QWORD *)(v170 + 24) )
                        {
                          v171 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v206 + 80LL))(v206);
                          v172 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v99 + 56LL))(v99);
                          v352 = v171;
                          v274 = v172;
                          v329 = (char *)v285 + 80;
                          *(_QWORD *)v330 = v291;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                            v170,
                            (unsigned int)&unk_18016956C,
                            v173,
                            v174,
                            (__int64)v330,
                            (__int64)&v329,
                            (__int64)&v274,
                            (__int64)&v352);
                        }
                      }
                      v175 = v285;
                      if ( v285 )
                      {
                        CoTaskMemFree(*((LPVOID *)v285 + 3));
                        *((_QWORD *)v175 + 3) = 0LL;
                        CoTaskMemFree(*((LPVOID *)v175 + 2));
                        *((_QWORD *)v175 + 2) = 0LL;
                        CoTaskMemFree(*(LPVOID *)v175);
                        *(_QWORD *)v175 = 0LL;
                        operator delete(v175, (const struct std::nothrow_t *)0x60);
                      }
                      v166 = v200;
                    }
                    if ( v275 || v119 && !*(_DWORD *)(v119 + 944) && (v202 & 1) != 0 )
                    {
                      v176 = v203;
                      v232 = 0LL;
                      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v232);
                      v177 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v176 + 192LL))(v176, &v232);
                      v32 = v177;
                      if ( v177 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x617,
                          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                          (const char *)(unsigned int)v177,
                          v194);
LABEL_275:
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v232);
                        goto LABEL_276;
                      }
                      if ( v232 )
                      {
                        v224 = 0LL;
                        v178 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v232 + 56LL))(v232, &v224);
                        v32 = v178;
                        if ( v178 < 0 )
                        {
                          v179 = 1563LL;
LABEL_273:
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)v179,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            (const char *)(unsigned int)v178,
                            v194);
                          goto LABEL_274;
                        }
                        v180 = RpcImpersonateClient(0LL);
                        if ( v180 )
                        {
                          v32 = wil::details::in1diag3::Return_Win32(
                                  retaddr,
                                  (void *)0x620,
                                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                  (const char *)v180,
                                  v194);
LABEL_274:
                          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v224);
                          goto LABEL_275;
                        }
                        v181 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v224 + 32LL))(
                                 v224,
                                 v98,
                                 v119 + 56,
                                 v119 + 352);
                        v32 = v181;
                        if ( v181 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x623,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            (const char *)(unsigned int)v181,
                            v194);
                          RpcRevertToSelf();
                          goto LABEL_274;
                        }
                        RpcRevertToSelf();
                        if ( v43 == eOffloadConnector )
                        {
                          v178 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v224 + 40LL))(
                                   v224,
                                   v119 + 1252,
                                   v119 + 1256);
                          v32 = v178;
                          if ( v178 < 0 )
                          {
                            v179 = 1579LL;
                            goto LABEL_273;
                          }
                          v182 = v292;
                          v183 = v224;
                          *(_DWORD *)(v119 + 1248) = 1;
                          v178 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)v182
                                                                                                  + 32LL))(
                                   v182,
                                   v183);
                          v32 = v178;
                          if ( v178 < 0 )
                          {
                            v179 = 1581LL;
                            goto LABEL_273;
                          }
                        }
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v224);
                      }
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v232);
                      v166 = v200;
                    }
                    if ( v166 )
                      (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v166 + 16LL))(v166);
                    if ( v203 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v203 + 16LL))(v203);
                    if ( lpCriticalSection )
                      LeaveCriticalSection(lpCriticalSection);
                    v32 = 0;
                    goto LABEL_289;
                  }
                  v129 = (unsigned int)v161;
                  v130 = 1523LL;
LABEL_215:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v130,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)v129,
                    v194);
                  goto LABEL_216;
                }
LABEL_186:
                wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v200);
                SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                               v141,
                                               v99,
                                               v225,
                                               v202,
                                               AUDCLNT_SHAREMODE_EXCLUSIVE,
                                               (struct SaDeviceResourceParams *)v286,
                                               v139,
                                               v231,
                                               v205,
                                               &v200);
                v32 = SaDeviceForOffloadedStream;
                if ( SaDeviceForOffloadedStream < 0 )
                {
                  v145 = 1485LL;
LABEL_195:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v145,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)(unsigned int)SaDeviceForOffloadedStream,
                    v196);
LABEL_196:
                  if ( v199 )
                  {
                    _InterlockedExchange((volatile __int32 *)v205 + 77, 0);
                    v127 = v222;
                  }
                  goto LABEL_216;
                }
                goto LABEL_198;
              }
              v131 = v324;
              v133 = v323;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xAC,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                (const char *)(unsigned int)v135,
                v43);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v234);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v223);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA9,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
              (const char *)(unsigned int)v134,
              v43);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v223);
          }
        }
        else
        {
          v32 = -2147024809;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA3,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
            (const char *)0x80070057LL,
            v43);
        }
        v137 = *v133;
        *v133 = v131;
        if ( v137 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release();
        goto LABEL_169;
      }
      v242 = *(_DWORD *)&a16[1].nChannels;
      v243 = a16->nAvgBytesPerSec;
      v244 = a16->nSamplesPerSec;
      v220 = a16->nChannels;
      v434 = &v242;
      v432 = (char *)&a16[1].nSamplesPerSec + 2;
      v430 = &v243;
      v428 = &v244;
      v426 = &v220;
      v424 = L"WAVEFORMATEXTENSIBLE";
      v334[1] = 4;
      v418 = *(unsigned __int16 **)(v56 + 8);
      v335 = 0LL;
      v58 = v334;
      v435 = 4LL;
      v433 = 16LL;
      v431 = 4LL;
      v429 = 4LL;
      v427 = 2LL;
      v425 = 42LL;
      v334[0] = 184549376;
      v419 = *v418;
      v421 = &unk_180169B76;
      v420 = 2;
      v422 = 134;
      v423 = 1;
      v204 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    }
    else
    {
      Context = 0LL;
      v383 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v383.Data1 = wFormatTag;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_18019F838;
        qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
        qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register(
          (wil::TraceLoggingProvider *)qword_18019F838,
          qword_18019F850,
          (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
      }
      v56 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v56 <= 4u )
        goto LABEL_56;
      v240 = a16->nAvgBytesPerSec;
      v241 = a16->nSamplesPerSec;
      v219 = a16->nChannels;
      v398 = &v383;
      v396 = &v240;
      v394 = &v241;
      v392 = &v219;
      v390 = L"WAVEFORMATEX";
      v332[1] = 4;
      v384 = *(unsigned __int16 **)(v56 + 8);
      v399 = 16LL;
      v397 = 4LL;
      v395 = 4LL;
      v393 = 2LL;
      v391 = 26LL;
      v332[0] = 184549376;
      v333 = 0LL;
      v385 = *v384;
      v387 = &unk_180169C08;
      v386 = 2;
      v388 = 121;
      v58 = v332;
      v389 = 1;
      v204 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    }
    EtwEventWriteTransfer(*(_QWORD *)(v56 + 32), v58, 0LL);
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v48,
    v215);
LABEL_303:
  if ( v294 )
    ((void (__fastcall *)(struct IMMDevice *))v294->lpVtbl->Release)(v294);
LABEL_305:
  if ( v227 )
    CoTaskMemFree(v227);
  return (unsigned int)v32;
}
