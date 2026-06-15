/*
 * XREFs of ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18010C018
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x18010C520 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BBCD0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@35@Z @ 0x18010B5E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@U3@@-$_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CStreamResource::IssueGrantToASAR(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  _QWORD *v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v23; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+48h] BYREF

  v6 = *(_QWORD *)this;
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      249LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v6 + 128LL))(v6, &v18);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = 252LL;
LABEL_10:
    v14 = (unsigned int)v7;
    goto LABEL_11;
  }
  v13 = v18;
  if ( !v18 )
  {
    v11 = -2005139195;
    v14 = 2289828101LL;
    v12 = 253LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)v14);
    goto LABEL_15;
  }
  if ( (*((_DWORD *)this + 12) & 0x800000) != 0 )
  {
    v15 = *v18;
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
    v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v15 + 64))(v13, v16, a2, a3);
    v11 = v7;
    if ( v7 < 0 )
    {
      v12 = 258LL;
      goto LABEL_10;
    }
  }
  if ( (unsigned int)dword_18019D350 > 4 )
  {
    v23 = *((_DWORD *)this + 13);
    v19 = a3;
    v24 = a2;
    v20 = (__int64)this + 16;
    v21 = *((_QWORD *)this + 5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v8,
      byte_18016A688,
      v9,
      v10,
      (__int64)&v21,
      &v20,
      (__int64)&v24,
      (__int64)&v19,
      (__int64)&v23);
  }
  v11 = 0;
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
  return v11;
}
