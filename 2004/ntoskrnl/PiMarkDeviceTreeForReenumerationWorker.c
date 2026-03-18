/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x14076E520
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 776 )
    PipSetDevNodeFlags(a1, 8);
  return 0LL;
}
