/*
 * XREFs of ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x1C0063720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::Discard(CFlipManagerToken *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 6) = 6;
}
