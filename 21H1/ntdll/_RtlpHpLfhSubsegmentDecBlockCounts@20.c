/*
 * XREFs of _RtlpHpLfhSubsegmentDecBlockCounts@20 @ 0x4B3770E8
 * Callers:
 *     _RtlpHpLfhSubsegmentCommitBlock@12 @ 0x4B376E1B (_RtlpHpLfhSubsegmentCommitBlock@12.c)
 *     _RtlpHpLfhSubsegmentDecommitPages@20 @ 0x4B37719A (_RtlpHpLfhSubsegmentDecommitPages@20.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpLfhSubsegmentDecBlockCounts(int a1, int a2, unsigned int a3, int a4, int a5)
{
  char v5; // cl
  volatile signed __int16 *v6; // ebx
  int v7; // edx
  volatile signed __int16 *v8; // edi
  int v9; // esi
  int v10; // ecx
  signed __int16 v11; // ax

  v5 = *(_BYTE *)(a2 + 28);
  v6 = (volatile signed __int16 *)(2 * (a3 >> v5) + a2 + *(unsigned __int16 *)(a2 + 30));
  v7 = 0;
  v8 = &v6[((a3 - 1 + a4) >> v5) - (a3 >> v5) + 1];
  v9 = -1;
  if ( v6 < v8 )
  {
    v10 = 2 * (a3 >> v5);
    do
    {
      v11 = _InterlockedDecrement16(v6);
      if ( v11 )
      {
        if ( v11 == -1 )
          --v7;
      }
      else
      {
        ++v7;
        if ( v9 == -1 )
          v9 = v10 >> 1;
      }
      ++v6;
      v10 += 2;
    }
    while ( v6 < v8 );
    if ( v7 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 30) + 12),
        (v7 << *(_BYTE *)(a2 + 28)) / 4096);
  }
  return v9;
}
