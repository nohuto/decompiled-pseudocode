/*
 * XREFs of ?Discard@CFlipTokenOperation@@UEAAXXZ @ 0x1C006B0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipTokenOperation::Discard(CFlipTokenOperation *this)
{
  if ( this )
    (*(void (__fastcall **)(CFlipTokenOperation *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
