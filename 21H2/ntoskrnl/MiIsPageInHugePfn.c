/*
 * XREFs of MiIsPageInHugePfn @ 0x1402166E0
 * Callers:
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MmGetCacheAttributeEx @ 0x140585C20 (MmGetCacheAttributeEx.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1405882D0 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x14058EB84 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  return qword_140C52960 && _bittest64((const signed __int64 *)qword_140C52960, (a1 >> 18) & 0x3FFFFF);
}
