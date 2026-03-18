/*
 * XREFs of _lambda_5fcd38f73916aa9cc2ab190da74b00ea_::operator() @ 0x18004136C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5fcd38f73916aa9cc2ab190da74b00ea__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800E5540 (std--_Func_impl_no_alloc__lambda_5fcd38f73916aa9cc2ab190da74b00ea__void_void___unsi_ea_1800E5540.c)
 * Callees:
 *     ??$_Insert_at@AEB_KU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@1@_NPEAU?$_Tree_node@_KPEAX@1@AEB_KU_Not_a_node_tag@1@@Z @ 0x18005CAA4 (--$_Insert_at@AEB_KU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator.c)
 */

__int64 lambda_5fcd38f73916aa9cc2ab190da74b00ea_::operator()(__int64 a1, __int64 a2, int a3, ...)
{
  unsigned __int64 v3; // r10
  int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 v14; // rcx
  __int64 j; // rcx
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  va_list va; // [rsp+68h] [rbp+38h]
  __int64 v20; // [rsp+70h] [rbp+40h]
  __int64 v21; // [rsp+78h] [rbp+48h]
  __int64 v22; // [rsp+80h] [rbp+50h]
  va_list va1; // [rsp+88h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v17 = a2;
  v16 = a1;
  v3 = v18;
  v4 = a3;
  if ( (v21 & 0x1A) != 0 )
  {
    LOBYTE(a3) = 1;
    v5 = qword_180344398;
    v6 = *(_QWORD *)(qword_180344398 + 8);
    while ( !*(_BYTE *)(v6 + 25) )
    {
      v5 = v6;
      if ( v18 < *(_QWORD *)(v6 + 32) )
      {
        v6 = *(_QWORD *)v6;
        LOBYTE(a3) = 1;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
        LOBYTE(a3) = 0;
      }
    }
    v7 = v5;
    if ( (_BYTE)a3 )
    {
      if ( v5 == *(_QWORD *)qword_180344398 )
      {
        LOBYTE(a3) = 1;
LABEL_6:
        std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
          (unsigned int)&qword_180344398,
          (unsigned int)&v17,
          a3,
          v5,
          (__int64)va);
        v3 = v18;
        goto LABEL_7;
      }
      if ( *(_BYTE *)(v5 + 25) )
      {
        v7 = *(_QWORD *)(v5 + 16);
      }
      else
      {
        v12 = *(_QWORD *)v5;
        if ( *(_BYTE *)(*(_QWORD *)v5 + 25LL) )
        {
          for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25) && v7 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v7 = i;
          if ( *(_BYTE *)(v7 + 25) )
            i = v7;
          v7 = i;
        }
        else
        {
          do
          {
            v7 = v12;
            v12 = *(_QWORD *)(v12 + 16);
          }
          while ( !*(_BYTE *)(v12 + 25) );
        }
      }
    }
    if ( *(_QWORD *)(v7 + 32) >= v18 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  if ( (v21 & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    v8 = qword_1803443A8;
    v9 = *(_QWORD *)(qword_1803443A8 + 8);
    while ( !*(_BYTE *)(v9 + 25) )
    {
      v8 = v9;
      if ( v3 < *(_QWORD *)(v9 + 32) )
      {
        v9 = *(_QWORD *)v9;
        LOBYTE(a3) = 1;
      }
      else
      {
        v9 = *(_QWORD *)(v9 + 16);
        LOBYTE(a3) = 0;
      }
    }
    v10 = v8;
    if ( (_BYTE)a3 )
    {
      if ( v8 == *(_QWORD *)qword_1803443A8 )
      {
        LOBYTE(a3) = 1;
        goto LABEL_12;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v10 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v14 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          for ( j = *(_QWORD *)(v8 + 8); !*(_BYTE *)(j + 25) && v10 == *(_QWORD *)j; j = *(_QWORD *)(j + 8) )
            v10 = j;
          if ( *(_BYTE *)(v10 + 25) )
            j = v10;
          v10 = j;
        }
        else
        {
          do
          {
            v10 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
      }
    }
    if ( *(_QWORD *)(v10 + 32) < v3 )
    {
LABEL_12:
      std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
        (unsigned int)&qword_1803443A8,
        (unsigned int)&v16,
        a3,
        v8,
        (__int64)va);
      LODWORD(v3) = v18;
    }
  }
  return anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(
           *((_QWORD *)qword_180344440 + 5),
           v4,
           v3,
           v22,
           v20);
}
