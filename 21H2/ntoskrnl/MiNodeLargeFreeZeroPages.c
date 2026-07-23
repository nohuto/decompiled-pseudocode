/*
 * XREFs of MiNodeLargeFreeZeroPages @ 0x140323B90
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140260F80 (MiSignalLargePageRebuild.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWakePageZeroing @ 0x140309E78 (MiWakePageZeroing.c)
 *     MiNodeFreeZeroPages @ 0x1403239F4 (MiNodeFreeZeroPages.c)
 *     MiCheckZeroFreeRebalance @ 0x140323AA0 (MiCheckZeroFreeRebalance.c)
 *     MiRebuildLargePages @ 0x14038D810 (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 *v5; // rsi
  __int64 v7; // r11
  _QWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8

  v3 = 0LL;
  v4 = a3;
  v5 = MiLargePageSizes;
  v7 = 0LL;
  v8 = a1;
  v9 = a3;
  v10 = 3LL;
  do
  {
    if ( a2 == 4 )
    {
      v9 = v4;
      if ( (_DWORD)v4 == 2 )
        v11 = *v8 + v8[1];
      else
        v11 = a1[v7 + v4];
    }
    else
    {
      v12 = v7 + 4 * (a2 + 4 * v9);
      v11 = a1[v12 + 6]
          + a1[v12 + 7]
          + a1[v12 + 9]
          + a1[v12 + 38]
          + a1[v12 + 39]
          + a1[v12 + 41]
          + a1[v12 + 8]
          + a1[v12 + 40];
    }
    v13 = v11 * *v5++;
    v8 += 134;
    v3 += v13;
    v7 += 134LL;
    --v10;
  }
  while ( v10 );
  return v3;
}
