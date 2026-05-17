/*
 * XREFs of _RtlpHpSegSegmentComputeCommit@8 @ 0x4B37D75D
 * Callers:
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpSegSegmentComputeCommit(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // edi
  int v5; // esi

  v2 = 16 * *(unsigned __int8 *)(a1 + 6);
  v3 = v2 + a2;
  v4 = v3 - v2 + 4096;
  v5 = 1;
  while ( v3 < v4 )
  {
    v5 += (unsigned __int16)~(*(_DWORD *)(v3 + 12) >> 8);
    v3 += 16 * *(unsigned __int8 *)(v3 + 15);
  }
  return v5;
}
