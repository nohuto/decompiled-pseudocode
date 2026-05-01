/*
 * XREFs of ?ResultFromCaughtException_WinRt@details@wil@@YAJPEA_W_KPEA_N@Z @ 0x1802EC0B0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008DF14 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_WinRt(
        wil::details *this,
        wchar_t *a2,
        __int64 a3,
        bool *a4)
{
  __int64 *v4; // rbp
  int v5; // eax
  __int64 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  const wil::ResultException *v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h] BYREF
  const std::bad_alloc *v10; // [rsp+30h] [rbp-38h] BYREF
  const wil::ResultException *v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  const std::bad_alloc *v13; // [rsp+48h] [rbp-20h] BYREF
  std::exception *v14; // [rsp+50h] [rbp-18h] BYREF
  wchar_t *v15; // [rsp+70h] [rbp+8h]
  wchar_t *v16; // [rsp+70h] [rbp+8h]
  wchar_t *v17; // [rsp+70h] [rbp+8h]
  wchar_t *v18; // [rsp+70h] [rbp+8h]
  wchar_t *v19; // [rsp+70h] [rbp+8h]
  wchar_t *v20; // [rsp+70h] [rbp+8h]
  wchar_t *v21; // [rsp+70h] [rbp+8h]
  wchar_t *v22; // [rsp+78h] [rbp+10h]
  unsigned __int64 v23; // [rsp+78h] [rbp+10h]
  wchar_t *v24; // [rsp+78h] [rbp+10h]
  wchar_t *v25; // [rsp+78h] [rbp+10h]
  unsigned __int64 v26; // [rsp+78h] [rbp+10h]
  wchar_t *v27; // [rsp+78h] [rbp+10h]
  wchar_t *v28; // [rsp+78h] [rbp+10h]
  _BYTE *v29; // [rsp+80h] [rbp+18h]
  _BYTE *v30; // [rsp+80h] [rbp+18h]

  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v8 )
    {
      wil::details::MaybeGetExceptionString(v8, v15, v22);
      return;
    }
    catch ( Platform::Exception *v9 )
    {
      *v29 = 1;
      wil::details::MaybeGetExceptionString(v9, v16, v23);
      return;
    }
    catch ( const std::bad_alloc *v10 )
    {
      wil::details::MaybeGetExceptionString(v10, v17, v24);
      return;
    }
    catch ( ... )
    {
      v6 = &v7;
      v4 = v6;
      v5 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v6[14], (wchar_t *)v6[15]);
      *((_DWORD *)v4 + 34) = v5;
      if ( v5 < 0 )
        return;
      return;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v11 )
  {
    wil::details::MaybeGetExceptionString(v11, v18, v25);
    return;
  }
  catch ( Platform::Exception *v12 )
  {
    *v30 = 1;
    wil::details::MaybeGetExceptionString(v12, v19, v26);
    return;
  }
  catch ( const std::bad_alloc *v13 )
  {
    wil::details::MaybeGetExceptionString(v13, v20, v27);
    return;
  }
  catch ( std::exception *v14 )
  {
    wil::details::MaybeGetExceptionString(v14, v21, v28);
    return;
  }
  catch ( ... )
  {
    return;
  }
}
