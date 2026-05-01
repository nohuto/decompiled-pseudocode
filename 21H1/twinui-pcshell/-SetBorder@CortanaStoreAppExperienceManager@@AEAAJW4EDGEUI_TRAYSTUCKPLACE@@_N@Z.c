/*
 * XREFs of ?SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x1801D1294
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801D0DA0 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SetBorder(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int LastError; // ebx
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+40h] [rbp-20h]
  _QWORD v15[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v15[0] = 0x40000000004LL;
  v15[1] = 0x10000LL;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      HIDWORD(v15[0]) = 1408;
    }
    else if ( a2 == 2 )
    {
      HIDWORD(v15[0]) = 1312;
    }
    else if ( a2 == 3 )
    {
      HIDWORD(v15[0]) = 1216;
      if ( a3 )
        HIDWORD(v15[0]) = 1248;
    }
  }
  v12 = 19;
  v13 = v15;
  v14 = 16;
  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = v4(v3, &v10);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 1184LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 1186LL;
    goto LABEL_13;
  }
  if ( (unsigned int)SetWindowCompositionAttribute(v11, &v12) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x4A3,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                  v8);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return LastError;
}
