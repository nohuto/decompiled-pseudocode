/*
 * XREFs of ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000A8FC
 * Callers:
 *     ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000A6C0 (-NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1400529D8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::QIInternal(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 12))(
           *((_QWORD *)this + 12),
           a2,
           a3);
}
