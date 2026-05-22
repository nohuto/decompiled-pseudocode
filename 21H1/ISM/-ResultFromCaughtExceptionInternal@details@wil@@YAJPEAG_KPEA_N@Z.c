/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x180067280
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        wil::details *this,
        unsigned __int16 *a2,
        _BYTE *a3,
        bool *a4)
{
  __int64 result; // rax
  const wil::ResultException *v8; // rbx
  __int64 *v9; // rbp
  int v10; // eax
  const wil::ResultException *v11; // rbx
  __int64 *v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  const wil::ResultException *v14; // [rsp+20h] [rbp-48h] BYREF
  const std::bad_alloc *v15; // [rsp+28h] [rbp-40h] BYREF
  const wil::ResultException *v16; // [rsp+30h] [rbp-38h] BYREF
  const std::bad_alloc *v17; // [rsp+38h] [rbp-30h] BYREF
  std::exception *v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h]
  const struct wil::ResultException *v20; // [rsp+70h] [rbp+8h]
  const struct std::exception *v21; // [rsp+70h] [rbp+8h]
  const struct wil::ResultException *v22; // [rsp+70h] [rbp+8h]
  const struct std::exception *v23; // [rsp+70h] [rbp+8h]
  const struct std::exception *v24; // [rsp+70h] [rbp+8h]
  unsigned __int16 *v25; // [rsp+78h] [rbp+10h]
  unsigned __int16 *v26; // [rsp+78h] [rbp+10h]
  unsigned __int16 *v27; // [rsp+78h] [rbp+10h]
  unsigned __int16 *v28; // [rsp+78h] [rbp+10h]
  unsigned __int16 *v29; // [rsp+78h] [rbp+10h]
  _BYTE *v30; // [rsp+80h] [rbp+18h]
  _BYTE *v31; // [rsp+80h] [rbp+18h]

  if ( this )
    *(_WORD *)this = 0;
  *a3 = 0;
  if ( !g_pfnResultFromCaughtException_CppWinRt
    || (result = g_pfnResultFromCaughtException_CppWinRt(this, a2, a3, a4), (int)result >= 0) )
  {
    if ( !g_pfnResultFromCaughtException_WinRt )
    {
      if ( wil::g_pfnResultFromCaughtException )
      {
        try
        {
          throw;
        }
        catch ( const wil::ResultException *v14 )
        {
          *v30 = 1;
          v8 = v14;
          wil::details::MaybeGetExceptionString(v14, v20, v25);
          return *((unsigned int *)v8 + 7);
        }
        catch ( const std::bad_alloc *v15 )
        {
          wil::details::MaybeGetExceptionString(v15, v21, v26);
          return 2147942414LL;
        }
        catch ( ... )
        {
          v12 = &v13;
          v9 = v12;
          v10 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v12[14], (unsigned __int16 *)v12[15]);
          *((_DWORD *)v9 + 28) = v10;
          if ( v10 < 0 )
            return (unsigned int)v19;
          return 0LL;
        }
      }
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v16 )
      {
        *v31 = 1;
        v11 = v16;
        wil::details::MaybeGetExceptionString(v16, v22, v27);
        return *((unsigned int *)v11 + 7);
      }
      catch ( const std::bad_alloc *v17 )
      {
        wil::details::MaybeGetExceptionString(v17, v23, v28);
        return 2147942414LL;
      }
      catch ( std::exception *v18 )
      {
        wil::details::MaybeGetExceptionString(v18, v24, v29);
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
