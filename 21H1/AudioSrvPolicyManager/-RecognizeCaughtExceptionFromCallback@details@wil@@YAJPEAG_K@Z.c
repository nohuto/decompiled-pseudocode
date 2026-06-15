/*
 * XREFs of ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1800036A4
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x180040841 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$2.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800406C3 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::RecognizeCaughtExceptionFromCallback(wil::details *this, unsigned __int16 *a2)
{
  int result; // eax
  __int64 *v4; // rbp
  wchar_t *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  __int64 *v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+18h]

  result = wil::g_pfnResultFromCaughtException();
  if ( result >= 0 )
    goto LABEL_14;
  while ( this )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v11 )
    {
      v9 = &v10;
      v4 = v9;
      v5 = (wchar_t *)v9[8];
      if ( v5 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4[4] + 8LL))(v4[4]);
        StringCchPrintfW(v5, v4[9], L"std::exception: %hs", v6);
      }
      v7 = *((_DWORD *)v4 + 20);
      v8 = -2147024322;
      if ( v7 >= 0 )
        v7 = v8;
      *((_DWORD *)v4 + 20) = v7;
      return v12;
    }
    catch ( ... )
    {
      return v12;
    }
  }
  return result;
}
