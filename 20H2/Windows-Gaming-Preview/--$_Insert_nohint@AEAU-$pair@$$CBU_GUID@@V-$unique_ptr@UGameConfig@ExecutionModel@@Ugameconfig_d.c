/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@@Z @ 0x18003B2D4
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800389C4 (-RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@1@Z @ 0x18003B4D4 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delet.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x180045F97 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Insert_nohint<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>> &,std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        void *a5)
{
  const void *v5; // r10
  int v7; // r12d
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  _QWORD *v10; // rsi
  __int64 *v11; // rbx
  bool i; // r13
  int v13; // eax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  const struct std::nothrow_t *v21; // rdx
  void *v22; // rcx
  char v23; // [rsp+60h] [rbp+8h] BYREF
  const void *v24; // [rsp+78h] [rbp+20h]

  v24 = a4;
  v5 = a4;
  v7 = a1;
  v8 = a5;
  v9 = *(_QWORD **)a1;
  v10 = *(_QWORD **)a1;
  v11 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  for ( i = 1; !*((_BYTE *)v11 + 25); v5 = v24 )
  {
    v10 = v11;
    v13 = memcmp_0(v5, v11 + 4, 0x10uLL);
    i = v13 < 0;
    if ( v13 >= 0 )
      v11 = (__int64 *)v11[2];
    else
      v11 = (__int64 *)*v11;
  }
  try
  {
    v14 = v10;
    v15 = v10;
    if ( i )
    {
      if ( v10 == (_QWORD *)*v9 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Insert_at<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>> &,std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *> *>(
                                     v7,
                                     (unsigned int)&v23,
                                     1,
                                     (_DWORD)v10);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v14 = (_QWORD *)v10[2];
      }
      else
      {
        v18 = *v10;
        if ( *(_BYTE *)(*v10 + 25LL) )
        {
          v19 = v10[1];
          if ( !*(_BYTE *)(v19 + 25) )
          {
            v20 = v10;
            do
            {
              v15 = v20;
              if ( v20 != *(_QWORD **)v19 )
                break;
              v14 = (_QWORD *)v19;
              v19 = *(_QWORD *)(v19 + 8);
              v20 = v14;
              v15 = v14;
            }
            while ( !*(_BYTE *)(v19 + 25) );
          }
          if ( !*((_BYTE *)v14 + 25) )
          {
            v14 = (_QWORD *)v19;
            v15 = (_QWORD *)v19;
          }
          goto LABEL_21;
        }
        do
        {
          v14 = (_QWORD *)v18;
          v18 = *(_QWORD *)(v18 + 16);
        }
        while ( !*(_BYTE *)(v18 + 25) );
      }
      v15 = v14;
    }
LABEL_21:
    if ( memcmp_0(v15 + 4, v5, 0x10uLL) >= 0 )
    {
      v22 = (void *)v8[6];
      if ( v22 )
        operator delete(v22, v21);
      operator delete(v8, (const struct std::nothrow_t *)0x38);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Insert_at<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>> &,std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *> *>(
                                   v7,
                                   (unsigned int)&v23,
                                   i,
                                   (_DWORD)v10);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Destroy_if_node(
      v16,
      a5);
    throw;
  }
  return result;
}
