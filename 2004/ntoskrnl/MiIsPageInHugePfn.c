/*
 * XREFs of MiIsPageInHugePfn @ 0x1403EDC6C
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403EDD44 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403EE0F8 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x140529C28 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  return qword_140C4E468 && _bittest64((const signed __int64 *)qword_140C4E468, (a1 >> 18) & 0x3FFFF);
}
