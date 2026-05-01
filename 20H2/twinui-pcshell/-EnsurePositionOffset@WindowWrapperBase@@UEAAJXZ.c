/*
 * XREFs of ?EnsurePositionOffset@WindowWrapperBase@@UEAAJXZ @ 0x1800644F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::EnsurePositionOffset(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // r15d
  unsigned int v3; // r14d
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v10; // [rsp+70h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+78h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+80h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 36) + 200LL))(*((_QWORD *)this + 36), &SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v3 = 0;
  else
    v3 = 4;
  LODWORD(v10) = 0;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5[2] = this;
    *v5 = off_18048DF70;
    v5[3] = &v10;
    v6 = v5;
  }
  v7 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  if ( v7 >= 0 )
    v7 = (int)v10;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      (int)v6);
    __debugbreak();
    JUMPOUT(0x180128BBALL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
