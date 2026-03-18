/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x14032A1DC
 * Callers:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiInPageSingleKernelStack @ 0x140329D10 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  char v7; // al
  __int64 v8; // rax

  if ( !(unsigned int)MI_PFN_IS_PROTO(a1, 0LL, a3) )
  {
    v6 = (_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v5 + 16) & 6) != 0 )
    {
      v7 = *(_BYTE *)(v5 + 34);
      if ( (v7 & 8) == 0 )
      {
        v8 = MiCapturePageFileInfoInline((unsigned __int64 *)(v5 + 16), 1, 1);
        *v6 &= ~2uLL;
        v4 = v8;
        v7 = *(_BYTE *)(a1 + 34);
      }
      *(_BYTE *)(a1 + 34) = v7 | 0x10;
    }
  }
  return v4;
}
