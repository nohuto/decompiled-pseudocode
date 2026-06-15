/*
 * XREFs of ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140018F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140052848 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDRelease(CSystemEffectWrapper *this)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 22);
  if ( !v2 )
  {
    v4 = *((_QWORD *)this + 12);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( this )
      (*(void (__fastcall **)(CSystemEffectWrapper *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
