/*
 * XREFs of ExpSizeHeapPool @ 0x1405BA560
 * Callers:
 *     ViPostPoolAllocation @ 0x1409D652C (ViPostPoolAllocation.c)
 * Callees:
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 *     ExpRemoveTagForBigPages @ 0x1405B3E18 (ExpRemoveTagForBigPages.c)
 */

__int64 __fastcall ExpSizeHeapPool(ULONG_PTR BugCheckParameter2)
{
  int v1; // ebx
  int v3; // eax
  __int64 v5[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v1 = 0;
  v5[0] = 0LL;
  v9 = 0;
  LODWORD(v8) = 0;
  LOWORD(v7) = 0;
  LOBYTE(v6) = 0;
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
    return 16LL * (unsigned __int8)*(_WORD *)(BugCheckParameter2 - 14);
  v3 = MiDeterminePoolType(BugCheckParameter2);
  if ( v3 != 32 )
    v1 = v3;
  ExpRemoveTagForBigPages(BugCheckParameter2, v1, 0, &v9, (int *)&v8, v5, &v7, &v6);
  return v5[0];
}
