/*
 * XREFs of ??R_lambda_d6cc9bbba6eee700d8b52555e0ea8f6d_@@QEAA_NAEBV?$com_ptr_t@UICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180087CD0
 * Callers:
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___ @ 0x180089498 (CreativeFramework--Actions--EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall _lambda_d6cc9bbba6eee700d8b52555e0ea8f6d_::operator()(__int64 a1, __int64 **a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v13; // rax
  char v14; // di
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  HSTRING string; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21[1] = -2LL;
  v21[0] = 0LL;
  v4 = *a2;
  v5 = **a2;
  v21[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v5 + 48))(v4, v21);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_11;
  string = 0LL;
  v8 = v21[0];
  v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21[0] + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v10 = v9(v8, &string);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_12;
  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v13 = WindowsGetStringRawBuffer(string, 0LL);
  v14 = 1;
  if ( CompareStringOrdinal(v13, -1, StringRawBuffer, -1, 1) != 2 )
    goto LABEL_7;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(**a2 + 56))(*a2, &v23);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x22F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x180087EB9LL);
  }
  v16 = **(__int64 ***)(a1 + 8);
  v17 = *v16;
  v22 = v23;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v17 + 208))(v16, &v22);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x230,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x228,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x22B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  **(_BYTE **)(a1 + 16) = 1;
  v14 = 0;
LABEL_7:
  WindowsDeleteString(string);
  string = 0LL;
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0], *(_QWORD *)v21[0]);
  return v14;
}
