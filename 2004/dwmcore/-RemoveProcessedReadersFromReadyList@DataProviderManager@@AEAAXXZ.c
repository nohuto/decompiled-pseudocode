/*
 * XREFs of ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1800D7C48
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800D7B4C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801664FC (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D637C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x180166B48 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 */

void __fastcall DataProviderManager::RemoveProcessedReadersFromReadyList(DataProviderManager *this)
{
  char *v1; // rdx
  _QWORD *v2; // rsi
  char *i; // rdi
  size_t v5; // rbx
  __int64 v6; // rax
  char *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx

  v1 = (char *)*((_QWORD *)this + 14);
  v2 = (_QWORD *)((char *)this + 104);
  for ( i = (char *)*((_QWORD *)this + 13); i != v1 && (*(_BYTE *)(*(_QWORD *)i + 72LL) & 2) != 0; i += 8 )
    ;
  if ( i != v1 )
  {
    v6 = 0LL;
    v7 = i + 8;
    v8 = (unsigned __int64)(v1 - (i + 8) + 7) >> 3;
    if ( i + 8 > v1 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v7 + 72LL) & 2) != 0 )
        {
          *(_QWORD *)i = *(_QWORD *)v7;
          i += 8;
        }
        v7 += 8;
        ++v6;
      }
      while ( v6 != v8 );
    }
  }
  v5 = *((_QWORD *)this + 14) - (_QWORD)v1;
  memmove_0(i, v1, v5);
  *((_QWORD *)this + 14) = &i[v5];
  if ( (char *)v2[2] != &i[v5] )
  {
    v9 = v2[1];
    if ( *v2 == v9 )
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v2);
    else
      std::vector<CDataSourceReader *>::_Reallocate_exactly(v2, (v9 - *v2) >> 3);
  }
}
