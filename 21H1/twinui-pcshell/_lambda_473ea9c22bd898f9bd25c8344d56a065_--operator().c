/*
 * XREFs of _lambda_473ea9c22bd898f9bd25c8344d56a065_::operator() @ 0x18041EE48
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_473ea9c22bd898f9bd25c8344d56a065_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x18041E560 (--$LambdaEnumWindowsProc@V_lambda_473ea9c22bd898f9bd25c8344d56a065_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_473ea9c22bd898f9bd25c8344d56a065_::operator()(__int64 a1, HWND a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, __int64 *, _QWORD, _QWORD); // r11
  int v9; // r10d
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  void *v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 *v21; // r8
  __int64 v23; // [rsp+50h] [rbp-19h] BYREF
  int v24; // [rsp+58h] [rbp-11h] BYREF
  int v25; // [rsp+60h] [rbp-9h] BYREF
  int *v26; // [rsp+68h] [rbp-1h]
  int v27; // [rsp+70h] [rbp+7h]
  __int64 v28; // [rsp+78h] [rbp+Fh] BYREF
  int v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+84h] [rbp+1Bh]
  _DWORD v31[4]; // [rsp+88h] [rbp+1Fh] BYREF
  struct tagRECT Rect; // [rsp+98h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v25 = 18;
  v26 = &v24;
  v27 = 4;
  if ( GetPropW(a2, L"DesktopWindow")
    && IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, &v25)
    && !v24 )
  {
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v4 = *(__m128i *)(*(_QWORD *)a1 + 168LL);
    v31[0] = _mm_cvtsi128_si32(v4) - Rect.left;
    v31[2] = v4.m128i_i32[2] - Rect.left;
    v31[3] = v4.m128i_i32[3] - Rect.top;
    v31[1] = v4.m128i_i32[1] - Rect.top;
    v23 = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *))(*(_QWORD *)v5 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v7 = v6(v5, **(_QWORD **)(a1 + 8), a2, 0LL, 0LL, v31, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v23);
    if ( v7 >= 0 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v23 + 24LL);
      v9 = *(_DWORD *)(*(_QWORD *)a1 + 180LL);
      v10 = *(_DWORD *)(*(_QWORD *)a1 + 172LL);
      v11 = *(_DWORD *)(*(_QWORD *)a1 + 176LL);
      v12 = *(_DWORD *)(*(_QWORD *)a1 + 168LL);
      v28 = 0LL;
      v29 = v11 - v12;
      v30 = v9 - v10;
      v13 = v8(v23, &v28, 0LL, 0LL);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x191,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v13);
      LOBYTE(v14) = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 152LL))(v23, 0LL, v14);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x192,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v15);
      v16 = *(_QWORD **)(a1 + 16);
      v17 = v23;
      v28 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
      v19 = 0;
      v20 = v16[1];
      if ( v20 != v16[3]
        || (v19 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v16,
                    v20 + 1,
                    v18),
            v19 >= 0) )
      {
        v21 = (__int64 *)(*v16 + 8 * v16[1]++);
        if ( v21 )
        {
          *v21 = 0LL;
          if ( v21 != &v28 )
          {
            *v21 = v17;
            v28 = 0LL;
          }
        }
      }
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x193,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18F,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  return 1LL;
}
