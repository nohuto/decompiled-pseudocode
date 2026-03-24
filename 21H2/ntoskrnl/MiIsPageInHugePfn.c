/*
 * XREFs of MiIsPageInHugePfn @ 0x1403F391C
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x14052F0F8 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  return qword_140C4E668 && _bittest64((const signed __int64 *)qword_140C4E668, (a1 >> 18) & 0x3FFFF);
}
