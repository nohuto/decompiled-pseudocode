/*
 * XREFs of ?RevealDesktop@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x18015CD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x18015CB20 (-AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::RevealDesktop(
        CTrustedComponentForegroundControl *this,
        enum PROCESS_UICONTEXT *a2)
{
  __int64 result; // rax

  result = CTrustedComponentForegroundControl::AllowSetForegroundWindow(this, a2);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  return result;
}
