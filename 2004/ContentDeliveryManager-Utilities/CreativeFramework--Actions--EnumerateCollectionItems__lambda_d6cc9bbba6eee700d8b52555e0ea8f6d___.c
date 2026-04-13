/*
 * XREFs of CreativeFramework::Actions::EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___ @ 0x18008BAF8
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180089CF0 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_d6cc9bbba6eee700d8b52555e0ea8f6d_@@QEAA_NAEBV?$com_ptr_t@UICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008A330 (--R_lambda_d6cc9bbba6eee700d8b52555e0ea8f6d_@@QEAA_NAEBV-$com_ptr_t@UICuratedTile@CuratedTileCol.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::Actions::EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 **); // rdi
  __int64 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v25; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v27; // [rsp+78h] [rbp+38h] BYREF

  v23[1] = -2LL;
  v3 = *a1;
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 104))(a1, &v22);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_31;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v22)(
         v22,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         v23);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6);
    goto LABEL_33;
  }
  v27 = 0LL;
  v7 = *(_QWORD *)v23[0];
  v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(v7 + 48))(v23[0], &v27);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x98,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v8);
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0xA9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18008BDA5LL);
  }
  v25 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v27 + 56))(v27, &v25);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( !v25 )
      goto LABEL_17;
    v26 = 0LL;
    v21 = 0LL;
    v12 = *v27;
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 48))(v27, &v21);
    v14 = retaddr;
    if ( v13 < 0 )
      goto LABEL_30;
    v15 = v21;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v21 + 56LL);
    v17 = v26;
    v26 = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
    v18 = v16(v15, &v26);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v18);
LABEL_29:
      wil::details::in1diag3::Throw_Hr(
        v11,
        (void *)0x9A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10);
LABEL_30:
      wil::details::in1diag3::Throw_Hr(
        v14,
        (void *)0xA1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v13);
LABEL_31:
      wil::details::in1diag3::Throw_Hr(
        v5,
        (void *)0x94,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    LOBYTE(v10) = _lambda_d6cc9bbba6eee700d8b52555e0ea8f6d_::operator()(a2, &v26);
    if ( !(_BYTE)v10 )
      break;
    v10 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v27 + 64))(v27, &v25);
    v19 = retaddr;
    if ( v10 < 0 )
      goto LABEL_34;
    if ( v21 )
      LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v26 )
      LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64 *))(*v26 + 16))(v26);
  }
  if ( v21 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v26 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64 *))(*v26 + 16))(v26);
LABEL_17:
  if ( v27 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64 *))(*v27 + 16))(v27);
  if ( v23[0] )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  if ( v22 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v10;
}
