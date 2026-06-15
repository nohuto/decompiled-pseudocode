/*
 * XREFs of ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x140052FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140052848 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Reset(CSystemEffectWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17));
}
