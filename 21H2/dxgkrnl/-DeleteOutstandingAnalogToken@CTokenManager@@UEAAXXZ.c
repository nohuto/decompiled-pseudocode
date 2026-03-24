/*
 * XREFs of ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C001B2F0
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C0012C1C (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteOutstandingAnalogToken(CTokenManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 37);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 37) = 0LL;
  }
}
