/*
 * XREFs of MmForceSectionClosedEx @ 0x14052B2B0
 * Callers:
 *     <none>
 * Callees:
 *     MiForceSectionClosed @ 0x140237400 (MiForceSectionClosed.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

bool __fastcall MmForceSectionClosedEx(_QWORD *a1, unsigned int a2)
{
  char v2; // bl
  int v4; // edi
  int v5; // eax

  v2 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 )
    KeBugCheckEx(0x1Au, 0x43000uLL, a2, 0LL, 0LL);
  if ( (a2 & 1) != 0 )
    v4 = MiForceSectionClosed(a1, a2 & 0xFD);
  else
    v4 = 1;
  if ( (v2 & 2) != 0 )
    v5 = MiForceSectionClosed(a1, v2 & 0xFE);
  else
    v5 = 1;
  return v4 != 2 && v5 != 2;
}
