/*
 * XREFs of xxxUserYield @ 0x1C01EAF8C
 * Callers:
 *     NtUserYieldTask @ 0x1C0205420 (NtUserYieldTask.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxUserYield(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 440); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(a1 + 440) )
    xxxReceiveMessage(a1);
  return 1LL;
}
