/*
 * XREFs of ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x18007EBA4
 * Callers:
 *     ?PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z @ 0x180011FE0 (-PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z.c)
 *     ?GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800585E0 (-GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071CE4 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x18007EA40 (-CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA-AV-$map@PEBGPEBU_WNF_STATE_NAME@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18007ED48 (--1-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18007EFAC (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18007F14C (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::GetWellKnownWnfStateByName(
        LPCWCH lpString1,
        unsigned __int16 *a2,
        const struct _WNF_STATE_NAME **a3)
{
  unsigned int v5; // esi
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  bool v9; // zf
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v16; // [rsp+98h] [rbp+38h] BYREF

  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  CreativeFramework::Triggers::CreateSupportedWnfNameStateMap((__int64)v14);
  v6 = (__int64 *)v14[0];
  v7 = *(__int64 **)(v14[0] + 8LL);
  v8 = (__int64 *)v14[0];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_8;
  do
  {
    if ( CompareStringOrdinal((LPCWCH)v7[4], -1, lpString1, -1, 1) == 1 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v8 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  v6 = (__int64 *)v14[0];
  if ( v8 == (__int64 *)v14[0]
    || (v9 = CompareStringOrdinal(lpString1, -1, (LPCWCH)v8[4], -1, 1) == 1, v6 = (__int64 *)v14[0], v9) )
  {
LABEL_8:
    v8 = v6;
  }
  if ( v8 == v6 )
  {
    v5 = -2147024809;
  }
  else
  {
    v10 = (__int64 *)v6[1];
    v11 = v6;
    if ( !*((_BYTE *)v10 + 25) )
    {
      do
      {
        if ( CompareStringOrdinal((LPCWCH)v10[4], -1, lpString1, -1, 1) == 1 )
        {
          v10 = (__int64 *)v10[2];
        }
        else
        {
          v11 = v10;
          v10 = (__int64 *)*v10;
        }
      }
      while ( !*((_BYTE *)v10 + 25) );
      v6 = (__int64 *)v14[0];
    }
    if ( v11 == v6 || CompareStringOrdinal(lpString1, -1, (LPCWCH)v11[4], -1, 1) == 1 )
    {
      v15[0] = lpString1;
      v15[1] = 0LL;
      v12 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
              v14,
              v15);
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (unsigned int)v14,
        (unsigned int)&v16,
        (_DWORD)v11,
        v12 + 32,
        v12);
      v11 = v16;
    }
    *(_QWORD *)a2 = v11[5];
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::~_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v14);
  return v5;
}
