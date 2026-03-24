/*
 * XREFs of KiAbCrossThreadRelease @ 0x14038E850
 * Callers:
 *     KeAbCrossThreadRelease @ 0x14038E820 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x140520E78 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 */

unsigned __int8 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  int v6; // r9d
  int v7; // eax
  _DWORD *v8; // r9
  unsigned __int8 result; // al
  int v10; // [rsp+38h] [rbp+10h] BYREF

  KiAbEntryRemoveFromTree(a2);
  v6 = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a2 + 26) &= ~1u;
  v7 = v6 & 0x1FFFF;
  v8 = (_DWORD *)(v6 & 0xFFFE0000);
  v10 = v7;
  *(_DWORD *)(a2 + 88) = (_DWORD)v8;
  KiAbThreadRemoveBoosts(a3, a1, (__int64)&v10, v8);
  *(_QWORD *)(a2 + 32) = 0LL;
  result = 1 << ((a2 - *(_QWORD *)(a3 + 800)) / 96);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 870), result);
  return result;
}
