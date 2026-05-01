/*
 * XREFs of Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x180024008
 * Callers:
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180023ED4 (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039524 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216____(
        _QWORD *a1,
        __int64 *a2)
{
  char *v4; // rax
  char *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  *a1 = 0LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
    *((_DWORD *)v5 + 11) = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7 = *a2;
    *((_QWORD *)v5 + 6) = *a2;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 64);
      while ( v8 >= 0 )
      {
        if ( (_DWORD)v8 != 0x7FFFFFFF )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
          if ( v9 != v8 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v8 + 16));
    }
LABEL_11:
    *(_QWORD *)v5 = off_18046DD78;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
