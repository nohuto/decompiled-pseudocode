/*
 * XREFs of ?RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z @ 0x18014D820
 * Callers:
 *     <none>
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180045B50 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@1@V21@@Z @ 0x1800AE390 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBW4GameInputGamepadButt.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18014DFCC (-clear@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 */

void __fastcall ContextualProcessorBuffer::RemoveContactFromBuffer(ContextualProcessorBuffer *this, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *i; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *j; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-40h]
  _QWORD *v15; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v18 = a2;
  v2 = *((_QWORD *)this + 5);
  v3 = *((_QWORD *)this + 4);
  if ( v3 != v2 )
  {
    v4 = (_QWORD *)(v3 + 8);
    do
    {
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
        v4,
        &v13,
        (const unsigned __int8 *)&v18);
      v5 = v13;
      for ( i = v13; i != v14; i = (_QWORD *)*i )
        ;
      v7 = (_QWORD *)v4[1];
      if ( v13 == (_QWORD *)*v7 && v14 == v7 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(v4);
      }
      else
      {
        while ( v5 != v14 )
        {
          v10 = (__int64)v5;
          v5 = (_QWORD *)*v5;
          std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<enum GameInputGamepadButtons const,unsigned short>>>>,void>(
            v4,
            &v17,
            v10);
        }
      }
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
        v4 + 9,
        &v15,
        (const unsigned __int8 *)&v18);
      v8 = v15;
      for ( j = v15; j != v16; j = (_QWORD *)*j )
        ;
      v11 = (_QWORD *)v4[10];
      if ( v15 == (_QWORD *)*v11 && v16 == v11 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(v4 + 9);
      }
      else
      {
        while ( v8 != v16 )
        {
          v12 = (__int64)v8;
          v8 = (_QWORD *)*v8;
          std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<enum GameInputGamepadButtons const,unsigned short>>>>,void>(
            v4 + 9,
            &v19,
            v12);
        }
      }
      v3 += 160LL;
      v4 += 20;
    }
    while ( v3 != v2 );
  }
}
