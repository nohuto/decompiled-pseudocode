/*
 * XREFs of _RtlpHpSegReportPageRange@8 @ 0x4B37D4DB
 * Callers:
 *     _RtlpHpSegWalk@12 @ 0x4B37DAD6 (_RtlpHpSegWalk@12.c)
 * Callees:
 *     _RtlpHpSegReportBusyBlock@20 @ 0x4B37D486 (_RtlpHpSegReportBusyBlock@20.c)
 *     _RtlpHpSegSizeInternal@20 @ 0x4B37D95E (_RtlpHpSegSizeInternal@20.c)
 */

__int16 __fastcall RtlpHpSegReportPageRange(int a1, _DWORD *a2)
{
  int v2; // ebx
  int v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a1;
  v4 = *a2 & *(_DWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 4);
  v5 = v4 + 16 * ((unsigned int)(*a2 - v4) >> a1);
  v6 = RtlpHpSegSizeInternal(*a2, a1, &v8);
  return RtlpHpSegReportBusyBlock(v2, (int)a2, v6, *(_DWORD *)(v5 + 4), v8);
}
