/*
 * XREFs of IopUnlockAndFreeMdl @ 0x1403F1110
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x1403F1580 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F1A64 (IopFreeCopyObjectsFromIrp.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
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
