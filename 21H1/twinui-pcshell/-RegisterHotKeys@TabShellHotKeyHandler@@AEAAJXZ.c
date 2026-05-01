/*
 * XREFs of ?RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ @ 0x180271724
 * Callers:
 *     ?RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@6789@PEAUITitleBarController@@@Z @ 0x180271958 (-RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabShellHotKeyHandler::RegisterHotKeys(TabShellHotKeyHandler *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  _DWORD v4[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+3Ch] [rbp-C4h]
  int v6; // [rsp+44h] [rbp-BCh]
  int v7; // [rsp+48h] [rbp-B8h]
  __int64 v8; // [rsp+4Ch] [rbp-B4h]
  int v9; // [rsp+54h] [rbp-ACh]
  int v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+5Ch] [rbp-A4h]
  int v12; // [rsp+64h] [rbp-9Ch]
  int v13; // [rsp+68h] [rbp-98h]
  __int64 v14; // [rsp+6Ch] [rbp-94h]
  int v15; // [rsp+74h] [rbp-8Ch]
  int v16; // [rsp+78h] [rbp-88h]
  __int64 v17; // [rsp+7Ch] [rbp-84h]
  int v18; // [rsp+84h] [rbp-7Ch]
  int v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+8Ch] [rbp-74h]
  int v21; // [rsp+94h] [rbp-6Ch]
  int v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+9Ch] [rbp-64h]
  int v24; // [rsp+A4h] [rbp-5Ch]
  int v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+ACh] [rbp-54h]
  int v27; // [rsp+B4h] [rbp-4Ch]
  int v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+BCh] [rbp-44h]
  int v30; // [rsp+C4h] [rbp-3Ch]
  int v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+CCh] [rbp-34h]
  int v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+DCh] [rbp-24h]
  int v36; // [rsp+E4h] [rbp-1Ch]
  int v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+ECh] [rbp-14h]
  int v39; // [rsp+F4h] [rbp-Ch]
  int v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+104h] [rbp+4h]
  int v43; // [rsp+108h] [rbp+8h]
  __int64 v44; // [rsp+10Ch] [rbp+Ch]
  int v45; // [rsp+114h] [rbp+14h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v4[0] = 0;
  v4[1] = 85;
  v4[2] = 10;
  v5 = 9LL;
  v6 = 86;
  v7 = 14;
  v8 = 9LL;
  v9 = 88;
  v10 = 16394;
  v11 = 87LL;
  v12 = 87;
  v13 = 16394;
  v14 = 84LL;
  v15 = 89;
  v16 = 16394;
  v17 = 49LL;
  v18 = 90;
  v19 = 16394;
  v20 = 50LL;
  v21 = 91;
  v22 = 16394;
  v23 = 51LL;
  v24 = 92;
  v25 = 16394;
  v26 = 52LL;
  v27 = 93;
  v28 = 16394;
  v29 = 53LL;
  v30 = 94;
  v31 = 16394;
  v32 = 54LL;
  v33 = 95;
  v34 = 16394;
  v35 = 55LL;
  v36 = 96;
  v37 = 16394;
  v38 = 56LL;
  v39 = 97;
  v40 = 16394;
  v41 = 57LL;
  v42 = 100;
  v43 = 16392;
  v44 = 117LL;
  v45 = 103;
  v46 = 16394;
  v47 = 65;
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, unsigned __int64, char *))(**((_QWORD **)this + 3) + 56LL))(
         *((_QWORD *)this + 3),
         15LL,
         v4,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         (char *)this + 72);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
