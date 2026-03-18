/*
 * XREFs of ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C00638B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::MarkInvalid(CFlipManagerToken *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CFlipManagerToken *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CFlipManagerToken *)((char *)this + 40));
    *((_BYTE *)this + 113) = 0;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    CPushLock::ReleaseLock((CFlipManagerToken *)((char *)this + 40));
  }
}
