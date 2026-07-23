/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x14076DAC4
 * Callers:
 *     PiCollapseEnumRequests @ 0x14037D268 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x14076DA10 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x140617970 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
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
