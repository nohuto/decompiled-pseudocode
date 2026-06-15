/*
 * XREFs of ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DB9D4
 * Callers:
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800DB950 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??9?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@QEBA_NU_Default_sentinel@1@@Z @ 0x18002E398 (--9-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$com_ptr_t@VCPBMStre.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?try_lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18006F4F0 (-try_lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_.c)
 *     _tlgKeywordOn @ 0x1800B7A3C (_tlgKeywordOn.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800D2644 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 *     ?GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ @ 0x1800D2998 (-GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U5@U3@U3@U3@U3@U6@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555555AEBU?$_tlgWrapperByVal@$00@@54AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByRef@$0BA@@@575555865@Z @ 0x1800DAF6C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::CaptureState(CVADServer *this)
{
  __int64 v2; // rdi
  char v3; // r13
  _WORD *v4; // rax
  __int64 v5; // rcx
  bool v6; // si
  _QWORD *v7; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  _WORD *v10; // r12
  int v11; // r15d
  GUID *v12; // r14
  int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // r9
  const wchar_t *v17; // rax
  CAudioStream *v18; // rcx
  char v19; // [rsp+F8h] [rbp-80h] BYREF
  bool v20[3]; // [rsp+F9h] [rbp-7Fh] BYREF
  float MinStreamChannelVolume; // [rsp+FCh] [rbp-7Ch] BYREF
  _WORD v22[2]; // [rsp+100h] [rbp-78h] BYREF
  float v23; // [rsp+104h] [rbp-74h] BYREF
  int v24; // [rsp+108h] [rbp-70h] BYREF
  int v25; // [rsp+10Ch] [rbp-6Ch] BYREF
  int v26; // [rsp+110h] [rbp-68h] BYREF
  int v27; // [rsp+114h] [rbp-64h] BYREF
  int v28; // [rsp+118h] [rbp-60h] BYREF
  int v29; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v30; // [rsp+120h] [rbp-58h] BYREF
  int v31; // [rsp+124h] [rbp-54h] BYREF
  int v32; // [rsp+128h] [rbp-50h] BYREF
  int v33; // [rsp+12Ch] [rbp-4Ch] BYREF
  int v34; // [rsp+130h] [rbp-48h] BYREF
  int v35; // [rsp+134h] [rbp-44h] BYREF
  int v36; // [rsp+138h] [rbp-40h] BYREF
  int v37; // [rsp+13Ch] [rbp-3Ch] BYREF
  int v38; // [rsp+140h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+148h] [rbp-30h] BYREF
  __int64 v40; // [rsp+150h] [rbp-28h] BYREF
  GUID *v41; // [rsp+158h] [rbp-20h] BYREF
  const wchar_t *v42; // [rsp+160h] [rbp-18h] BYREF
  void *v43; // [rsp+168h] [rbp-10h] BYREF
  void *v44; // [rsp+170h] [rbp-8h] BYREF
  __int64 v45; // [rsp+178h] [rbp+0h] BYREF
  GUID v46; // [rsp+180h] [rbp+8h] BYREF

  wil::critical_section::try_lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 224),
    (unsigned __int64 *)&lpCriticalSection);
  v46 = GUID_00000000_0000_0000_0000_000000000000;
  v2 = 0LL;
  v3 = 0;
  MinStreamChannelVolume = FLOAT_N1_0;
  v4 = (_WORD *)*((_QWORD *)this + 22);
  if ( *v4 == 0xFFFE )
  {
    v2 = *((_QWORD *)this + 22);
  }
  else
  {
    v46 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v46.Data1 = (unsigned __int16)*v4;
  }
  v6 = std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>>,std::_Iterator_base0>::operator!=(&lpCriticalSection);
  if ( v6 )
  {
    v5 = *((_QWORD *)this + 24);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        v3 = *(_BYTE *)(v5 + 224);
        MinStreamChannelVolume = CAudioStream::GetMinStreamChannelVolume((CAudioStream *)v5);
      }
    }
  }
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v5,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v7[1] > 4u && tlgKeywordOn(v7[1], 3LL) )
  {
    v9 = *((_QWORD *)this + 22);
    v10 = (_WORD *)(v2 + 18);
    if ( v2 )
    {
      v11 = *(_DWORD *)(v2 + 20);
    }
    else
    {
      v10 = (_WORD *)(v9 + 14);
      v11 = 0;
    }
    v12 = (GUID *)(v2 + 24);
    if ( !v2 )
      v12 = &v46;
    v13 = *((_DWORD *)this + 67);
    v14 = *((unsigned int *)this + 66);
    v15 = *((_DWORD *)this + 138);
    v16 = *((_QWORD *)this + 68);
    v23 = MinStreamChannelVolume;
    v19 = v3;
    v40 = (__int64)this + 376;
    v24 = *((_DWORD *)this + 91);
    v25 = *((_DWORD *)this + 90);
    v26 = *((_DWORD *)this + 89);
    v27 = *((_DWORD *)this + 88);
    v22[0] = *v10;
    v28 = v11;
    v41 = v12;
    v29 = *(_DWORD *)(v9 + 8);
    v30 = *(_DWORD *)(v9 + 4);
    LOWORD(MinStreamChannelVolume) = *(_WORD *)(v9 + 2);
    v17 = L"WAVEFORMATEXTENSIBLE";
    if ( !v2 )
      v17 = L"WAVEFORMATEX";
    v42 = v17;
    v31 = v13;
    v20[0] = *((_DWORD *)this + 83) == 1;
    v32 = *((_DWORD *)this + 87);
    v33 = *((_DWORD *)this + 84);
    v34 = v14;
    v35 = *((_DWORD *)this + 82);
    v36 = v15;
    v37 = v14;
    v43 = (void *)*((_QWORD *)this + 26);
    v38 = *((_DWORD *)this + 16);
    v44 = (void *)*((_QWORD *)this + 18);
    v45 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v8,
      byte_18016834C,
      v14,
      v16,
      (__int64)&v45,
      &v44,
      (__int64)&v38,
      &v43,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)v20,
      (__int64)&v31,
      (void **)&v42,
      (__int64)&MinStreamChannelVolume,
      (__int64)&v30,
      (__int64)&v29,
      (__int64 *)&v41,
      (__int64)&v28,
      (__int64)v22,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      &v40,
      (__int64)&v19,
      (__int64)&v23);
  }
  if ( v6 )
  {
    v18 = (CAudioStream *)*((_QWORD *)this + 24);
    if ( v18 )
    {
      if ( *((_QWORD *)v18 + 7) )
        CAudioStream::CapturePolicyVolumeState(v18);
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
