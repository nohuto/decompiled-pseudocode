/*
 * XREFs of ?CaptureCOLORADJUSTMENT@@YGXPAPAUtagCOLORADJUSTMENT@@PAU1@@Z @ 0x21630B
 * Callers:
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureCOLORADJUSTMENT(const void **a1, void *a2)
{
  const void *v2; // esi

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned int)v2 >= _MmUserProbeAddress )
      v2 = (const void *)_MmUserProbeAddress;
    qmemcpy(a2, v2, 0x18u);
    *a1 = a2;
  }
}
