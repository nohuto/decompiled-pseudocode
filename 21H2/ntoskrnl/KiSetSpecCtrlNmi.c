/*
 * XREFs of KiSetSpecCtrlNmi @ 0x140402D20
 * Callers:
 *     KiNmiInterruptStart @ 0x14040AF40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040ECC0 (KiMcheckAbort.c)
 * Callees:
 *     sub_140402E82 @ 0x140402E82 (sub_140402E82.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !KeGetPcr()->Prcb.BpbKernelSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_DWORD *)(v0 + 192) = v1,
        LOWORD(v1) = KeGetPcr()->Prcb.BpbKernelSpecCtrl,
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int16)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures & 2) == 0 )
      JUMPOUT(0x140402E94LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_140402E82(v2, 0LL);
  return sub_140402D74();
}
