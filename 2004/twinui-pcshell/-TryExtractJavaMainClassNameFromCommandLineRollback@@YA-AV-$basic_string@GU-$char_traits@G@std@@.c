/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLineRollback@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1800BCDC4
 * Callers:
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18045FE50 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?_Xran@?$_String_val@U?$_Simple_types@G@std@@@std@@SAXXZ @ 0x1801EF27C (-_Xran@-$_String_val@U-$_Simple_types@G@std@@@std@@SAXXZ.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x1801EF2C8 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KG_K@Z.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x18045FE10 (-IsJavawExe@@YA_NPEBG@Z.c)
 */

__int64 __fastcall TryExtractJavaMainClassNameFromCommandLineRollback(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rax
  const unsigned __int16 **v4; // rax
  const unsigned __int16 **v5; // r15
  int v6; // edi
  __int64 v7; // rsi
  _WORD **v8; // r14
  __int128 *v9; // rax
  int pNumArgs; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h]

  v2 = (const WCHAR *)a2;
  pNumArgs = 0;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(const WCHAR **)a2;
  v4 = (const unsigned __int16 **)CommandLineToArgvW(v2, &pNumArgs);
  v5 = v4;
  if ( pNumArgs && IsJavawExe(*v4) && (v6 = 1, pNumArgs > 1) )
  {
    v7 = 1LL;
    v8 = (_WORD **)(v5 + 2);
    while ( 1 )
    {
      std::wstring::wstring((__int64)&v12, v5[v7]);
      if ( !(_QWORD)v13 )
      {
        std::_String_val<std::_Simple_types<unsigned short>>::_Xran();
        JUMPOUT(0x1800BCF2ALL);
      }
      v9 = &v12;
      if ( *((_QWORD *)&v13 + 1) >= 8uLL )
        v9 = (__int128 *)v12;
      if ( *(_WORD *)v9 != 45 )
        break;
      if ( std::wstring::find(&v12, 61LL, 0LL) == -1 && v6 + 1 < pNumArgs && **v8 != 45 )
      {
        ++v6;
        ++v7;
        ++v8;
      }
      std::wstring::_Tidy_deallocate(&v12);
      ++v6;
      ++v7;
      ++v8;
      if ( v6 >= pNumArgs )
        goto LABEL_16;
    }
    *(_OWORD *)a1 = v12;
    *(_OWORD *)(a1 + 16) = v13;
    *(_QWORD *)&v13 = 0LL;
    *((_QWORD *)&v13 + 1) = 7LL;
    LOWORD(v12) = 0;
    std::wstring::_Tidy_deallocate(&v12);
  }
  else
  {
LABEL_16:
    *(_WORD *)a1 = 0;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return a1;
}
