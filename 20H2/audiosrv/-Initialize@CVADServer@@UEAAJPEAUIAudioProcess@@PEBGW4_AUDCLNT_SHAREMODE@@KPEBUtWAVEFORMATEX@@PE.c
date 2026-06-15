/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x1800192A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016E00 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x18001B8A0 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18002C23C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     swprintf_s @ 0x18006AE64 (swprintf_s.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006E330 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800C238C (WPP_SF_dd.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800DBEC0 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800DBF94 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     WPP_SF_DDd @ 0x1800E1274 (WPP_SF_DDd.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x1800F5964 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
 *     ?AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z @ 0x1800F5DC4 (-AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x18011FBD4 (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5,
        struct tWAVEFORMATEX *a6,
        struct _GUID *a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        struct IProcessSubmixProxy *a10)
{
  CVADServer *v12; // r13
  char *v13; // rdi
  void *v14; // rsi
  LPOLESTR v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r15
  char *v19; // rcx
  size_t v20; // r8
  char **v21; // r15
  __int64 v22; // rdi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rsi
  char *v25; // rcx
  size_t v26; // r8
  HKEY v27; // rdi
  struct VadServerSettings *v28; // rsi
  char *v29; // rax
  __int64 nChannels; // r8
  DWORD nSamplesPerSec; // r9d
  __int64 nAvgBytesPerSec; // rdx
  int nBlockAlign; // r10d
  WORD cbSize; // cx
  WORD wFormatTag; // r11
  int v36; // eax
  unsigned int v37; // edi
  struct IAudioProcess *v38; // rsi
  int v39; // r15d
  struct IMMDevice *v40; // rbx
  void (__fastcall ***v41)(_QWORD, GUID *, void **); // r9
  void *v42; // rcx
  int v43; // r14d
  int v44; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v45; // edx
  int v46; // eax
  int v47; // ecx
  int v48; // edi
  struct tWAVEFORMATEX *v49; // rsi
  __int64 v50; // rdi
  void *v51; // rax
  void *v52; // r14
  int v53; // esi
  __int64 v54; // rdi
  struct IProcessSubmixProxy *v55; // rcx
  __int64 v56; // rdi
  __int64 *i; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 *v61; // rax
  int v62; // r8d
  __int64 v63; // rax
  signed int v64; // edi
  struct CEndpointCharacteristics *v65; // r14
  AudioJournal *v66; // rcx
  int StreamInfo; // eax
  const BYTE *v68; // r14
  const WCHAR *v69; // r15
  DWORD v70; // r13d
  LSTATUS v71; // eax
  LSTATUS v72; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  bool v77; // zf
  WORD wBitsPerSample; // cx
  WORD v79; // ax
  int v80; // ecx
  CAudioSessionManager *v81; // rcx
  __int64 v82; // rdx
  char *v83; // rdx
  char *v84; // rdx
  __int64 v85; // rdx
  HRESULT v86; // eax
  int v87; // edi
  LPOLESTR v88; // rcx
  LSTATUS v89; // eax
  void *v90; // rax
  void *v91; // rcx
  unsigned int v92; // esi
  void *v93; // rcx
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rdx
  struct CEndpointCharacteristics **dwOptions; // [rsp+20h] [rbp-368h]
  int dwOptionsa; // [rsp+20h] [rbp-368h]
  int dwOptionsb; // [rsp+20h] [rbp-368h]
  int dwOptionsc; // [rsp+20h] [rbp-368h]
  int dwOptionsd; // [rsp+20h] [rbp-368h]
  LPOLESTR lpsz; // [rsp+88h] [rbp-300h] BYREF
  void *Src; // [rsp+90h] [rbp-2F8h] BYREF
  int v104; // [rsp+98h] [rbp-2F0h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp-2E8h] BYREF
  struct CEndpointCharacteristics *v106; // [rsp+A8h] [rbp-2E0h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp-2D8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+C0h] [rbp-2C8h] BYREF
  __int64 v109; // [rsp+D0h] [rbp-2B8h]
  struct tWAVEFORMATEX *v110; // [rsp+E0h] [rbp-2A8h]
  struct IProcessSubmixProxy *v111; // [rsp+E8h] [rbp-2A0h]
  struct VadServerSettings *v112; // [rsp+F0h] [rbp-298h]
  struct IMMDevice *v113; // [rsp+F8h] [rbp-290h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+108h] [rbp-280h]
  struct _GUID *v115; // [rsp+110h] [rbp-278h]
  char *v116; // [rsp+120h] [rbp-268h]
  wchar_t Buffer[264]; // [rsp+130h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+388h] [rbp+0h]

  v104 = a4;
  hKey = (HKEY)a2;
  v12 = this;
  pv = this;
  pvar[0] = this;
  v110 = a6;
  v115 = a7;
  v112 = a8;
  v111 = a10;
  v106 = 0LL;
  v113 = 0LL;
  *a9 = 0LL;
  v13 = (char *)this + 224;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v116 = v13;
  if ( *((_DWORD *)v12 + 46) )
  {
    v53 = -2004287486;
    v81 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      v82 = 25LL;
LABEL_134:
      WPP_SF_d(*((_QWORD *)v81 + 2), v82, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, (unsigned int)v53);
      JUMPOUT(0x180085543LL);
    }
LABEL_242:
    JUMPOUT(0x18008554ALL);
  }
  if ( a4 > 1 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
    }
LABEL_239:
    JUMPOUT(0x18008554FLL);
  }
  dwOptions = &v106;
  if ( (*(int (__fastcall **)(PVOID, char *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a3,
         0LL,
         0LL) < 0 )
    goto LABEL_241;
  Src = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void **))(**((_QWORD **)v106 + 2) + 40LL))(*((_QWORD *)v106 + 2), &Src) < 0 )
  {
    CoTaskMemFree(Src);
    JUMPOUT(0x180085557LL);
  }
  v14 = Src;
  v15 = (LPOLESTR)((char *)v12 + 216);
  lpsz = (LPOLESTR)((char *)v12 + 216);
  if ( !Src )
    goto LABEL_146;
  v16 = -1LL;
  do
    ++v16;
  while ( *((_WORD *)Src + v16) );
  if ( !(_DWORD)v16 )
  {
LABEL_146:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)v12 + 216);
    goto LABEL_19;
  }
  v17 = *(unsigned int *)(*(_QWORD *)v15 - 16LL);
  v18 = ((__int64)Src - *(_QWORD *)v15) >> 1;
  if ( ((1 - *(_DWORD *)(*(_QWORD *)v15 - 8LL)) | (*(_DWORD *)(*(_QWORD *)v15 - 12LL) - (int)v16)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v15, (unsigned int)v16);
    v15 = lpsz;
  }
  v19 = *(char **)v15;
  v20 = 2LL * (int)v16;
  if ( v18 > v17 )
  {
    if ( !v20 )
      goto LABEL_16;
    if ( v19 )
    {
      memcpy_0(v19, v14, v20);
LABEL_15:
      v15 = lpsz;
      goto LABEL_16;
    }
    goto LABEL_144;
  }
  v83 = &v19[2 * v18];
  if ( v20 )
  {
    if ( v19 && v83 )
    {
      memmove_0(v19, v83, v20);
      goto LABEL_15;
    }
LABEL_144:
    *(_DWORD *)_o__errno(v19) = 22;
    invalid_parameter_noinfo();
    goto LABEL_15;
  }
