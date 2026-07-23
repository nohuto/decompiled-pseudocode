/*
 * XREFs of IoGetPagingIoPriority @ 0x1402296D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

IO_PAGING_PRIORITY __stdcall IoGetPagingIoPriority(PIRP Irp)
{
  ULONG Flags; // eax
  int v2; // eax
  bool v3; // zf
  IO_PAGING_PRIORITY result; // eax

  Flags = Irp->Flags;
  if ( (Flags & 2) == 0 )
    return 0;
  v2 = (Flags >> 17) & 7;
  if ( !v2 )
    return 1;
  v3 = v2 == 5;
  result = IoPagingPriorityHigh;
  if ( !v3 )
    return 1;
  return result;
}
