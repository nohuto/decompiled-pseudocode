/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x1402E510C
 * Callers:
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 *     MiInPageSingleKernelStack @ 0x1402E4C40 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  char v5; // al
  __int64 v6; // rax

  if ( !(unsigned int)MI_PFN_IS_PROTO(a1) )
  {
    v4 = (_QWORD *)(v3 + 16);
    if ( (*(_BYTE *)(v3 + 16) & 6) != 0 )
    {
      v5 = *(_BYTE *)(v3 + 34);
      if ( (v5 & 8) == 0 )
      {
        v6 = MiCapturePageFileInfoInline((unsigned __int64 *)(v3 + 16), 1, 1);
        *v4 &= ~2uLL;
        v2 = v6;
        v5 = *(_BYTE *)(a1 + 34);
      }
      *(_BYTE *)(a1 + 34) = v5 | 0x10;
    }
  }
  return v2;
}
