/*
 * XREFs of ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C0063780
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010C34 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
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
