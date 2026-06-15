/*
 * XREFs of ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x1400484A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1400481C8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetLatency(CSystemEffectWrapper *this, __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17), a2);
}
