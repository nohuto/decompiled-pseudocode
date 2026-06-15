/*
 * XREFs of ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x180130400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1801306F8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

void __fastcall CSystemEffectWrapper::AcceptInput(
        CSystemEffectWrapper *this,
        __int64 a2,
        const struct APO_CONNECTION_PROPERTY *a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 44, 2, 1) == 1 )
    (*(void (__fastcall **)(_QWORD, __int64, const struct APO_CONNECTION_PROPERTY *))(**((_QWORD **)this + 19) + 24LL))(
      *((_QWORD *)this + 19),
      a2,
      a3);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 44, 1, 2);
}
