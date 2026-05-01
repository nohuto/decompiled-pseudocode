/*
 * XREFs of ?InvokeElement@CMultitaskingViewElementBase@@UEAA_NXZ @ 0x1803A34D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMultitaskingViewElementBase::InvokeElement(CMultitaskingViewElementBase *this)
{
  char v2; // di
  IRawElementProviderSimple *v3; // rbx
  HRESULT v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IRawElementProviderSimple *pProvider; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 592LL))(this);
  if ( v2
    && UiaClientsAreListening()
    && (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this) )
  {
    pProvider = 0LL;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    if ( (*(int (__fastcall **)(CMultitaskingViewElementBase *, GUID *, IRawElementProviderSimple **))(*(_QWORD *)this + 376LL))(
           this,
           &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
           &pProvider) >= 0 )
    {
      v3 = pProvider;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      if ( ((int (__fastcall *)(IRawElementProviderSimple *, __int64, __int64 *))v3->lpVtbl->GetPatternProvider)(
             v3,
             10000LL,
             &v8) >= 0 )
      {
        v4 = UiaRaiseAutomationEvent(pProvider, 20009);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x24A,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
            (const char *)(unsigned int)v4);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  }
  return v2;
}
