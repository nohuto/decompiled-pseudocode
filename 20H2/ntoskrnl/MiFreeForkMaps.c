/*
 * XREFs of MiFreeForkMaps @ 0x140558E64
 * Callers:
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 * Callees:
 *     MiUnmapSinglePage @ 0x14036AE14 (MiUnmapSinglePage.c)
 *     MiFinishLastForkPageTable @ 0x140558BD0 (MiFinishLastForkPageTable.c)
 */

char __fastcall MiFreeForkMaps(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v5; // rcx
  char result; // al
  __int64 *v7; // rbx
  __int64 v8; // rdi

  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    result = MiUnmapSinglePage(v5);
  v7 = (__int64 *)(a1 + 8);
  v8 = 3LL;
  do
  {
    if ( *v7 != -1 )
      result = MiFinishLastForkPageTable(v5, *v7, a3, a4);
    ++v7;
    --v8;
  }
  while ( v8 );
  return result;
}
