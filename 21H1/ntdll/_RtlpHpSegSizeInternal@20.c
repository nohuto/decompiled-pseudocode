/*
 * XREFs of _RtlpHpSegSizeInternal@20 @ 0x4B37D95E
 * Callers:
 *     _RtlpHpSegReportPageRange@8 @ 0x4B37D4DB (_RtlpHpSegReportPageRange@8.c)
 *     _RtlpHpSegSize@16 @ 0x4B37D931 (_RtlpHpSegSize@16.c)
 * Callees:
 *     _RtlpHpLfhSubsegmentSizeBlock@16 @ 0x4B377A83 (_RtlpHpLfhSubsegmentSizeBlock@16.c)
 *     _RtlpHpVsChunkSize@16 @ 0x4B37ED6E (_RtlpHpVsChunkSize@16.c)
 */

int __fastcall RtlpHpSegSizeInternal(int a1, int a2, unsigned int a3, int a4, int *a5)
{
  int v5; // edi
  int v6; // eax
  unsigned int v7; // esi
  int v9; // eax
  signed __int32 v10; // [esp+8h] [ebp-4h] BYREF

  v5 = a1;
  v6 = *(_DWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 4);
  v7 = (a2 & v6) + ((a2 - (a2 & v6)) >> 4 << a1);
  if ( a3 <= v7 )
  {
    if ( a5 )
    {
      v9 = *(_WORD *)(a2 + 8) & 1;
      if ( v9 )
        _InterlockedOr(&v10, 0);
      *a5 = v9;
    }
    return (*(unsigned __int8 *)(a2 + 15) << *(_BYTE *)(v5 + 4)) - *(_DWORD *)(a2 + 4);
  }
  else if ( (*(_BYTE *)(a2 + 12) & 0xC) == 8 )
  {
    return RtlpHpLfhSubsegmentSizeBlock(*(_DWORD *)(v5 + 20), v7, a3, (int)a5);
  }
  else
  {
    return RtlpHpVsChunkSize(a1, a5);
  }
}
