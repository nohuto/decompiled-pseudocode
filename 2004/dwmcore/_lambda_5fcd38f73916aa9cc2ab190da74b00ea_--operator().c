/*
 * XREFs of _lambda_5fcd38f73916aa9cc2ab190da74b00ea_::operator() @ 0x180095AE8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5fcd38f73916aa9cc2ab190da74b00ea__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800E50B0 (std--_Func_impl_no_alloc__lambda_5fcd38f73916aa9cc2ab190da74b00ea__void_void___unsi_ea_1800E50B0.c)
 * Callees:
 *     ??$_Insert_at@AEB_KU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@1@_NPEAU?$_Tree_node@_KPEAX@1@AEB_KU_Not_a_node_tag@1@@Z @ 0x1800498D8 (--$_Insert_at@AEB_KU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator.c)
 */

__int64 lambda_5fcd38f73916aa9cc2ab190da74b00ea_::operator()(__int64 a1, __int64 a2, int a3, ...)
{
  unsigned __int64 v3; // r10
  char v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // r8
  __int64 *v10; // r9
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v14; // rcx
  __int64 i; // rcx
  __int64 v16; // rcx
  __int64 j; // rcx
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp+38h] BYREF
  va_list va; // [rsp+68h] [rbp+38h]
  __int64 v22; // [rsp+70h] [rbp+40h]
  __int64 v23; // [rsp+78h] [rbp+48h]
  __int64 v24; // [rsp+80h] [rbp+50h]
  va_list va1; // [rsp+88h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v19 = a2;
  v18 = a1;
  v3 = v20;
  if ( (v23 & 0x1A) != 0 )
  {
    v5 = 1;
    v6 = qword_1803453A8;
    v7 = *(_QWORD *)(qword_1803453A8 + 8);
    while ( !*(_BYTE *)(v7 + 25) )
    {
      v6 = v7;
      if ( v20 < *(_QWORD *)(v7 + 32) )
      {
        v7 = *(_QWORD *)v7;
        v5 = 1;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
        v5 = 0;
      }
    }
    v8 = v6;
    if ( v5 )
    {
      if ( v6 == *(_QWORD *)qword_1803453A8 )
      {
        v5 = 1;
LABEL_6:
        std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
          &qword_1803453A8,
          &v19,
          v5,
          (__int64 *)v6,
          (unsigned __int64 *)va);
        v3 = v20;
        goto LABEL_7;
      }
      if ( *(_BYTE *)(v6 + 25) )
      {
        v8 = *(_QWORD *)(v6 + 16);
      }
      else
      {
        v14 = *(_QWORD *)v6;
        if ( *(_BYTE *)(*(_QWORD *)v6 + 25LL) )
        {
          for ( i = *(_QWORD *)(v6 + 8); !*(_BYTE *)(i + 25) && v8 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v8 = i;
          if ( *(_BYTE *)(v8 + 25) )
            i = v8;
          v8 = i;
        }
        else
        {
          do
          {
            v8 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
      }
    }
    if ( *(_QWORD *)(v8 + 32) >= v20 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  if ( (v23 & 4) != 0 )
  {
    v9 = 1;
    v10 = (__int64 *)qword_1803453B8;
    v11 = *(_QWORD *)(qword_1803453B8 + 8);
    while ( !*(_BYTE *)(v11 + 25) )
    {
      v10 = (__int64 *)v11;
      if ( v3 < *(_QWORD *)(v11 + 32) )
      {
        v11 = *(_QWORD *)v11;
        v9 = 1;
      }
      else
      {
        v11 = *(_QWORD *)(v11 + 16);
        v9 = 0;
      }
    }
    v12 = v10;
    if ( v9 )
    {
      if ( v10 == *(__int64 **)qword_1803453B8 )
      {
        v9 = 1;
        goto LABEL_12;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v12 = (__int64 *)v10[2];
      }
      else
      {
        v16 = *v10;
        if ( *(_BYTE *)(*v10 + 25) )
        {
          for ( j = v10[1]; !*(_BYTE *)(j + 25) && v12 == *(__int64 **)j; j = *(_QWORD *)(j + 8) )
            v12 = (__int64 *)j;
          if ( *((_BYTE *)v12 + 25) )
            j = (__int64)v12;
          v12 = (__int64 *)j;
        }
        else
        {
          do
          {
            v12 = (__int64 *)v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          while ( !*(_BYTE *)(v16 + 25) );
        }
      }
    }
    if ( v12[4] < v3 )
    {
LABEL_12:
      std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
        &qword_1803453B8,
        &v18,
        v9,
        v10,
        (unsigned __int64 *)va);
      LODWORD(v3) = v20;
    }
  }
  return anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(
           *((_QWORD *)qword_180345450 + 5),
           a3,
           v3,
           v24,
           v22);
}
