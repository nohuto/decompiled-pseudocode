/*
 * XREFs of ?ndisFreeMdlInternal@@YAXPEAU_MDL@@@Z @ 0x1C00AE240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMdlInternal(PMDL Mdl)
{
  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  ExFreePool(Mdl);
}
