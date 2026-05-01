/*
 * XREFs of ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@1@Z @ 0x18003B4D4
 * Callers:
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@@Z @ 0x18003B2D4 (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_d.c)
 * Callees:
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@Z @ 0x18003B4A4 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugam.c)
 */

const struct std::nothrow_t **__fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Insert_at<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>> &,std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *> *>(
        _QWORD *a1,
        const struct std::nothrow_t **a2,
        char a3,
        const struct std::nothrow_t **a4,
        __int64 a5,
        const struct std::nothrow_t *a6)
{
  unsigned __int64 v6; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  const struct std::nothrow_t *v11; // rdx
  const struct std::nothrow_t **v12; // r10
  _QWORD *v13; // rcx
  const struct std::nothrow_t **v14; // rbx
  __int64 *v15; // r8
  _QWORD *v16; // rax
  const struct std::nothrow_t *v17; // r8
  const struct std::nothrow_t **v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  const struct std::nothrow_t *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  const struct std::nothrow_t **result; // rax

  v6 = a1[1];
  if ( v6 >= 0x492492492492491LL )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Destroy_if_node(
      0x492492492492491LL,
      a6);
    std::_Xlength_error("map/set<T> too long");
  }
  a1[1] = v6 + 1;
  *((_QWORD *)a6 + 1) = a4;
  if ( a4 == (const struct std::nothrow_t **)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = a6;
    *(_QWORD *)*a1 = a6;
    v9 = *a1;
LABEL_9:
    *(_QWORD *)(v9 + 16) = a6;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(const struct std::nothrow_t ***)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_10;
  }
  a4[2] = a6;
  v9 = *a1;
  if ( a4 == *(const struct std::nothrow_t ***)(*a1 + 16LL) )
    goto LABEL_9;
LABEL_10:
  v10 = *((_QWORD *)a6 + 1);
  v11 = a6;
  while ( !*(_BYTE *)(v10 + 24) )
  {
    v12 = (const struct std::nothrow_t **)((char *)v11 + 8);
    v13 = (_QWORD *)*((_QWORD *)v11 + 1);
    v14 = (const struct std::nothrow_t **)(v13 + 1);
    v15 = (__int64 *)v13[1];
    v16 = (_QWORD *)*v15;
    if ( v13 == (_QWORD *)*v15 )
    {
      v16 = (_QWORD *)v15[2];
      if ( !*((_BYTE *)v16 + 24) )
        goto LABEL_32;
      v17 = (const struct std::nothrow_t *)v13[2];
      if ( v11 == v17 )
      {
        v11 = (const struct std::nothrow_t *)*((_QWORD *)v11 + 1);
        v13[2] = *(_QWORD *)v17;
        if ( !*(_BYTE *)(*(_QWORD *)v17 + 25LL) )
          *(_QWORD *)(*(_QWORD *)v17 + 8LL) = v13;
        *((_QWORD *)v17 + 1) = *v14;
        if ( v13 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v17;
        }
        else
        {
          v18 = (const struct std::nothrow_t **)*v14;
          if ( v13 == *(_QWORD **)*v14 )
            *v18 = v17;
          else
            v18[2] = v17;
        }
        *(_QWORD *)v17 = v13;
        v12 = (const struct std::nothrow_t **)(v13 + 1);
        *v14 = v17;
      }
      else
      {
        v17 = (const struct std::nothrow_t *)*((_QWORD *)v11 + 1);
      }
      *((_BYTE *)v17 + 24) = 1;
      *(_BYTE *)(*((_QWORD *)*v12 + 1) + 24LL) = 0;
      v19 = (_QWORD *)*((_QWORD *)*v12 + 1);
      v20 = (_QWORD *)*v19;
      *v19 = *(_QWORD *)(*v19 + 16LL);
      v21 = v20[2];
      if ( !*(_BYTE *)(v21 + 25) )
        *(_QWORD *)(v21 + 8) = v19;
      v20[1] = v19[1];
      if ( v19 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v20;
      }
      else
      {
        v22 = (_QWORD *)v19[1];
        if ( v19 == (_QWORD *)v22[2] )
          v22[2] = v20;
        else
          *v22 = v20;
      }
      v20[2] = v19;
    }
    else
    {
      if ( !*((_BYTE *)v16 + 24) )
      {
LABEL_32:
        *((_BYTE *)v13 + 24) = 1;
        *((_BYTE *)v16 + 24) = 1;
        *(_BYTE *)(*((_QWORD *)*v12 + 1) + 24LL) = 0;
        v11 = (const struct std::nothrow_t *)*((_QWORD *)*v12 + 1);
        goto LABEL_51;
      }
      v23 = (_QWORD *)*v13;
      if ( v11 == (const struct std::nothrow_t *)*v13 )
      {
        v11 = (const struct std::nothrow_t *)*((_QWORD *)v11 + 1);
        v13 = (_QWORD *)*v13;
        *(_QWORD *)v11 = v23[2];
        v24 = v23[2];
        if ( !*(_BYTE *)(v24 + 25) )
          *(_QWORD *)(v24 + 8) = v11;
        v13[1] = *v14;
        if ( v11 == *(const struct std::nothrow_t **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v13;
        }
        else
        {
          v25 = *v14;
          if ( v11 == *((const struct std::nothrow_t **)*v14 + 2) )
            *((_QWORD *)v25 + 2) = v13;
          else
            *(_QWORD *)v25 = v13;
        }
        v13[2] = v11;
        v12 = v14;
        *v14 = (const struct std::nothrow_t *)v13;
      }
      *((_BYTE *)v13 + 24) = 1;
      *(_BYTE *)(*((_QWORD *)*v12 + 1) + 24LL) = 0;
      v19 = (_QWORD *)*((_QWORD *)*v12 + 1);
      v20 = (_QWORD *)v19[2];
      v19[2] = *v20;
      if ( !*(_BYTE *)(*v20 + 25LL) )
        *(_QWORD *)(*v20 + 8LL) = v19;
      v20[1] = v19[1];
      if ( v19 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v20;
      }
      else
      {
        v26 = (_QWORD *)v19[1];
        if ( v19 == (_QWORD *)*v26 )
          *v26 = v20;
        else
          v26[2] = v20;
      }
      *v20 = v19;
    }
    v19[1] = v20;
LABEL_51:
    v10 = *((_QWORD *)v11 + 1);
  }
  v27 = *a1;
  *a2 = a6;
  v28 = *(_QWORD *)(v27 + 8);
  result = a2;
  *(_BYTE *)(v28 + 24) = 1;
  return result;
}
