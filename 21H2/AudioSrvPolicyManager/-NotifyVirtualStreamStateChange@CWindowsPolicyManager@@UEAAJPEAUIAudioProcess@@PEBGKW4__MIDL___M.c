/*
 * XREFs of ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x180007EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800017C0 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800071E0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180018844 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180039DDC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyVirtualStreamStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // r12
  _DWORD *v11; // rcx
  __int64 v12; // r8
  int v13; // r15d
  _DWORD *v14; // rbx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  int v18; // esi
  struct Microsoft::WRL::Details::ModuleBase *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v27; // rcx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  __int64 v32; // [rsp+28h] [rbp-48h]
  unsigned int v33; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  __int64 v37; // [rsp+58h] [rbp-18h] BYREF
  _DWORD *v38; // [rsp+60h] [rbp-10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v7 = a4;
  v11 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v11 > 4u )
  {
    v34 = a6;
    v36 = (__int64)off_18003F8E0[v7];
    v33 = a7;
    v37 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      (unsigned __int8 *)dword_180045EC8,
      v12,
      a7,
      (void **)&v37,
      (void **)&v36,
      (__int64)&v34,
      (__int64)&v33);
  }
  CWindowsPolicyManager::Lock(a1 - 16, &lpCriticalSection);
  v13 = 0;
  v14 = 0LL;
  v38 = 0LL;
  v15 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v15;
  if ( !v15 )
  {
    v18 = -2147024882;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_33;
  }
  v19 = Microsoft::WRL::Details::ModuleBase::module_;
  v15[3] = 1;
  *(_QWORD *)v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionInfo>::`vftable';
  if ( v19 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v19 + 8LL))(v19);
  *(_QWORD *)v17 = &VirtualAudioSessionInfo::`vftable';
  v20 = (__int64)(v17 + 6);
  *((_QWORD *)v17 + 3) = 0LL;
  *((_QWORD *)v17 + 2) = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v20 = (__int64)(v17 + 6);
  }
  v21 = -1LL;
  LOBYTE(v13) = (_DWORD)v7 == 3;
  v17[9] = v13;
  v17[8] = a5 == 1;
  v17[10] = a7 == 1;
  do
    ++v21;
  while ( *(_WORD *)(a3 + 2 * v21) );
  v32 = v20;
  v22 = _AllocStringWorker<CTCoAllocPolicy>(v19, v16, a3);
  v18 = v22;
  if ( v22 >= 0 )
    v18 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\virtualaudioinfo.cpp",
      (const char *)(unsigned int)v22);
  v23 = *(_QWORD *)v17;
  if ( v18 >= 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(v23 + 8))(v17);
    v24 = *(_QWORD *)v17;
    v14 = v17;
    v38 = v17;
    (*(void (__fastcall **)(_DWORD *))(v24 + 16))(v17);
    v18 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(v23 + 16))(v17);
  }
  if ( v18 < 0 )
    goto LABEL_18;
  v35 = 0LL;
  v25 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v26 = v25;
  if ( !v25 )
  {
    v18 = -2147024882;
LABEL_26:
    v28 = (unsigned int)v18;
    v29 = 722LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)v28);
    goto LABEL_31;
  }
  v27 = Microsoft::WRL::Details::ModuleBase::module_;
  v25[3] = 1;
  *(_QWORD *)v25 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamInfo>::`vftable';
  if ( v27 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v27 + 8LL))(v27);
  *(_QWORD *)v26 = &VirtualAudioStreamInfo::`vftable';
  *((_QWORD *)v26 + 2) = v14;
  if ( v14 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
  v26[6] = a4;
  v26[7] = a5 != 0;
  v18 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, __int64 *))v26)(
          v26,
          &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9,
          &v35);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v18 < 0 )
    goto LABEL_26;
  v30 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL)
                                                                                       + 80LL))(
          *(_QWORD *)(a1 + 16) + 16LL,
          v14,
          a6,
          a7,
          v35,
          v32);
  v18 = v30;
  if ( v30 < 0 )
  {
    v28 = (unsigned int)v30;
    v29 = 724LL;
    goto LABEL_29;
  }
  v18 = 0;
LABEL_31:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
LABEL_33:
  if ( v14 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v18;
}
