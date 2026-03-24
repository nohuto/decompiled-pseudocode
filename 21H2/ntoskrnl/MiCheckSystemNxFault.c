/*
 * XREFs of MiCheckSystemNxFault @ 0x1402C77E8
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x1402A2AFC (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140311BC0 (MiCheckSystemPageTables.c)
 *     MiLargePageFault @ 0x140548AB4 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
