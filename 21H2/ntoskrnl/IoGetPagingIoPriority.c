/*
 * XREFs of IoGetPagingIoPriority @ 0x140231800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

IO_PAGING_PRIORITY __stdcall IoGetPagingIoPriority(PIRP Irp)
{
  ULONG Flags; // eax

  Flags = Irp->Flags;
  if ( (Flags & 2) == 0 )
    return 0;
  if ( ((Flags >> 17) & 7) == 5 )
    return 2;
  return 1;
}
