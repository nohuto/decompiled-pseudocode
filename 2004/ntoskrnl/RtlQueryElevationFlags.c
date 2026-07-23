/*
 * XREFs of RtlQueryElevationFlags @ 0x1406F78D0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1406816E0 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryElevationFlags(PRTL_ELEVATION_FLAGS Flags)
{
  ULONG v1; // edx

  v1 = 0;
  Flags->Flags = 0;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
  {
    v1 = 1;
    Flags->Flags = 1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
  {
    v1 |= 2u;
    Flags->Flags = v1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
    Flags->Flags = v1 | 4;
  return 0;
}
