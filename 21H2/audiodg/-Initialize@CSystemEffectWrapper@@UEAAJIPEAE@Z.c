/*
 * XREFs of ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x14001AAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1400529D8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Initialize(CSystemEffectWrapper *this, __int64 a2, unsigned __int8 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int8 *))(**((_QWORD **)this + 17) + 48LL))(
           *((_QWORD *)this + 17),
           a2,
           a3);
}
