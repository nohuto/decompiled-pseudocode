/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x140810960
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 778 )
    PipSetDevNodeFlags(a1, 8);
  return 0LL;
}
