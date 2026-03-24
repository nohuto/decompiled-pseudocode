/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x140316AB0
 * Callers:
 *     MiAdvanceVadView @ 0x1402FE5F4 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) )
    a2 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) - 1;
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}