LABEL_16:
  if ( (int)v16 < 0 || (int)v16 > *(_DWORD *)(*(_QWORD *)v15 - 12LL) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*(_QWORD *)v15 - 16LL) = v16;
  *(_WORD *)(*(_QWORD *)v15 + 2LL * (int)v16) = 0;
  v12 = (CVADServer *)pv;
LABEL_19:
  v21 = (char **)((char *)v12 + 208);
  if ( !a3 )
    goto LABEL_153;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)&a3[2 * v22] );
  if ( !(_DWORD)v22 )
  {
LABEL_153:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)v12 + 208);
    goto LABEL_32;
  }
  v23 = *((unsigned int *)*v21 - 4);
  v24 = (a3 - *v21) >> 1;
  if ( ((1 - *((_DWORD *)*v21 - 2)) | (*((_DWORD *)*v21 - 3) - (int)v22)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v21, (unsigned int)v22);
  v25 = *v21;
  v26 = 2LL * (int)v22;
  if ( v24 <= v23 )
  {
    v84 = &v25[2 * v24];
    if ( !v26 )
      goto LABEL_29;
    if ( v25 && v84 )
    {
      memmove_0(v25, v84, v26);
      goto LABEL_29;
    }
  }
  else
  {
    if ( !v26 )
      goto LABEL_29;
    if ( v25 )
    {
      memcpy_0(v25, a3, v26);
      goto LABEL_29;
    }
  }
  *(_DWORD *)_o__errno(v25) = 22;
  invalid_parameter_noinfo();
LABEL_29:
  if ( (int)v22 < 0 || (int)v22 > *((_DWORD *)*v21 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*v21 - 4) = v22;
  *(_WORD *)&(*v21)[2 * (int)v22] = 0;
  v12 = (CVADServer *)pv;
LABEL_32:
  CoTaskMemFree(Src);
  v27 = hKey;
  *((_DWORD *)v12 + 16) = (*(__int64 (__fastcall **)(HKEY))(*(_QWORD *)hKey + 40LL))(hKey);
  v28 = v112;
  v112 = (struct VadServerSettings *)((char *)v112 + 48);
  if ( *(_DWORD *)v112 >= 0x15u )
  {
    v85 = 1391LL;
LABEL_156:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v85,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      (int)dwOptions);
    goto LABEL_239;
  }
  *(_OWORD *)pvar = *((_OWORD *)v28 + 1);
  v29 = (char *)pvar[0] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( pvar[0] == *(PROPVARIANT *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v29 = (char *)pvar[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v29 )
  {
    lpsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &lpsz,
      0LL);
    v86 = StringFromCLSID((const IID *const)pvar, &lpsz);
    v87 = v86;
    if ( v86 >= 0 )
    {
      dwOptionsc = (int)lpsz;
      if ( swprintf_s(Buffer, 0x104uLL, L"%s\\%s", L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\") == -1 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x563,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007007ALL,
          dwOptionsc);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        goto LABEL_169;
      }
      Src = 0LL;
      v89 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, (PHKEY)&Src);
      v87 = v89;
      if ( v89 >= 0 )
      {
        if ( Src )
          RegCloseKey((HKEY)Src);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        goto LABEL_174;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x566,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v89,
        (int)dwOptions);
      if ( Src )
        RegCloseKey((HKEY)Src);
      v88 = lpsz;
      if ( !lpsz )
      {
LABEL_168:
        if ( v87 < 0 )
        {
LABEL_169:
          v85 = 1393LL;
          goto LABEL_156;
        }
LABEL_174:
        v27 = hKey;
        goto LABEL_36;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x560,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v86,
        (int)&v106);
      v88 = lpsz;
      if ( !lpsz )
        goto LABEL_168;
    }
    CoTaskMemFree(v88);
    goto LABEL_168;
  }
LABEL_36:
  if ( *((_DWORD *)v28 + 13) > 3u )
  {
    v85 = 1395LL;
    goto LABEL_156;
  }
  *(_OWORD *)((char *)v12 + 280) = *(_OWORD *)v28;
  *(_OWORD *)((char *)v12 + 296) = *((_OWORD *)v28 + 1);
  *(_OWORD *)((char *)v12 + 312) = *((_OWORD *)v28 + 2);
  *(_OWORD *)((char *)v12 + 328) = *((_OWORD *)v28 + 3);
  *(_OWORD *)((char *)v12 + 344) = *((_OWORD *)v28 + 4);
  *(_OWORD *)((char *)v12 + 360) = *((_OWORD *)v28 + 5);
  *(_OWORD *)((char *)v12 + 376) = *((_OWORD *)v28 + 6);
  *(_OWORD *)((char *)v12 + 392) = *((_OWORD *)v28 + 7);
  *(_OWORD *)((char *)v12 + 408) = *((_OWORD *)v28 + 8);
  *(_OWORD *)((char *)v12 + 424) = *((_OWORD *)v28 + 9);
  if ( *((_DWORD *)v12 + 98) )
  {
    v90 = operator new[](*((unsigned int *)v12 + 98), (const struct std::nothrow_t *)&std::nothrow);
    v91 = (void *)*((_QWORD *)v12 + 60);
    *((_QWORD *)v12 + 60) = v90;
    if ( v91 )
    {
      operator delete(v91, (const struct std::nothrow_t *)1);
      v90 = (void *)*((_QWORD *)v12 + 60);
    }
    if ( !v90 )
      goto LABEL_241;
    memcpy_0(v90, *((const void **)v12 + 50), *((unsigned int *)v12 + 98));
    *((_QWORD *)v12 + 50) = *((_QWORD *)v12 + 60);
  }
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, HKEY, _QWORD))(*(_QWORD *)g_PolicyManager + 88LL))(
         g_PolicyManager,
         v27,
         *((_QWORD *)v12 + 27)) < 0 )
    goto LABEL_241;
  if ( !v110 )
  {
    v92 = -2147467261;
LABEL_182:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, v92);
    }
    goto LABEL_239;
  }
  nChannels = v110->nChannels;
  if ( !(_WORD)nChannels )
    goto LABEL_181;
  nSamplesPerSec = v110->nSamplesPerSec;
  if ( !nSamplesPerSec )
    goto LABEL_181;
  nAvgBytesPerSec = v110->nAvgBytesPerSec;
  if ( !(_DWORD)nAvgBytesPerSec )
    goto LABEL_181;
  nBlockAlign = v110->nBlockAlign;
  if ( !(_WORD)nBlockAlign )
    goto LABEL_181;
  cbSize = v110->cbSize;
  if ( cbSize > 0x400u )
    goto LABEL_181;
  wFormatTag = v110->wFormatTag;
  if ( ((v110->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( !cbSize
      && (v110->wBitsPerSample & 7) == 0
      && (unsigned __int16)nChannels <= 2u
      && (_DWORD)nAvgBytesPerSec == (nSamplesPerSec * v110->wBitsPerSample * (_DWORD)nChannels) >> 3 )
    {
      goto LABEL_50;
    }
    goto LABEL_181;
  }
  if ( wFormatTag != 0xFFFE )
    goto LABEL_50;
  if ( cbSize < 0x16u )
    goto LABEL_181;
  v74 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v110[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v110[1].nSamplesPerSec + 2) )
    v74 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v110[1].wBitsPerSample;
  if ( v74 )
  {
    v75 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v110[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v110[1].nSamplesPerSec + 2) )
      v75 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v110[1].wBitsPerSample;
    if ( v75 )
      goto LABEL_50;
  }
  v76 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v110[1].nSamplesPerSec + 2);
  if ( !v76 )
    v76 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v110[1].wBitsPerSample;
  v77 = v76 == 0;
  wBitsPerSample = v110->wBitsPerSample;
  if ( v77 )
  {
    if ( ((wBitsPerSample - 8) & 0xFFE7) == 0 )
      goto LABEL_124;
LABEL_181:
    v92 = -2147024809;
    goto LABEL_182;
  }
  if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
    goto LABEL_181;
