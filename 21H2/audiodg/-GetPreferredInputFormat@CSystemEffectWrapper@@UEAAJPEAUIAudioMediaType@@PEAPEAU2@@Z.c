/*
 * XREFs of ?GetPreferredInputFormat@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x140052D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x1400529D8 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetPreferredInputFormat(
        CSystemEffectWrapper *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, struct IAudioMediaType **))(**((_QWORD **)this + 15)
                                                                                                + 24LL))(
           *((_QWORD *)this + 15),
           a2,
           a3);
}
