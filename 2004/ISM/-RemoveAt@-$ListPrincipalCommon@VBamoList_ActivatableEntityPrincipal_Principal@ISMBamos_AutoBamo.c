/*
 * XREFs of ?RemoveAt@?$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180002AC4
 * Callers:
 *     ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180002954 (-find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV-$function@$$A6A_NPEAVActivatableEntit.c)
 * Callees:
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180002B80 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180002BC0 (-erase@-$vector@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x180002C78 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x180002CA0 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::RemoveAt(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  struct Microsoft::Bamo::BaseBamoConnection *v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1[4] + 32LL);
  if ( *(int *)(v4 + 8) <= 0 )
    v5 = 0LL;
  else
    v5 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
  Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v9, v5);
  if ( Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v5) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
      (const char *)0x87B20814LL,
      v9[0]);
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
    return 2276591636LL;
  }
  else
  {
    v6 = a1[7];
    if ( v2 >= (a1[8] - v6) >> 3 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA9,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
        (const char *)retaddr);
      __debugbreak();
    }
    std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::erase(
      a1 + 7,
      &v11,
      v6 + 8 * v2,
      retaddr);
    v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(a1[1] + 32LL))(a1 + 1, (unsigned int)v2);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB1,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
        (const char *)(unsigned int)v7,
        v9[0]);
      JUMPOUT(0x180052744LL);
    }
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
    return 0LL;
  }
}