LABEL_124:
  v79 = v110[1].wFormatTag;
  if ( !v79 )
    goto LABEL_181;
  if ( wBitsPerSample < v79 )
    goto LABEL_181;
  v80 = nChannels * wBitsPerSample;
  if ( (_DWORD)nAvgBytesPerSec != (nSamplesPerSec * v80) >> 3 )
    goto LABEL_181;
  nAvgBytesPerSec = (v80 >> 31) & 7;
  if ( nBlockAlign != v80 / 8 )
    goto LABEL_181;
LABEL_50:
  if ( (unsigned int)nChannels > 2 && ((wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      LODWORD(dwOptions) = v110->nChannels;
      WPP_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 2), nAvgBytesPerSec, nChannels, v110->wFormatTag, dwOptions);
    }
    goto LABEL_239;
  }
  v36 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v106 + 56LL))(v106);
  v37 = a5;
  v38 = (struct IAudioProcess *)hKey;
  if ( v36 )
  {
    v39 = 1;
  }
  else if ( (a5 & 0x20000) != 0 )
  {
    v39 = 2;
    if ( (*(unsigned __int8 (__fastcall **)(HKEY))(*(_QWORD *)hKey + 496LL))(hKey)
      || CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams(v106) )
    {
      v37 = a5 | 0x80000000;
    }
  }
  else
  {
    v39 = 0;
  }
  if ( (int)CVADServer::InitializePolicy(v12, v38, v115, v37, a9) < 0 )
