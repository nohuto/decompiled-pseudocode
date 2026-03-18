/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801E8584
 * Callers:
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1801E9164 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x1801675E4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@1@Z @ 0x1801E840C (--$_Insert_at@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801E8748 (--$_Insert_nohint@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_hint<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        int *a4,
        _QWORD *a5)
{
  __int64 **v6; // r11
  _QWORD *v7; // rbx
  __int64 *v8; // r10
  __int64 **v9; // r9
  char v10; // r8
  int v11; // esi
  bool v12; // cc
  __int64 v13; // rax
  __int64 **v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  __int64 *v18; // rax
  __int64 *v19; // rcx
  int v21; // [rsp+20h] [rbp-28h]
  _QWORD *v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h] BYREF

  v6 = (__int64 **)*a1;
  v7 = a2;
  v8 = a1;
  if ( a1[1] )
  {
    if ( a3 == *v6 )
    {
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        v22 = a5;
LABEL_8:
        v9 = (__int64 **)a3;
        goto LABEL_3;
      }
LABEL_40:
      *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_nohint<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
                         (_DWORD)v8,
                         (unsigned int)&v23,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return v7;
    }
    if ( a3 == (__int64 *)v6 )
    {
      v9 = (__int64 **)v6[2];
      if ( *((_DWORD *)v9 + 7) >= *a4 )
        goto LABEL_40;
      v22 = a5;
    }
    else
    {
      v11 = *a4;
      v12 = *((_DWORD *)a3 + 7) < *a4;
      if ( *((_DWORD *)a3 + 7) > *a4 )
      {
        v9 = (__int64 **)a3;
        if ( *((_BYTE *)a3 + 25) )
        {
          v9 = (__int64 **)a3[2];
        }
        else
        {
          v13 = *a3;
          if ( *(_BYTE *)(*a3 + 25) )
          {
            v14 = (__int64 **)a3[1];
            if ( !*((_BYTE *)v14 + 25) )
            {
              v15 = a3;
              do
              {
                if ( v15 != *v14 )
                  break;
                v9 = v14;
                v15 = (__int64 *)v14;
                v14 = (__int64 **)v14[1];
              }
              while ( !*((_BYTE *)v14 + 25) );
            }
            if ( !*((_BYTE *)v9 + 25) )
              v9 = v14;
          }
          else
          {
            do
            {
              v9 = (__int64 **)v13;
              v13 = *(_QWORD *)(v13 + 16);
            }
            while ( !*(_BYTE *)(v13 + 25) );
          }
        }
        if ( *((_DWORD *)v9 + 7) < v11 )
        {
          a1 = v8;
          v22 = a5;
          if ( !*((_BYTE *)v9[2] + 25) )
            goto LABEL_8;
          goto LABEL_12;
        }
        v12 = *((_DWORD *)a3 + 7) < v11;
      }
      if ( !v12 )
        goto LABEL_40;
      v16 = a3[2];
      v17 = *(_BYTE *)(v16 + 25);
      if ( v17 )
      {
        v9 = (__int64 **)a3[1];
        if ( !*((_BYTE *)v9 + 25) )
        {
          v18 = a3;
          do
          {
            v19 = (__int64 *)v9;
            if ( v18 != v9[2] )
              break;
            v9 = (__int64 **)v9[1];
            v18 = v19;
          }
          while ( !*((_BYTE *)v9 + 25) );
        }
      }
      else
      {
        v9 = (__int64 **)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v16);
      }
      if ( v9 != v6 && v11 >= *((_DWORD *)v9 + 7) )
        goto LABEL_40;
      a2 = v7;
      v22 = a5;
      a1 = v8;
      if ( !v17 )
        goto LABEL_3;
      v9 = (__int64 **)a3;
    }
LABEL_12:
    v10 = 0;
    goto LABEL_4;
  }
  v9 = (__int64 **)*a1;
  v22 = a5;
LABEL_3:
  v10 = 1;
LABEL_4:
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_at<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
    a1,
    a2,
    v10,
    v9,
    v21,
    v22);
  return v7;
}
