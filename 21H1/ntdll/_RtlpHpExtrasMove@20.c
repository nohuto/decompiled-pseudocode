/*
 * XREFs of _RtlpHpExtrasMove@20 @ 0x4B378400
 * Callers:
 *     _RtlpHpReallocMove@16 @ 0x4B37981A (_RtlpHpReallocMove@16.c)
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

void *__fastcall RtlpHpExtrasMove(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  size_t _0; // [esp+0h] [ebp-4h]

  v5 = a1 + a2;
  if ( (a5 & 0x10000000) != 0 )
    v5 += 8;
  v6 = a3 + a4;
  if ( (a5 & 0x10000000) != 0 )
    v6 += 8;
  LODWORD(_0) = 8 * *(unsigned __int8 *)(((v5 + 7) & 0xFFFFFFF8) + 3) + 8;
  return memmove((void *)((v6 + 7) & 0xFFFFFFF8), (const void *)((v5 + 7) & 0xFFFFFFF8), _0);
}
