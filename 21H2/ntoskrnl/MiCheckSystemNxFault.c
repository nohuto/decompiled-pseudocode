/*
 * XREFs of MiCheckSystemNxFault @ 0x140245F28
 * Callers:
 *     MiRaisedIrqlFault @ 0x14021FF3C (MiRaisedIrqlFault.c)
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x14031C910 (MiCheckSystemPageTables.c)
 *     MiLargePageFault @ 0x140548CF4 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
}
