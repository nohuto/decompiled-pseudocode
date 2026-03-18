/*
 * XREFs of ?Pending@CFlipManagerToken@@UEAAXXZ @ 0x1C0075AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::Pending(CFlipManagerToken *this)
{
  *((_DWORD *)this + 6) = 1;
  (***((void (__fastcall ****)(_QWORD))this + 6))(*((_QWORD *)this + 6));
}
