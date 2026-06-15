/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x180003850
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800406C3 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        wil::details *this,
        unsigned __int16 *a2,
        _BYTE *a3,
        const struct wil::FailureInfo *a4)
{
  __int64 result; // rax
  const wil::ResultException *v8; // rbx
  wchar_t *v9; // rbx
  __int64 v10; // rax
  _BYTE *v11; // rbp
  wil *v12; // rcx
  unsigned __int16 *v13; // rdx
  __int64 v14; // rbx
  const struct wil::FailureInfo *v15; // r9
  _BYTE *v16; // rbp
  wchar_t *v17; // rbx
  __int64 v18; // rax
  _BYTE *v19; // rbp
  wchar_t *v20; // rbx
  __int64 v21; // rax
  _BYTE *v22; // rdx
  _BYTE *v23; // rdx
  _BYTE *v24; // rdx
  _BYTE v25[32]; // [rsp+0h] [rbp-78h] BYREF
  wil::details *v26; // [rsp+20h] [rbp-58h]
  unsigned __int16 *v27; // [rsp+28h] [rbp-50h]
  _BYTE *v28; // [rsp+30h] [rbp-48h]
  const wil::ResultException *v29; // [rsp+38h] [rbp-40h] BYREF
  const wil::ResultException *v30; // [rsp+40h] [rbp-38h] BYREF
  const std::bad_alloc *v31; // [rsp+48h] [rbp-30h] BYREF
  const std::bad_alloc *v32; // [rsp+50h] [rbp-28h] BYREF
  std::exception *v33; // [rsp+58h] [rbp-20h] BYREF

  v26 = this;
  v27 = a2;
  v28 = a3;
  if ( this )
    *(_WORD *)this = 0;
  *a3 = 0;
  if ( !g_pfnResultFromCaughtException_CppWinRt
    || (result = g_pfnResultFromCaughtException_CppWinRt(this, a2, a3, a4), (int)result >= 0) )
  {
    if ( !g_pfnResultFromCaughtException_WinRt )
    {
      if ( wil::g_pfnResultFromCaughtException )
        throw;
      try
      {
      }
      catch ( const wil::ResultException *v29 )
      {
        *v28 = 1;
        if ( v26 && v27 )
        {
          v8 = v29;
          wil::GetFailureLogString(v26, v27, (__int64)v29 + 24, a4);
        }
        else
        {
          v8 = v29;
        }
        return *((unsigned int *)v8 + 7);
      }
      catch ( const std::bad_alloc *v31 )
      {
        v9 = (wchar_t *)v26;
        if ( v26 )
        {
          v10 = (*(__int64 (__fastcall **)(const std::bad_alloc *))(*(_QWORD *)v31 + 8LL))(v31);
          StringCchPrintfW(v9, (__int64)v27, L"std::exception: %hs", v10);
        }
        return 2147942414LL;
      }
      catch ( ... )
      {
        LODWORD(v26) = wil::details::RecognizeCaughtExceptionFromCallback(v26, v27);
        if ( (int)v26 < 0 )
          return (unsigned int)v26;
        return 0LL;
      }
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v30 )
      {
        v22 = v25;
        v11 = v22;
        **((_BYTE **)v22 + 6) = 1;
        v12 = (wil *)*((_QWORD *)v22 + 4);
        if ( v12 && (v13 = (unsigned __int16 *)*((_QWORD *)v11 + 5)) != 0LL )
        {
          v14 = *((_QWORD *)v11 + 8);
          wil::GetFailureLogString(v12, v13, v14 + 24, v15);
        }
        else
        {
          v14 = *((_QWORD *)v11 + 8);
        }
        *((_DWORD *)v11 + 8) = *(_DWORD *)(v14 + 28);
        return (unsigned int)v26;
      }
      catch ( const std::bad_alloc *v32 )
      {
        v23 = v25;
        v16 = v23;
        v17 = (wchar_t *)*((_QWORD *)v23 + 4);
        if ( v17 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v16 + 10) + 8LL))(*((_QWORD *)v16 + 10));
          StringCchPrintfW(v17, *((_QWORD *)v16 + 5), L"std::exception: %hs", v18);
        }
        return 2147942414LL;
      }
      catch ( std::exception *v33 )
      {
        v24 = v25;
        v19 = v24;
        v20 = (wchar_t *)*((_QWORD *)v24 + 4);
        if ( v20 )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 11) + 8LL))(*((_QWORD *)v19 + 11));
          StringCchPrintfW(v20, *((_QWORD *)v19 + 5), L"std::exception: %hs", v21);
        }
        return 2147942974LL;
      }
      catch ( ... )
      {
        return 0LL;
      }
    }
    return g_pfnResultFromCaughtException_WinRt(this, a2, a3, a4);
  }
  return result;
}
