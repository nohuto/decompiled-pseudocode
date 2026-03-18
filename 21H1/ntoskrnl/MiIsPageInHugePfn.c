/*
 * XREFs of MiIsPageInHugePfn @ 0x1403ECBAC
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403ECC84 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403ED038 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x1405295D8 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  return qword_140C4E5A8 && _bittest64((const signed __int64 *)qword_140C4E5A8, (a1 >> 18) & 0x3FFFF);
}
