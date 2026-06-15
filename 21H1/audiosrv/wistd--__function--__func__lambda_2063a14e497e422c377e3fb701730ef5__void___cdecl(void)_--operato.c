/*
 * XREFs of wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::operator() @ 0x180073D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CDF9C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1801346D8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?OnAppServicesReady@AtmosCheck@@AEAAXXZ @ 0x180137150 (-OnAppServicesReady@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 8;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v4 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a1 + 8, &v4) >= 0 )
    {
      if ( !v4 )
        return;
      if ( (unsigned int)dword_18019D520 > 5 )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v2,
          &unk_18016D884);
      *(_BYTE *)(*(_QWORD *)(v1 + 8) + 265LL) = 1;
      AtmosCheck::OnAppServicesReady(*(AtmosCheck **)(v1 + 8));
    }
    v3 = v4;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
