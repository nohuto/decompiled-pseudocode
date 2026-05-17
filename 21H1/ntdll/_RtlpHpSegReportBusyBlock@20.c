/*
 * XREFs of _RtlpHpSegReportBusyBlock@20 @ 0x4B37D486
 * Callers:
 *     _RtlpHpSegReportPageRange@8 @ 0x4B37D4DB (_RtlpHpSegReportPageRange@8.c)
 *     _RtlpHpSegWalk@12 @ 0x4B37DAD6 (_RtlpHpSegWalk@12.c)
 * Callees:
 *     _RtlpHpExtrasReportBusyBlock@8 @ 0x4B37844B (_RtlpHpExtrasReportBusyBlock@8.c)
 */

__int16 __fastcall RtlpHpSegReportBusyBlock(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // edx
  __int16 result; // ax

  v6 = (*(_DWORD *)a2 & *(_DWORD *)a1)
     + 16 * ((unsigned int)(*(_DWORD *)a2 - (*(_DWORD *)a2 & *(_DWORD *)a1)) >> *(_BYTE *)(a1 + 4));
  *(_WORD *)(a2 + 10) = 1;
  *(_DWORD *)(a2 + 4) = a3;
  result = a4;
  *(_BYTE *)(a2 + 9) = (int)(v6 - (v6 & *(_DWORD *)a1)) >> 4;
  *(_BYTE *)(a2 + 8) = a4;
  *(_DWORD *)(a2 + 20) = a4;
  if ( a5 )
    return RtlpHpExtrasReportBusyBlock(*(_DWORD *)(a1 + 36), a2);
  return result;
}
