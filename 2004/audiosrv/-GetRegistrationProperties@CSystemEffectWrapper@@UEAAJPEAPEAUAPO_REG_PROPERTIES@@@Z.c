/*
 * XREFs of ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x180130B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1801306F8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetRegistrationProperties(
        CSystemEffectWrapper *this,
        struct APO_REG_PROPERTIES **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct APO_REG_PROPERTIES **))(**((_QWORD **)this + 17) + 40LL))(
           *((_QWORD *)this + 17),
           a2);
}
