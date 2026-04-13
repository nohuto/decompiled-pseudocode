/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003FEB4
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003F364 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180041488 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>::find(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _WORD *v7; // r10
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  bool i; // zf
  int v11; // edx
  int v12; // eax
  _QWORD *v13; // rax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  bool j; // zf
  int v18; // ecx
  int v19; // eax
  __int64 *result; // rax

  v4 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  v5 = *(_QWORD *)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 8);
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (_QWORD *)(v5 + 32);
    if ( (unsigned __int64)a3[3] < 8 )
      v7 = a3;
    else
      v7 = (_WORD *)*a3;
    v8 = *(_QWORD *)(v5 + 48);
    if ( *(_QWORD *)(v5 + 56) >= 8uLL )
      v6 = (_QWORD *)*v6;
    v9 = a3[2];
    if ( v8 < v9 )
      v9 = *(_QWORD *)(v5 + 48);
    for ( i = v9 == 0; ; i = v9 == 0 )
    {
      if ( i )
      {
        v11 = 0;
        goto LABEL_14;
      }
      if ( *(_WORD *)v6 != *v7 )
        break;
      v6 = (_QWORD *)((char *)v6 + 2);
      ++v7;
      --v9;
    }
    v11 = *(_WORD *)v6 < *v7 ? -1 : 1;
LABEL_14:
    v12 = v8 != a3[2];
    if ( v8 < a3[2] )
      v12 = -1;
    if ( v11 )
      v12 = v11;
    if ( v12 >= 0 )
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  if ( v4 == CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap )
    goto LABEL_40;
  v13 = (_QWORD *)(v4 + 32);
  v14 = *(_QWORD *)(v4 + 48);
  if ( *(_QWORD *)(v4 + 56) >= 8uLL )
    v13 = (_QWORD *)*v13;
  v15 = a3[2];
  if ( (unsigned __int64)a3[3] >= 8 )
    a3 = (__int64 *)*a3;
  v16 = *(_QWORD *)(v4 + 48);
  if ( v15 < v14 )
    v16 = v15;
  for ( j = v16 == 0; ; j = --v16 == 0 )
  {
    if ( j )
    {
      v18 = 0;
      goto LABEL_35;
    }
    if ( *(_WORD *)a3 != *(_WORD *)v13 )
      break;
    a3 = (__int64 *)((char *)a3 + 2);
    v13 = (_QWORD *)((char *)v13 + 2);
  }
  v18 = *(_WORD *)a3 < *(_WORD *)v13 ? -1 : 1;
LABEL_35:
  v19 = v15 != v14;
  if ( v15 < v14 )
    v19 = -1;
  if ( v18 )
    v19 = v18;
  if ( v19 < 0 )
LABEL_40:
    v4 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  result = a2;
  *a2 = v4;
  return result;
}
