/*
 * XREFs of ?OnBringingViewToForeground@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180297610
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A988 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 */

__int64 __fastcall ViewGroup::OnBringingViewToForeground(ViewGroup *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbx

  v4 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockExclusive((PSRWLOCK)this + 21);
  if ( a2 == *((struct IApplicationView **)this + 24) )
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
      (__int64 *)this + 27,
      (__int64)a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
