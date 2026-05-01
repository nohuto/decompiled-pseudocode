/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___ @ 0x18004D084
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004CF28 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6 = *a2;
    v5[3] = 0LL;
    v7 = a2 + 3;
    v5[4] = 0LL;
    v5[2] = v6;
    v5[3] = a2[1];
    v5[4] = a2[2];
    a2[1] = 0LL;
    a2[2] = 0LL;
    v5[5] = 0LL;
    if ( v5 + 5 != a2 + 3 )
    {
      v5[5] = *v7;
      *v7 = 0LL;
    }
    *v5 = off_18048C2F8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
