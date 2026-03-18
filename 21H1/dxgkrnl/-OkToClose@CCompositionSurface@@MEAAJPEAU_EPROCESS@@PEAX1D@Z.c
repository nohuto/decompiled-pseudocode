/*
 * XREFs of ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0001BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::OkToClose(CCompositionSurface *this, struct _EPROCESS *a2, void *a3, void *a4)
{
  CPushLock *v6; // rsi
  char *v7; // rdi
  char *i; // rbx

  if ( a2 == *((struct _EPROCESS **)this + 5)
    && _InterlockedExchangeAdd((volatile signed __int32 *)this + 9, 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    if ( (unsigned __int8)PsGetProcessExitProcessCalled(a2) )
    {
      v6 = (CCompositionSurface *)((char *)this + 8);
      CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 8));
      if ( *((_DWORD *)this + 20) )
      {
        v7 = (char *)this + 64;
        for ( i = (char *)*((_QWORD *)this + 8); i != v7; i = *(char **)i )
          (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 3) + 48LL))((_QWORD *)i - 3);
      }
      CPushLock::ReleaseLock(v6);
    }
  }
  return 0LL;
}
