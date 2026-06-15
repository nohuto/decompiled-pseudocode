/*
 * XREFs of ?SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z @ 0x140053310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1400529D8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetRotation(CSystemEffectWrapper *this, float a2, float a3, float a4)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
}
