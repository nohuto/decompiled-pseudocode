/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140731E08
 * Callers:
 *     PiCollapseEnumRequests @ 0x14037BEAC (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140731D54 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1406E3860 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x14072ACAC (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 776 )
    result = PipSetDevNodeFlags(a1, 8);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, (__int64)PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
