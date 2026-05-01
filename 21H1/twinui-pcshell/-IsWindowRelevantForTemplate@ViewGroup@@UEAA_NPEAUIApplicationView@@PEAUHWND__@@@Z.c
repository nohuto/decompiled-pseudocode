/*
 * XREFs of ?IsWindowRelevantForTemplate@ViewGroup@@UEAA_NPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1802758E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ViewGroup::IsWindowRelevantForTemplate(ViewGroup *this, struct IUnknown *a2, HWND a3)
{
  RTL_SRWLOCK *v6; // rdi
  bool v7; // bl

  v6 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockShared((PSRWLOCK)this + 21);
  v7 = a3 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 32LL))(*((_QWORD *)this + 16))
    || (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 25));
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
