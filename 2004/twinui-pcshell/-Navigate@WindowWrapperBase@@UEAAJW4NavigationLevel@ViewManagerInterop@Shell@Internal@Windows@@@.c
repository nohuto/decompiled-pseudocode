/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800716A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // r14d
  unsigned int v3; // esi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // rdi
  int v7; // ebx
  __int128 v9; // [rsp+38h] [rbp-40h]
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  int v11; // [rsp+88h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+90h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp+20h] BYREF

  v11 = a2;
  *(_QWORD *)&v9 = &v11;
  *((_QWORD *)&v9 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v3 = 0;
  else
    v3 = 4;
  v10 = 0;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v5 + 1) = v9;
    *(_QWORD *)v5 = off_180490250;
    *((_QWORD *)v5 + 4) = &v10;
    v6 = v5;
  }
  v7 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return v10;
  return (unsigned int)v7;
}
