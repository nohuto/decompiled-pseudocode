/*
 * XREFs of KiAbCrossThreadRelease @ 0x14039CE58
 * Callers:
 *     KeAbCrossThreadRelease @ 0x14039CE24 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x1405757C0 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 */

unsigned __int8 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  int v6; // r8d
  unsigned __int8 result; // al

  KiAbEntryRemoveFromTree(a2);
  v6 = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 88) = 0;
  *(_BYTE *)(a2 + 18) = 0;
  if ( v6 )
    KiAbThreadRemoveBoostsSlow(a3, a1, v6);
  *(_QWORD *)a2 = 0LL;
  result = 1 << *(_BYTE *)(a2 + 16);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 870), result);
  return result;
}
