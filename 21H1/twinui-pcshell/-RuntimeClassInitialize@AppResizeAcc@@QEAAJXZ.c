/*
 * XREFs of ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x1803F6C90
 * Callers:
 *     ??$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z @ 0x1803F616C (--$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180032EA8 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppResizeAcc::RuntimeClassInitialize(AppResizeAcc *this)
{
  LPVOID *v1; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // ebx
  _WORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  LPVOID v11; // rax
  _WORD *v13; // rcx
  char *v14; // rax
  __int16 v15; // dx
  const char *v16; // r9
  WNDCLASSEXW v17; // [rsp+60h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v1 = (LPVOID *)((char *)this + 72);
  v3 = *((_QWORD *)this + 11);
  if ( v3 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v1);
    if ( *v1 )
      v3 = (unsigned __int64)v1[1] + 1;
    else
      v3 = 0LL;
    v1[2] = (LPVOID)v3;
  }
  v4 = 15LL;
  if ( v3 )
  {
    if ( v3 >= 0xF )
      goto LABEL_25;
    v7 = 2 * v3;
    if ( is_mul_ok(v3, 2uLL) )
    {
      v5 = 0;
    }
    else
    {
      v7 = -1LL;
      v5 = -2147024362;
    }
    if ( v5 < 0 )
      goto LABEL_24;
    v8 = 15LL;
    v9 = v7 - v3;
    v10 = v3 + 2048;
    if ( v9 <= 0x800 )
      v10 = v7;
    if ( v10 >= 0xF )
      v8 = v10;
    v11 = CoTaskMemRealloc(*v1, 2 * v8);
    if ( v11 )
    {
      v1[2] = (LPVOID)v8;
      *v1 = v11;
      goto LABEL_23;
    }
  }
  else
  {
    if ( !is_mul_ok(0xFuLL, 2uLL) )
    {
      v5 = -2147024362;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = 0;
    v6 = CoTaskMemAlloc(0x1EuLL);
    if ( v6 )
    {
      v1[2] = (LPVOID)15;
      *v1 = v6;
      *v6 = 0;
      goto LABEL_23;
    }
  }
  v5 = -2147024882;
LABEL_23:
  if ( v5 < 0 )
    goto LABEL_24;
LABEL_25:
  v13 = *v1;
  v14 = (char *)((char *)L"App Resize Bar" - (_BYTE *)*v1);
  while ( --v4 )
  {
    v15 = *(_WORD *)((char *)v13 + (_QWORD)v14);
    if ( !v15 )
      break;
    *v13++ = v15;
  }
  *v13 = 0;
  v1[1] = (LPVOID)14;
  v17.cbSize = 80;
  memset_0(&v17.style, 0, 0x4CuLL);
  v17.cbWndExtra = 8;
  v17.lpfnWndProc = (WNDPROC)CWRLImpWndProc<JointResizeAcc>::s_WndProcBase;
  v17.hInstance = &_ImageBase;
  v17.lpszClassName = L"AppResizeAcc";
  RegisterClassExW(&v17);
  CreateWindowExW(0x8200000u, L"AppResizeAcc", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
  if ( *((_QWORD *)this + 5) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x63,
             (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
             v16);
}
