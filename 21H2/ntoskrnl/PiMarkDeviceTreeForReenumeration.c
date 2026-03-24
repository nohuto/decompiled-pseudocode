/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x14076D904
 * Callers:
 *     PiCollapseEnumRequests @ 0x14037D718 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x14076D850 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1406B8550 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x14074561C (PipSetDevNodeFlags.c)
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
