/*
 * XREFs of ?Complete@CFlipManagerToken@@UEAAXXZ @ 0x1C0062710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::Complete(CFlipManagerToken *this)
{
  *((_DWORD *)this + 6) = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
}
