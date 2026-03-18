/*
 * XREFs of ?zzzRecalcThreadAttachment@@YGXXZ @ 0xC7C48
 * Callers:
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 * Callees:
 *     ?GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ @ 0xC7CB4 (-GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YGXPAUtagQ@@@Z @ 0xC7CC8 (-zzzRecalc2@@YGXPAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z @ 0xC7D7A (-GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z.c)
 */

void __stdcall zzzRecalcThreadAttachment()
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // ebx
  struct _LIST_ENTRY *i; // esi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // edi
  int v3; // ecx
  int v4; // eax
  struct _LIST_ENTRY *v5; // [esp+0h] [ebp-Ch]

  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(v5);
    if ( RecalcPtiFromListEntry && !*((_DWORD *)RecalcPtiFromListEntry + 90) )
    {
      v3 = *((_DWORD *)RecalcPtiFromListEntry + 59);
      if ( *(_DWORD *)(v3 + 288) > 1u )
      {
        v4 = AllocQueue(0, 0);
        *((_DWORD *)RecalcPtiFromListEntry + 90) = v4;
        if ( !v4 )
          return;
        ++*(_DWORD *)(v4 + 288);
      }
      else
      {
        *((_DWORD *)RecalcPtiFromListEntry + 90) = v3;
      }
      zzzRecalc2((struct tagQ *)v5);
    }
  }
}
