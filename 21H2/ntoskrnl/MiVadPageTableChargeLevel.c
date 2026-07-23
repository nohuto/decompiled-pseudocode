/*
 * XREFs of MiVadPageTableChargeLevel @ 0x1402C0320
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiGetAweVadPageSize @ 0x1408D6208 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiVadPageTableChargeLevel(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 )
  {
    if ( (v1 & 0x400000) == 0 && (v1 & 0xC0000) < 0x80000 )
    {
LABEL_4:
      if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
        return MiGetAweVadPageSize();
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
      goto LABEL_4;
    v1 = *(_DWORD *)(a1 + 48);
  }
  v3 = MiVadPageIndices[(v1 >> 18) & 3];
  if ( v3 > 1 )
    return 0LL;
  result = 1LL;
  if ( !v3 )
    return 2LL;
  return result;
}
