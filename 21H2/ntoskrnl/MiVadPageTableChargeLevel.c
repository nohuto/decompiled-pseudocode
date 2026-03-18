/*
 * XREFs of MiVadPageTableChargeLevel @ 0x14030DA10
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1407B92D0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 * Callees:
 *     MiGetAweVadPageSize @ 0x14097D244 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiVadPageTableChargeLevel(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned __int64 AweVadPageSize; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x800000) == 0 && (v1 & 0x180000) < 0x100000 )
      goto LABEL_4;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
    {
LABEL_4:
      if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
      {
        AweVadPageSize = MiGetAweVadPageSize(a1);
        if ( AweVadPageSize == 512 )
          return 1LL;
        if ( AweVadPageSize >= 0x40000 )
          return 2LL;
      }
      return 0LL;
    }
    v1 = *(_DWORD *)(a1 + 48);
  }
  v3 = MiVadPageIndices[(v1 >> 19) & 3];
  if ( v3 > 1 )
    return 0LL;
  result = 1LL;
  if ( !v3 )
    return 2LL;
  return result;
}