LABEL_241:
    JUMPOUT(0x18008553CLL);
  v40 = (struct IMMDevice *)*((_QWORD *)v106 + 2);
  v113 = v40;
  ((void (__fastcall *)(struct IMMDevice *))v40->lpVtbl->AddRef)(v40);
  LODWORD(lpsz) = 0;
  v41 = (void (__fastcall ***)(_QWORD, GUID *, void **))*((_QWORD *)v106 + 2);
  v42 = 0LL;
  Src = 0LL;
  if ( v41 )
  {
    (**v41)(v41, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, &Src);
    v42 = Src;
  }
  if ( v42 )
  {
    (*(void (__fastcall **)(void *, LPOLESTR *))(*(_QWORD *)v42 + 88LL))(v42, &lpsz);
    v42 = Src;
  }
  v43 = (int)lpsz;
  if ( v42 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 16LL))(v42);
  v44 = 1;
  *(_OWORD *)pvar = 0LL;
  v109 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v106 + 5) + 40LL))(
         *((_QWORD *)v106 + 5),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v44 = 0;
  }
  PropVariantClear(pvar);
  if ( (v37 & 0x400000) != 0 )
  {
    v47 = 3;
    goto LABEL_70;
  }
  v46 = v37 & 0x20000;
  if ( v111 && v46 )
  {
    v47 = 0;
    goto LABEL_70;
  }
  if ( v44 && v46 )
  {
    v47 = 2;
    goto LABEL_70;
  }
  if ( v104 == 1 )
  {
    v93 = 0LL;
    pv = 0LL;
    if ( v43 )
    {
      if ( !IsFormatSupportedByHwAudioEngine(v40, v45, v110, (struct tWAVEFORMATEX **)&pv) )
      {
        CoTaskMemFree(pv);
        goto LABEL_203;
      }
      v93 = pv;
    }
    CoTaskMemFree(v93);
  }
  if ( (v37 & 2) == 0 )
  {
LABEL_203:
    v47 = 1;
    goto LABEL_70;
  }
  v47 = 0;
