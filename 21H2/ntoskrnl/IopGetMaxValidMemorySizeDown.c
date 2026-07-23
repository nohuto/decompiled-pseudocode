/*
 * XREFs of IopGetMaxValidMemorySizeDown @ 0x140504144
 * Callers:
 *     IopAddRunTimeTriageDataBlocks @ 0x140503AA4 (IopAddRunTimeTriageDataBlocks.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14050C340 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidMemorySizeDown(__int64 a1)
{
  unsigned int v1; // esi
  unsigned __int64 v2; // rdi
  int v4; // ebp
  unsigned int v5; // ebx

  v1 = 0;
  v2 = (a1 - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( !v2 )
    return 0LL;
  v4 = 0;
  v5 = 256;
  do
  {
    if ( !MmIsAddressValidEx(v2) )
      break;
    v1 += v4;
    if ( !v2 )
      break;
    v2 -= 4096LL;
    v4 = 4096;
  }
  while ( v1 < 0x100 );
  if ( v1 < 0x100 )
    return v1;
  return v5;
}
