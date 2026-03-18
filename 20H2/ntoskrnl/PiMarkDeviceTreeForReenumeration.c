/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x14073F4B0
 * Callers:
 *     PiCollapseEnumRequests @ 0x14036F1D8 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x14073F3FC (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x140720438 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x14073457C (PipSetDevNodeFlags.c)
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
