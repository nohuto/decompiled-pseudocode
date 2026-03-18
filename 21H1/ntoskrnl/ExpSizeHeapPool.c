/*
 * XREFs of ExpSizeHeapPool @ 0x1405B4678
 * Callers:
 *     ViPostPoolAllocation @ 0x1409D24BC (ViPostPoolAllocation.c)
 * Callees:
 *     MiDeterminePoolType @ 0x1402AC3D0 (MiDeterminePoolType.c)
 *     ExpRemoveTagForBigPages @ 0x1405ADF68 (ExpRemoveTagForBigPages.c)
 */

__int64 __fastcall ExpSizeHeapPool(unsigned __int64 a1)
{
  int v1; // eax
  int v2; // edx
  ULONG_PTR v3; // r10
  __int64 v5[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v5[0] = 0LL;
  v9 = 0;
  LODWORD(v8) = 0;
  LOWORD(v7) = 0;
  LOBYTE(v6) = 0;
  if ( (a1 & 0xFFF) != 0 )
    return 16LL * (unsigned __int8)*(_WORD *)(a1 - 14);
  v1 = MiDeterminePoolType(a1);
  if ( v1 != 32 )
    v2 = v1;
  ExpRemoveTagForBigPages(v3, v2, 0, &v9, (int *)&v8, v5, &v7, &v6);
  return v5[0];
}
