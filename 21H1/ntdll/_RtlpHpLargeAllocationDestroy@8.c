/*
 * XREFs of _RtlpHpLargeAllocationDestroy@8 @ 0x4B37A2B4
 * Callers:
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHeapLogRangeRelease@12 @ 0x4B36D880 (_RtlpHeapLogRangeRelease@12.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

int __stdcall RtlpHpLargeAllocationDestroy(int a1, int *a2)
{
  unsigned int v2; // eax
  int v3; // esi
  int v4; // eax
  PVOID BaseAddress; // [esp+8h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-4h] BYREF

  BaseAddress = (PVOID)(*(_DWORD *)(a1 + 12) & 0xFFFF0000);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = ((v2 >> 12) + ((v2 >> 1) & 1)) << 12;
  LODWORD(RegionSize) = (1 << ((v2 >> 2) & 0x3F))
                      - (((1 << ((v2 >> 2) & 0x3F)) - 1) & (v3 + (1 << ((v2 >> 2) & 0x3F)) - 1))
                      + v3
                      - 1;
  RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, *a2, a2[1]);
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v4 = 2147353480;
  if ( *(_BYTE *)v4 )
    RtlpHeapLogRangeRelease((int)a2, (int)BaseAddress, RegionSize);
  return RtlpHpMetadataFree(*a2, a2[1]);
}
