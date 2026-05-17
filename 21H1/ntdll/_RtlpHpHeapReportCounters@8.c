/*
 * XREFs of _RtlpHpHeapReportCounters@8 @ 0x4B3790FB
 * Callers:
 *     _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0 (_RtlpQueryExtendedInformationHeap@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpHeapReportCounters(int a1, _DWORD *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int result; // eax

  v4 = *(_DWORD *)(a1 + 128);
  v5 = *(_DWORD *)(a1 + 132);
  v6 = *(_DWORD *)(a1 + 332) + *(_DWORD *)(a1 + 460);
  a2[21] = v6;
  v7 = ((v5 - v6) << 12) - 4096;
  v4 <<= 12;
  a2[22] = v7;
  a2[19] = v4;
  v5 <<= 12;
  a2[20] = v5;
  a2[23] = *(_DWORD *)(a1 + 76) << 12;
  a2[24] = *(_DWORD *)(a1 + 80) << 12;
  a2[12] = v7;
  a2[6] = a1;
  a2[3] = 2;
  a2[4] = *(unsigned __int16 *)(a1 + 20);
  v8 = NtCurrentPeb()->NumberOfHeaps - 1;
  a2[7] = v4;
  a2[5] = v8;
  a2[8] = v5;
  result = a2[23];
  a2[15] = 0;
  a2[16] = result;
  return result;
}