LABEL_70:
  *((_DWORD *)v12 + 138) = v47;
  v48 = v104;
  dwOptionsa = v39;
  if ( (int)DeriveAudioProcessingModeConfiguration(
              *((unsigned int *)v12 + 82),
              *((unsigned int *)v12 + 84),
              *((unsigned int *)v12 + 102),
              v106) < 0
    || v48 == 1
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)v12 + 27))
     || !(*(unsigned int (__fastcall **)(HKEY, _QWORD, __int64))(*(_QWORD *)hKey + 144LL))(
           hKey,
           *(unsigned int *)v112,
           1LL)) )
  {
    goto LABEL_241;
  }
  v49 = v110;
  v50 = v110->cbSize;
  v51 = CoTaskMemAlloc(v50 + 18);
  v52 = v51;
  if ( v51 )
  {
    memcpy_0(v51, v49, v50 + 18);
    v53 = 0;
  }
  else
  {
    v53 = -2147024882;
  }
  *((_QWORD *)v12 + 22) = v52;
  if ( v53 < 0 )
  {
    v81 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      v82 = 30LL;
      goto LABEL_134;
    }
    goto LABEL_242;
  }
  *((_DWORD *)v12 + 66) = v104;
  v54 = *((_QWORD *)v12 + 59);
  v55 = v111;
  *((_QWORD *)v12 + 59) = v111;
  if ( v55 )
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v55 + 8LL))(v55);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  *((_DWORD *)v12 + 46) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
  }
  EnterCriticalSection(&g_csVadList);
  pvar[0] = &g_csVadList;
  v56 = g_VADServerList;
  i = (__int64 *)qword_18019D9D0;
  if ( !qword_18019D9D0 )
  {
    if ( dword_18019D9D8 )
    {
      if ( dword_18019D9D8 == 10LL )
        v58 = 0x1999999999999999LL;
      else
        v58 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_18019D9D8;
      if ( v58 < 0x18 )
        goto LABEL_217;
      v59 = 24LL * (unsigned int)dword_18019D9D8;
    }
    else
    {
      v59 = 0LL;
    }
    if ( (unsigned __int64)~v59 >= 8 )
    {
      v60 = malloc(v59 + 8);
      if ( v60 )
      {
        *v60 = qword_18019D9C8;
        qword_18019D9C8 = (__int64)v60;
        v61 = &v60[3 * (unsigned int)(dword_18019D9D8 - 1) + 1];
        v62 = dword_18019D9D8 - 1;
        for ( i = (__int64 *)qword_18019D9D0; v62 >= 0; --v62 )
        {
          *v61 = (__int64)i;
          i = v61;
          qword_18019D9D0 = (__int64)v61;
          v61 -= 3;
        }
        goto LABEL_91;
      }
    }
LABEL_217:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_91:
  v63 = *i;
  i[2] = (__int64)v12;
  qword_18019D9D0 = v63;
  i[1] = 0LL;
  *i = v56;
  ++qword_18019D9C0;
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = i;
  else
    qword_18019D9B8 = (__int64)i;
  g_VADServerList = (__int64)i;
  LeaveCriticalSection(&g_csVadList);
  v64 = -2147024809;
  v65 = v106;
  EnterCriticalSection(&CriticalSection);
  pvar[0] = &CriticalSection;
  if ( !g_AudioJournal )
  {
    v94 = 2147549183LL;
    v95 = 238LL;
LABEL_230:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v95,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)v94,
      dwOptionsa);
    goto LABEL_105;
  }
  StreamInfo = AudioJournal::FindStreamInfo(v66, v65, (struct AudioJournal::StreamInfo **)&Src, &v104);
  if ( StreamInfo < 0 )
  {
    v94 = (unsigned int)StreamInfo;
    v95 = 240LL;
    goto LABEL_230;
  }
  ++*((_DWORD *)Src + 50 * v104 + 37);
  v68 = (const BYTE *)Src;
  if ( Src == &unk_18019F038 )
  {
    v69 = L"Render";
    v70 = 600;
  }
  else if ( Src == &unk_18019F290 )
  {
    v69 = L"Capture";
    v70 = 400;
  }
  else
  {
    if ( Src != &unk_18019F420 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1ED,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
        (const char *)0x80070057LL,
        v39);
      goto LABEL_229;
    }
    v69 = L"UnknownStream";
    v70 = 200;
  }
  hKey = 0LL;
  pvar[0] = &hKey;
  LOBYTE(pvar[1]) = 1;
  v71 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_18019F4E8, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
  v64 = v71;
  if ( v71 > 0 )
    v64 = (unsigned __int16)v71 | 0x80070000;
  if ( v64 < 0 )
  {
    v96 = 452LL;
LABEL_227:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v96,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v64,
      dwOptionsb);
    wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(pvar);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v64,
      dwOptionsd);
LABEL_229:
    v94 = (unsigned int)v64;
    v95 = 249LL;
    goto LABEL_230;
  }
  v72 = RegSetValueExW(hKey, v69, 0, 3u, v68, v70);
  v64 = v72;
  if ( v72 > 0 )
    v64 = (unsigned __int16)v72 | 0x80070000;
  if ( v64 < 0 )
  {
    v96 = 455LL;
    goto LABEL_227;
  }
  if ( hKey )
    RegCloseKey(hKey);
LABEL_105:
  LeaveCriticalSection(&CriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v40 )
    ((void (__fastcall *)(struct IMMDevice *))v40->lpVtbl->Release)(v40);
  if ( v106 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v106 + 16LL))(v106);
  return (unsigned int)v53;
}
