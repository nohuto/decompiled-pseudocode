/*
 * XREFs of ??1?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800A6518
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800A37E0 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 *     ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800A3A10 (--1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::~vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        if ( *(_QWORD *)(v1 + 24) >= 8uLL )
          operator delete(*(void **)v1);
        *(_QWORD *)(v1 + 24) = 7LL;
        *(_QWORD *)(v1 + 16) = 0LL;
        *(_WORD *)v1 = 0;
        v1 += 56LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
