/*
 * XREFs of KiSetSpecCtrlNmi @ 0x1404006F0
 * Callers:
 *     KiNmiInterruptStart @ 0x140408700 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040C300 (KiMcheckAbort.c)
 * Callees:
 *     sub_14040084E @ 0x14040084E (sub_14040084E.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !KeGetPcr()->Prcb.BpbKernelSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_BYTE *)(v0 - 86) = v1,
        LOBYTE(v1) = KeGetPcr()->Prcb.BpbKernelSpecCtrl,
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int8)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures & 2) == 0 )
      JUMPOUT(0x140400860LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_14040084E(v2, 0LL);
  return sub_140400740();
}
