/*
 * XREFs of ?SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z @ 0x180131850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1801306F8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetMetadata(CSystemEffectWrapper *this, const struct AMBISONICS_PARAMS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct AMBISONICS_PARAMS *))(**((_QWORD **)this + 19) + 24LL))(
           *((_QWORD *)this + 19),
           a2);
}
