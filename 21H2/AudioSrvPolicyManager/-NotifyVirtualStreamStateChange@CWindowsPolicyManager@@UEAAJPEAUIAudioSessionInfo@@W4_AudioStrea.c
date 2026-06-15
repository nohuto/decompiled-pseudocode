/*
 * XREFs of ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180008200
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800017C0 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800071E0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyVirtualStreamStateChange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  struct AudioSrvPolicyManagerTelemetryProvider *v9; // rax
  _QWORD *v10; // rsi
  _DWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp+8h] BYREF

  v9 = AudioSrvPolicyManagerTelemetryProvider::Instance();
  v10 = a5;
  v11 = (_DWORD *)*((_QWORD *)v9 + 1);
  if ( *v11 > 4u )
  {
    v12 = *a5;
    LODWORD(lpCriticalSection) = a4;
    LODWORD(v18) = a3;
    v19 = (__int64)off_18003F8E0[(*(unsigned int (__fastcall **)(_QWORD *))(v12 + 48))(a5)];
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      (unsigned __int8 *)dword_180045E71,
      v13,
      v14,
      (void **)&v20,
      (void **)&v19,
      (__int64)&v18,
      (__int64)&lpCriticalSection);
  }
  CWindowsPolicyManager::Lock(a1 - 16, &lpCriticalSection);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL)
                                                                              + 80LL))(
          *(_QWORD *)(a1 + 16) + 16LL,
          a2,
          a3,
          a4,
          v10);
  v16 = v15;
  if ( v15 >= 0 )
    v16 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E8,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v15);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v16;
}
