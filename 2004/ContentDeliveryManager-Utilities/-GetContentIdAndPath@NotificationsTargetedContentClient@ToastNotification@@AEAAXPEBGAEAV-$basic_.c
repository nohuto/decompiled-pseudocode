/*
 * XREFs of ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18004C4F4
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18004C094 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 * Callees:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18003473C (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800370C8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x1800371BC (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180038928 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18004A450 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  const char *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  const char *v12; // r9
  char *v13[3]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-9h]
  void *v15[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v17; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  if ( *(_WORD *)a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign((void **)v13, a2, v6);
  v7 = std::wstring::find((char *)v13, L"cId=");
  v8 = v7;
  v9 = (const char *)v13;
  if ( v14 >= 8 )
    v9 = v13[0];
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0x57,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)0x80070057LL,
    v7 == -1,
    (__int64)"'cId=' was not found in '%ls'",
    v9);
  v10 = std::wstring::find((char *)v13, L"path=");
  v11 = v10;
  v12 = (const char *)v13;
  if ( v14 >= 8 )
    v12 = v13[0];
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0x59,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)0x80070057LL,
    v10 == -1,
    (__int64)"'path=' was not found in '%ls'",
    v12);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (void **)v13, v8 + 4, v11 - (v8 + 4) - 1);
  if ( (void **)a3 != v15 )
  {
    if ( *(_QWORD *)(a3 + 24) >= 8uLL )
      operator delete(*(void **)a3);
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_WORD *)a3 = 0;
    std::wstring::_Assign_rv((_QWORD *)a3, v15);
  }
  if ( v17 >= 8 )
    operator delete(v15[0]);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (void **)v13, v11 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (void **)a4 != v15 )
  {
    if ( *(_QWORD *)(a4 + 24) >= 8uLL )
      operator delete(*(void **)a4);
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_WORD *)a4 = 0;
    std::wstring::_Assign_rv((_QWORD *)a4, v15);
  }
  if ( v17 >= 8 )
    operator delete(v15[0]);
  if ( v14 >= 8 )
    operator delete(v13[0]);
}
