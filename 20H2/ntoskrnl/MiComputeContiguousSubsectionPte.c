/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x14022E6D0
 * Callers:
 *     MiAdvanceVadView @ 0x140250914 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) )
    a2 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) - 1;
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}
