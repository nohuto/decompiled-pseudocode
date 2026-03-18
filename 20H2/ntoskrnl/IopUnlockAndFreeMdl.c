/*
 * XREFs of IopUnlockAndFreeMdl @ 0x1403F04DC
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x1403F0900 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F0DCC (IopFreeCopyObjectsFromIrp.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
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
