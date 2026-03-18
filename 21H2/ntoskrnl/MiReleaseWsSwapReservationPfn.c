/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x14029A6AC
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14029A2A0 (MiInPageSingleKernelStack.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 *v3; // rdi
  char v4; // cl

  result = 0LL;
  if ( *(__int64 *)(a1 + 40) >= 0 )
  {
    v3 = (unsigned __int64 *)(a1 + 16);
    if ( (*(_BYTE *)(a1 + 16) & 6) != 0 )
    {
      v4 = *(_BYTE *)(a1 + 34);
      if ( (v4 & 8) == 0 )
      {
        result = MiCapturePageFileInfoInline(v3, 1, 1);
        *v3 &= ~2uLL;
        v4 = *(_BYTE *)(a1 + 34);
      }
      *(_BYTE *)(a1 + 34) = v4 | 0x10;
    }
  }
  return result;
}
