/*
 * XREFs of MiCheckSystemNxFault @ 0x1403185E8
 * Callers:
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x14022AFD0 (MiCheckSystemPageTables.c)
 *     MiRaisedIrqlFault @ 0x1402F641C (MiRaisedIrqlFault.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     MiLargePageFault @ 0x140542F94 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
