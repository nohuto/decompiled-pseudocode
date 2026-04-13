/*
 * XREFs of ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x180097E8C
 * Callers:
 *     ?Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ @ 0x180097E80 (-Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086FF0 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180086FF0.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CFEF1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PublishWindowsTipService::WindowsTipContentPublished(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  _WORD *v5; // rcx
  signed __int64 v6; // rdx
  __int16 v7; // ax
  _WORD *v8; // rax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  char *v11; // rcx
  _WORD *v12; // rdx
  signed __int64 v13; // rcx
  __int16 v14; // ax
  _WORD *v15; // rax
  __int64 v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, __int64, _BYTE *); // rdi
  HSTRING_HEADER *v21; // rax
  int v22; // eax
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v25[2]; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER v26; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v27[512]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v28[512]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+490h] [rbp+388h]

  v25[1] = (const WCHAR *)-2LL;
  v25[0] = L"WNF_SHEL_WINDOWSTIP_CONTENT_PUBLISHED";
  memset_0(v27, 0, 0x400uLL);
  v2 = (char *)this + 8;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v2 = *(char **)v2;
  v3 = 256LL;
  v4 = 256LL;
  v5 = v27;
  v6 = v2 - v27;
  do
  {
    if ( v4 == -2147483390 )
      break;
    v7 = *(_WORD *)((char *)v5 + v6);
    if ( !v7 )
      break;
    *v5++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = v5 - 1;
  if ( v4 )
    v8 = v5;
  *v8 = 0;
  v9 = v4 == 0 ? (const char *)0x8007007ALL : 0LL;
  v10 = retaddr;
  if ( !v4 )
  {
LABEL_27:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      v9);
    __debugbreak();
  }
  v11 = (char *)this + 40;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v11 = *(char **)v11;
  v12 = v28;
  v13 = v11 - v28;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v14 = *(_WORD *)((char *)v12 + v13);
    if ( !v14 )
      break;
    *v12++ = v14;
    --v3;
  }
  while ( v3 );
  v15 = v12 - 1;
  if ( v3 )
    v15 = v12;
  *v15 = 0;
  if ( !v3 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x8007007ALL);
    goto LABEL_29;
  }
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v24);
  v23 = 0LL;
  v16 = *v24;
  v23 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v16 + 112))(v24, &v23);
  v18 = retaddr;
  if ( v17 < 0 )
  {
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v17);
    JUMPOUT(0x1800980F0LL);
  }
  v19 = v23;
  v20 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v23 + 48LL);
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, v25);
  v22 = v20(v19, v21[1].Reserved.Reserved1, 1024LL, v27);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_27;
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
}
