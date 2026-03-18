/*
 * XREFs of MiIsPageInHugePfn @ 0x1403F20D4
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F21AC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F2560 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x14052D5F8 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  return qword_140C4E4E8 && _bittest64((const signed __int64 *)qword_140C4E4E8, (a1 >> 18) & 0x3FFFF);
}
