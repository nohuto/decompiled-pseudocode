/*
 * XREFs of ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x18019E7F0
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18019FBE4 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x18019E0A4 (--$_Insert_at@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 *v7; // r9
  __int64 *v8; // rax
  char v9; // r10
  __int64 *v10; // rax
  __int64 result; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v7 = *a1;
  v8 = (__int64 *)(*a1)[1];
  v9 = 1;
  while ( !*((_BYTE *)v8 + 25) )
  {
    v7 = v8;
    if ( *a4 >= *((_DWORD *)v8 + 7) )
    {
      v9 = 0;
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v9 = 1;
      v8 = (__int64 *)*v8;
    }
  }
  try
  {
    v10 = v7;
    if ( v9 )
    {
      if ( v7 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
                           a1,
                           &v15,
                           1,
                           v7,
                           a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v7 + 25) )
      {
        v10 = (__int64 *)v7[2];
      }
      else
      {
        v12 = (__int64 *)*v7;
        if ( *(_BYTE *)(*v7 + 25) )
        {
          v13 = (__int64 *)v7[1];
          if ( !*((_BYTE *)v13 + 25) )
          {
            v14 = v7;
            do
            {
              if ( v14 != (__int64 *)*v13 )
                break;
              v10 = v13;
              v13 = (__int64 *)v13[1];
              v14 = v10;
            }
            while ( !*((_BYTE *)v13 + 25) );
          }
          if ( !*((_BYTE *)v10 + 25) )
            v10 = v13;
        }
        else
        {
          do
          {
            v10 = v12;
            v12 = (__int64 *)v12[2];
          }
          while ( !*((_BYTE *)v12 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v10 + 7) >= *a4 )
    {
      *(_QWORD *)a2 = v10;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
                         a1,
                         &v15,
                         v9,
                         v7,
                         a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
