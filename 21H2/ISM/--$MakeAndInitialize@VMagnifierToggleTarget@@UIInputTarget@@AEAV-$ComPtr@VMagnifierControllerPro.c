/*
 * XREFs of ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@@Z @ 0x18017C71C
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D610 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x18017CBA8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@@Z @ 0x18017E8F8 (-RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@Mi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _BYTE *v6; // rax
  _BYTE *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v13; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11[1] = v6;
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>(v6);
    v7[32] = 0;
    *(_QWORD *)v7 = &MagnifierToggleTarget::`vftable';
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    v12 = *a3;
    v13 = v7;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
    v9 = *a2;
    v11[0] = v9;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 24));
      v7 = v13;
    }
    v8 = MagnifierToggleTarget::RuntimeClassInitialize(v7, v11, &v12);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a1);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
