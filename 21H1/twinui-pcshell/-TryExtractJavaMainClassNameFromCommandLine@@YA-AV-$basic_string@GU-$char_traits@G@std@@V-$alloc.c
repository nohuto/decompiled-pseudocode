/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18043C01C
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x18043C1CC (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008BF18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1801CB7BC (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x18043BFDC (-IsJavawExe@@YA_NPEBG@Z.c)
 */

__int64 __fastcall TryExtractJavaMainClassNameFromCommandLine(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rax
  const unsigned __int16 **v4; // rax
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 **v6; // r15
  int v7; // edi
  __int64 v8; // rsi
  _WORD **v9; // r14
  __int128 *v10; // rax
  __int128 *v11; // r9
  _WORD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  int pNumArgs; // [rsp+20h] [rbp-40h] BYREF
  __int16 v17; // [rsp+28h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h]

  v2 = (const WCHAR *)a2;
  pNumArgs = 0;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(const WCHAR **)a2;
  v4 = (const unsigned __int16 **)CommandLineToArgvW(v2, &pNumArgs);
  v6 = v4;
  if ( pNumArgs && IsJavawExe(*v4, v5) && (v7 = 1, pNumArgs > 1) )
  {
    v8 = 1LL;
    v9 = (_WORD **)(v6 + 2);
    while ( 1 )
    {
      std::wstring::wstring((__int64)&v18, v6[v8]);
      if ( !(_QWORD)v19 )
      {
        std::_Xout_of_range("invalid string position");
        JUMPOUT(0x18043C1C3LL);
      }
      v10 = &v18;
      if ( *((_QWORD *)&v19 + 1) >= 8uLL )
        v10 = (__int128 *)v18;
      if ( *(_WORD *)v10 != 45 )
        break;
      v11 = &v18;
      if ( *((_QWORD *)&v19 + 1) >= 8uLL )
        v11 = (__int128 *)v18;
      v17 = 61;
      v12 = std::_WChar_traits<unsigned short>::find(v11, v19, &v17);
      if ( v12 )
        v14 = ((__int64)v12 - v13) >> 1;
      else
        v14 = -1LL;
      if ( v14 == -1 && v7 + 1 < pNumArgs && **v9 != 45 )
      {
        ++v7;
        ++v8;
        ++v9;
      }
      std::wstring::_Tidy_deallocate(&v18);
      ++v7;
      ++v8;
      ++v9;
      if ( v7 >= pNumArgs )
        goto LABEL_22;
    }
    *(_OWORD *)a1 = v18;
    *(_OWORD *)(a1 + 16) = v19;
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = 7LL;
    LOWORD(v18) = 0;
    std::wstring::_Tidy_deallocate(&v18);
  }
  else
  {
LABEL_22:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
