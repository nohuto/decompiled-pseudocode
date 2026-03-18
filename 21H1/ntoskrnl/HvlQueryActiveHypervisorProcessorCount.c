/*
 * XREFs of HvlQueryActiveHypervisorProcessorCount @ 0x1404EC780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveHypervisorProcessorCount(_DWORD *a1)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  *a1 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 6);
  return 0LL;
}
