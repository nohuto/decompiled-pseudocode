/*
 * XREFs of ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011D470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18011C23C (--$_Try_emplace@AEBK$$V@-$unordered_map@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18011D5E8 (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011DC88 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 */

__int64 __fastcall ControllerNavigationManager::RegisterClient(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationClientProxy *a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // rax
  const char *v10; // r9
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // rdx
  __int64 *i; // rcx
  __int64 *v15; // rax
  struct tagRECT v16; // xmm6
  struct tagPOINT *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  struct tagRECT v21; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+70h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD, struct BamoControllerNavigationManagerStub *))(**(_QWORD **)(*((_QWORD *)a3 + 4) + 16LL)
                                                                                       + 8LL))(
         *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL),
         a2);
  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  v8 = *(_DWORD *)(v5 + 32);
  v23 = v8;
  do
  {
    v9 = *((unsigned __int8 *)&v23 + v6++);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  while ( v6 < 4 );
  v10 = (const char *)*((_QWORD *)this + 19);
  v11 = v7 & *((_QWORD *)this + 22);
  v12 = (__int64 *)*((_QWORD *)this + 17);
  v13 = 2 * v11;
  for ( i = *(__int64 **)&v10[8 * v13]; ; i = (__int64 *)*i )
  {
    v15 = *(__int64 **)&v10[8 * v13] == v12 ? (__int64 *)*((_QWORD *)this + 17) : **(__int64 ***)&v10[8 * v13 + 8];
    if ( i == v15 )
      break;
    if ( *((_DWORD *)i + 4) == v8 )
      goto LABEL_11;
  }
  i = (__int64 *)*((_QWORD *)this + 17);
LABEL_11:
  if ( i != v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      299LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v10);
    __debugbreak();
  }
  v16 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 48LL))((char *)a3 + 8);
  v17 = (struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 56LL))((char *)a3 + 8);
  v21 = v16;
  InputETW::ControllerNavigationManager::RegisterClient(v8, &v21, *v17);
  v23 = v8;
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>::_Try_emplace<unsigned long const &,>(
    (_QWORD *)this + 16,
    (__int64)&v21,
    &v23);
  v18 = *(_QWORD *)&v21.left;
  if ( *(struct BamoControllerNavigationClientProxy **)(*(_QWORD *)&v21.left + 24LL) != a3 )
  {
    v24 = (__int64 (__fastcall ***)(_QWORD))a3;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v24);
    v19 = *(_QWORD *)(v18 + 24);
    *(_QWORD *)(v18 + 24) = a3;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  if ( *((_DWORD *)this + 56) == v8 )
    ControllerNavigationManager::SetCurrentStateWithClient(this, a3);
  return 0LL;
}
