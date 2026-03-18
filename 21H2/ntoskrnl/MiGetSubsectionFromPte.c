/*
 * XREFs of MiGetSubsectionFromPte @ 0x1405AE11C
 * Callers:
 *     MiCreateFileOnlyImageFixupList @ 0x14097023C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140C50780 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C50780;
  return a1 >> 16;
}
