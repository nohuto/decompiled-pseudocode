/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18012DFDC
 * Callers:
 *     ??$emplace@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18012E3D8 (--$emplace@AEBU_GUID@@AEAV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$_.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcmp_0 @ 0x18004A62F (memcmp_0.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@1@1@Z @ 0x18012DE68 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Insert_nohint<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>> &,std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 *a5)
{
  const void *v5; // r10
  __int64 *v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  char i; // r12
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  const void *v23; // [rsp+78h] [rbp+20h]

  v23 = a4;
  v5 = a4;
  v8 = a5;
  v9 = (_QWORD *)*a1;
  v10 = *a1;
  v11 = *(_QWORD *)(*a1 + 8);
  for ( i = 1; !*(_BYTE *)(v11 + 25); v5 = v23 )
  {
    v10 = v11;
    v13 = memcmp_0(v5, (const void *)(v11 + 32), 0x10uLL);
    if ( v13 >= 0 )
    {
      i = 0;
      v11 = *(_QWORD *)(v11 + 16);
    }
    else
    {
      i = 1;
      v11 = *(_QWORD *)v11;
    }
  }
  try
  {
    v14 = v10;
    v15 = v10;
    if ( i )
    {
      if ( v10 == *v9 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Insert_at<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>> &,std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *> *>(
                           a1,
                           &v22,
                           1,
                           (_QWORD *)v10,
                           v21,
                           (__int64)v8);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v10 + 25) )
      {
        v14 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v18 = *(_QWORD *)v10;
        if ( *(_BYTE *)(*(_QWORD *)v10 + 25LL) )
        {
          v19 = *(_QWORD *)(v10 + 8);
          if ( !*(_BYTE *)(v19 + 25) )
          {
            v20 = v10;
            do
            {
              v15 = v20;
              if ( v20 != *(_QWORD *)v19 )
                break;
              v14 = v19;
              v19 = *(_QWORD *)(v19 + 8);
              v20 = v14;
              v15 = v14;
            }
            while ( !*(_BYTE *)(v19 + 25) );
          }
          if ( !*(_BYTE *)(v14 + 25) )
          {
            v14 = v19;
            v15 = v19;
          }
          goto LABEL_21;
        }
        do
        {
          v14 = v18;
          v18 = *(_QWORD *)(v18 + 16);
        }
        while ( !*(_BYTE *)(v18 + 25) );
      }
      v15 = v14;
    }
LABEL_21:
    if ( memcmp_0((const void *)(v15 + 32), v5, 0x10uLL) >= 0 )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v8 + 6);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x38);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Insert_at<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>> &,std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *> *>(
                         a1,
                         &v22,
                         i,
                         (_QWORD *)v10,
                         v21,
                         (__int64)v8);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Destroy_if_node(
      v16,
      a5);
    throw;
  }
  return result;
}
