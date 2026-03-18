/*
 * XREFs of MiLogRelocationFaults @ 0x1406EECDC
 * Callers:
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiLogRelocationRva @ 0x1406EED64 (MiLogRelocationRva.c)
 */

void __fastcall MiLogRelocationFaults(__int64 a1, unsigned int *a2, __int64 a3)
{
  ULONG_PTR v6; // rbp
  __int64 **i; // rbx
  __int64 v8; // rcx

  v6 = MiReferenceControlAreaFile(a1);
  MiLogRelocationRva(*a2, a2[1], v6, a1);
  for ( i = *(__int64 ***)(a3 + 16); i; i = (__int64 **)*i )
  {
    v8 = *((unsigned int *)i + 2);
    if ( (v8 & 0xFFF) != 0 )
      MiLogRelocationRva(v8, 0x2000LL, v6, a1);
  }
  MiDereferenceControlAreaFile(a1, v6);
}
