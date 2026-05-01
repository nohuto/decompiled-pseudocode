/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a59ec4bf685348192e83918abe4353ce___ @ 0x18005DF7C
 * Callers:
 *     ?UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@6@@Z @ 0x18005DEF8 (-UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a59ec4bf685348192e83918abe4353ce___(
        unsigned int a1,
        unsigned int a2,
        __int128 *a3)
{
  unsigned int v5; // esi
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _DWORD *v8; // rbx
  __int128 v9; // xmm0
  int v10; // ebx
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v15, (APTTYPEQUALIFIER *)&v12) < 0 || !v15 || v15 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v14 = 0;
  v13 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9 = *a3;
    v7 = v8;
    *(_QWORD *)v8 = off_18048F498;
    *((_QWORD *)v8 + 4) = &v14;
    *((_OWORD *)v8 + 1) = v9;
  }
  v10 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v10 >= 0 )
    return v14;
  return (unsigned int)v10;
}
