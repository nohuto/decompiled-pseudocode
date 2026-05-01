/*
 * XREFs of ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x180060FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801304FC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

AgileRegistrationList::AgileCallbackArray *__fastcall AgileRegistrationList::AgileCallbackArray::`vector deleting destructor'(
        AgileRegistrationList::AgileCallbackArray *this,
        char a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  const struct std::nothrow_t *v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 7);
    v6 = (_QWORD *)*((_QWORD *)this + 6);
    if ( v4 != v5 )
    {
      do
      {
        if ( *v6 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
        ++v6;
      }
      while ( v6 != v5 );
    }
    v7 = (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    v10 = (unsigned __int64)v7;
    v11 = v4;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v11, &v10);
      v7 = (const struct std::nothrow_t *)v10;
      v4 = v11;
    }
    operator delete(v4, v7);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 11) = -1073741823;
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
