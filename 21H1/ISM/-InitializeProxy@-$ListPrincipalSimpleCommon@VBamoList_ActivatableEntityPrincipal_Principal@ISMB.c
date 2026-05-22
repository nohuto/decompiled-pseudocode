/*
 * XREFs of ?InitializeProxy@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@MEAAJPEAVBamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x18000AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InitializeProxy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // rbp
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( (*(_QWORD *)(a1 + 64) - v2) >> 3 )
  {
    v5 = a2 + 8;
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v2 + 8 * v6);
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 24LL);
      if ( v7 )
      {
        (**(void (__fastcall ***)(_QWORD))v7)(*(_QWORD *)(v2 + 8 * v6));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      }
      v9 = v8(v5, v3, v7);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x132,
          (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
          (const char *)(unsigned int)v9,
          v11);
        JUMPOUT(0x180053D96LL);
      }
      v2 = *(_QWORD *)(a1 + 56);
      v6 = ++v3;
    }
    while ( v3 < (unsigned __int64)((*(_QWORD *)(a1 + 64) - v2) >> 3) );
  }
  return 0LL;
}
