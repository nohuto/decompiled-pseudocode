/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1803D2AB4
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803D2CE4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_1803D2CE4.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@1@1@Z @ 0x1803D0294 (--$_Insert_at@AEAU-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU-$_Tree_no.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1803D0618 (--$_Insert_nohint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tre.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 *a5)
{
  __int64 *v7; // r10
  __int64 v8; // rcx
  __int64 *result; // rax
  __int64 v10; // r9
  unsigned int v11; // edi
  bool v12; // cf
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r9
  char v18; // r11
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rdx
  int v22; // [rsp+20h] [rbp-28h]
  char v23[24]; // [rsp+30h] [rbp-18h] BYREF

  v7 = (__int64 *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v7 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 32) )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v22,
          (__int64)a5);
        return a2;
      }
      goto LABEL_40;
    }
    if ( (__int64 *)a3 == v7 )
    {
      v10 = v7[2];
      if ( *(_DWORD *)(v10 + 32) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v10,
          v22,
          (__int64)a5);
        return a2;
      }
      goto LABEL_40;
    }
    v11 = *a4;
    v12 = *(_DWORD *)(a3 + 32) < *a4;
    if ( *(_DWORD *)(a3 + 32) > *a4 )
    {
      v13 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        v13 = *(_QWORD *)(a3 + 16);
      }
      else
      {
        v14 = *(_QWORD *)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          v15 = *(_QWORD *)(a3 + 8);
          if ( !*(_BYTE *)(v15 + 25) )
          {
            v16 = a3;
            do
            {
              if ( v16 != *(_QWORD *)v15 )
                break;
              v13 = v15;
              v15 = *(_QWORD *)(v15 + 8);
              v16 = v13;
            }
            while ( !*(_BYTE *)(v15 + 25) );
          }
          if ( !*(_BYTE *)(v13 + 25) )
            v13 = v15;
        }
        else
        {
          do
          {
            v13 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
      }
      if ( *(_DWORD *)(v13 + 32) < v11 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL) )
          std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
            a1,
            a2,
            0,
            (_QWORD *)v13,
            v22,
            (__int64)a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
            a1,
            a2,
            1,
            (_QWORD *)a3,
            v22,
            (__int64)a5);
        return a2;
      }
      v12 = *(_DWORD *)(a3 + 32) < v11;
    }
    if ( !v12 )
      goto LABEL_40;
    v17 = *(__int64 **)(a3 + 16);
    v18 = *((_BYTE *)v17 + 25);
    if ( v18 )
    {
      v17 = *(__int64 **)(a3 + 8);
      if ( !*((_BYTE *)v17 + 25) )
      {
        v19 = a3;
        do
        {
          v20 = (__int64)v17;
          if ( v19 != v17[2] )
            break;
          v17 = (__int64 *)v17[1];
          v19 = v20;
        }
        while ( !*((_BYTE *)v17 + 25) );
      }
    }
    else
    {
      v21 = (__int64 *)*v17;
      if ( !*(_BYTE *)(*v17 + 25) )
      {
        do
        {
          v17 = v21;
          v21 = (__int64 *)*v21;
        }
        while ( !*((_BYTE *)v21 + 25) );
      }
    }
    if ( v17 != v7 && v11 >= *((_DWORD *)v17 + 8) )
    {
LABEL_40:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_nohint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
                         a1,
                         (__int64)v23,
                         a3,
                         a4,
                         a5);
      return a2;
    }
    if ( v18 )
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        a1,
        a2,
        0,
        (_QWORD *)a3,
        v22,
        (__int64)a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        a1,
        a2,
        1,
        v17,
        v22,
        (__int64)a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        a1,
        a2,
        1,
        v7,
        v22,
        (__int64)a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Destroy_if_node(
        v8,
        a5);
      throw;
    }
  }
  return result;
}
