/*
 * XREFs of KiAbCrossThreadRelease @ 0x14038B2B0
 * Callers:
 *     KeAbCrossThreadRelease @ 0x14038B280 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 */

unsigned __int8 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  int v6; // r9d
  unsigned __int8 result; // al
  int v8; // [rsp+38h] [rbp+10h] BYREF

  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a2);
  v6 = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a2 + 26) &= ~1u;
  v8 = v6 & 0x1FFFF;
  *(_DWORD *)(a2 + 88) = v6 & 0xFFFE0000;
  KiAbThreadRemoveBoosts(a3, a1, &v8);
  *(_QWORD *)(a2 + 32) = 0LL;
  result = 1 << ((a2 - *(_QWORD *)(a3 + 800)) / 96);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 870), result);
  return result;
}
