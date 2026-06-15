/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18002F560
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18002F200 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18002F380 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800E78E8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800E7938 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@2@@Z @ 0x1800E7AB4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 *v3; // r8
  __int64 **v4; // r11
  __int64 *v5; // r10
  __int64 i; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 *result; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  char v15; // dl
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx

  v2 = a2[2];
  v3 = a2 + 2;
  v4 = a1;
  v5 = a2;
  if ( *(_BYTE *)(v2 + 25) )
  {
    for ( i = a2[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
    {
      if ( a2 != *(__int64 **)(i + 16) )
        break;
      a2 = (__int64 *)i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(a2[2], a2, v3);
  }
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_4;
  if ( *(_BYTE *)(v2 + 25) )
  {
    v2 = *v5;
LABEL_4:
    v7 = v5[1];
    if ( !*(_BYTE *)(v2 + 25) )
      *(_QWORD *)(v2 + 8) = v7;
    if ( (__int64 *)(*v4)[1] == v5 )
    {
      (*v4)[1] = v2;
    }
    else if ( *(__int64 **)v7 == v5 )
    {
      *(_QWORD *)v7 = v2;
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v2;
    }
    v3 = *v4;
    v8 = *v4;
    if ( (__int64 *)**v4 == v5 )
    {
      if ( *(_BYTE *)(v2 + 25) )
        v9 = v7;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v2, a2, v3);
      *v3 = v9;
      v3 = *v4;
      v8 = *v4;
    }
    if ( (__int64 *)v8[2] == v5 )
    {
      if ( *(_BYTE *)(v2 + 25) )
      {
        v10 = v7;
      }
      else
      {
        v13 = *(_QWORD *)(v2 + 16);
        v10 = v2;
        if ( !*(_BYTE *)(v13 + 25) )
        {
          do
          {
            v10 = v13;
            v13 = *(_QWORD *)(v13 + 16);
          }
          while ( !*(_BYTE *)(v13 + 25) );
          v8 = v3;
        }
      }
      v8[2] = v10;
    }
    goto LABEL_16;
  }
  v2 = *(_QWORD *)(i + 16);
  if ( (__int64 *)i == v5 )
    goto LABEL_4;
  *(_QWORD *)(*v5 + 8) = i;
  *(_QWORD *)i = *v5;
  if ( i == *v3 )
  {
    v7 = i;
  }
  else
  {
    v7 = *(_QWORD *)(i + 8);
    if ( !*(_BYTE *)(v2 + 25) )
      *(_QWORD *)(v2 + 8) = v7;
    *(_QWORD *)v7 = v2;
    *(_QWORD *)(i + 16) = *v3;
    *(_QWORD *)(*v3 + 8) = i;
  }
  if ( (__int64 *)(*v4)[1] == v5 )
  {
    (*v4)[1] = i;
  }
  else
  {
    v14 = (__int64 *)v5[1];
    if ( (__int64 *)*v14 == v5 )
      *v14 = i;
    else
      v14[2] = i;
  }
  v15 = *(_BYTE *)(i + 24);
  *(_QWORD *)(i + 8) = v5[1];
  *(_BYTE *)(i + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v15;
LABEL_16:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_19;
  if ( v2 != (*v4)[1] )
  {
    do
    {
      v16 = v7;
      if ( *(_BYTE *)(v2 + 24) != 1 )
        break;
      v17 = *(_QWORD *)v7;
      if ( v2 == *(_QWORD *)v7 )
      {
        v17 = *(_QWORD *)(v7 + 16);
        if ( !*(_BYTE *)(v17 + 24) )
        {
          *(_BYTE *)(v17 + 24) = 1;
          *(_BYTE *)(v7 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4, v7);
          v17 = *(_QWORD *)(v7 + 16);
        }
        if ( *(_BYTE *)(v17 + 25) )
          goto LABEL_63;
        if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Rrotate(
              v4,
              v17,
              v3,
              v2);
            v17 = *(_QWORD *)(v7 + 16);
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4, v7);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v17 + 24) )
        {
          *(_BYTE *)(v17 + 24) = 1;
          *(_BYTE *)(v7 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Rrotate(
            v4,
            v7,
            v3,
            v2);
          v17 = *(_QWORD *)v7;
        }
        if ( *(_BYTE *)(v17 + 25) )
          goto LABEL_63;
        v18 = *(_QWORD *)(v17 + 16);
        if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
          {
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4, v17);
            v17 = *(_QWORD *)v7;
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Rrotate(
            v4,
            v7,
            v3,
            v2);
          break;
        }
      }
      *(_BYTE *)(v17 + 24) = 0;
LABEL_63:
      v2 = v7;
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v16 != (*v4)[1] );
  }
  *(_BYTE *)(v2 + 24) = 1;
LABEL_19:
  v11 = v4[1];
  result = v5;
  if ( v11 )
    v4[1] = (__int64 *)((char *)v11 - 1);
  return result;
}
