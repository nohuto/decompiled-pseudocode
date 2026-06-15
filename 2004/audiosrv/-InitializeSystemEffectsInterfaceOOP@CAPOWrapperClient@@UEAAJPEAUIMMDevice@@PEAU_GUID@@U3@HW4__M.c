/*
 * XREFs of ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800351F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
        CAPOWrapperClient *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  void *v7; // rbx
  struct IAudioSystemEffects2 **v11; // rbp
  BOOL v12; // ebx
  int v13; // edi
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, LPVOID, struct _GUID *, __int64 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, BOOL, char *); // rax
  __int64 v17; // [rsp+50h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0LL;
  pv = 0LL;
  if ( a2 && *((_QWORD *)this + 7) )
  {
    v11 = a7;
    v12 = a7 != 0LL;
    v13 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v13 < 0 )
      goto LABEL_10;
    v14 = *((_QWORD *)this + 7);
    v15 = *(__int64 (__fastcall **)(__int64, LPVOID, struct _GUID *, __int64 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, BOOL, char *))(*(_QWORD *)v14 + 32LL);
    *(struct _GUID *)v19 = *a4;
    v13 = v15(v14, pv, a3, v19, a5, a6, v12, (char *)this + 72);
    if ( v13 < 0 )
      goto LABEL_10;
    if ( v11 )
      v13 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, struct IAudioSystemEffects2 **))this)(
              this,
              &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
              v11);
    if ( v13 < 0 )
    {
LABEL_10:
      if ( (unsigned int)dword_18019D4E8 > 2 )
      {
        LODWORD(v20) = v13;
        v19[0] = (__int64)"CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP";
        LODWORD(v17) = 117;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019D4E8,
          (__int64)v19,
          (__int64)&v17,
          (__int64)&v20);
      }
    }
    v7 = pv;
  }
  else
  {
    v13 = -2147024809;
  }
  CoTaskMemFree(v7);
  return (unsigned int)v13;
}
