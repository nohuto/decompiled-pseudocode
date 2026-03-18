/*
 * XREFs of IopUnlockAndFreeMdl @ 0x1405570D0
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1404182AC (IopFreeCopyObjectsFromIrp.c)
 *     IopAllocateAndLockMdl @ 0x140933A9C (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x140938040 (IopDeleteIoRing.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

void __fastcall IopUnlockAndFreeMdl(PMDL Mdl)
{
  CSHORT MdlFlags; // cx
  struct _MDL *Next; // rbx

  do
  {
    MdlFlags = Mdl->MdlFlags;
    if ( (MdlFlags & 5) == 1 )
    {
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
      MdlFlags = Mdl->MdlFlags;
    }
    if ( (MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    Next = Mdl->Next;
    IoFreeMdl(Mdl);
    Mdl = Next;
  }
  while ( Next );
}
