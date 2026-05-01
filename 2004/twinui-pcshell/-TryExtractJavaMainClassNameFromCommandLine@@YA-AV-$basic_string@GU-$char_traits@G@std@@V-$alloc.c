/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18045FE50
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180460050 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180085338 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800AEF40 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800BC894 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?TryExtractJavaMainClassNameFromCommandLineRollback@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1800BCDC4 (-TryExtractJavaMainClassNameFromCommandLineRollback@@YA-AV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?TryGetNameFromPath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1800BCF30 (-TryGetNameFromPath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@@@details@wil@@QEAA_NXZ @ 0x1800BCFE4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_3.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180237B34 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x18045FE10 (-IsJavawExe@@YA_NPEBG@Z.c)
 */

_OWORD *__fastcall TryExtractJavaMainClassNameFromCommandLine(_OWORD *a1, __int64 a2)
{
  const unsigned __int16 **v4; // rax
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 **v6; // r15
  int JavaOption; // r14d
  int v8; // edi
  _WORD **v9; // rbx
  __int64 NameFromPath; // rax
  WCHAR *v11; // rcx
  __int64 v12; // rax
  int pNumArgs; // [rsp+20h] [rbp-39h] BYREF
  __int128 v15; // [rsp+28h] [rbp-31h] BYREF
  __m128i si128; // [rsp+38h] [rbp-21h]
  WCHAR v17[16]; // [rsp+48h] [rbp-11h] BYREF
  WCHAR v18[16]; // [rsp+68h] [rbp+Fh] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019>::GetImpl'::`2'::impl) )
  {
    std::wstring::wstring((__int64)&v15);
    pNumArgs = 0;
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      a2 = *(_QWORD *)a2;
    v4 = (const unsigned __int16 **)CommandLineToArgvW((LPCWSTR)a2, &pNumArgs);
    v6 = v4;
    if ( pNumArgs > 0 && IsJavawExe(*v4, v5) )
    {
      JavaOption = 0;
      v8 = 1;
      if ( pNumArgs > 1 )
      {
        v9 = (_WORD **)(v6 + 1);
        while ( **v9 == 45 )
        {
          if ( JavaOption == 2 )
            goto LABEL_18;
          std::wstring::wstring((__int64)v18);
          std::wstring::wstring((__int64)v17, *v9);
          JavaOption = GetJavaOption(v17, (__int64)v18);
          std::wstring::~wstring(v17);
          if ( JavaOption == 1 )
          {
            ++v8;
            ++v9;
          }
          else if ( JavaOption == 3 )
          {
            NameFromPath = TryGetNameFromPath((__int64)v17, v18);
            std::wstring::operator=((__int64)&v15, NameFromPath);
            std::wstring::~wstring(v17);
            v11 = v18;
            goto LABEL_17;
          }
          std::wstring::~wstring(v18);
          ++v8;
          ++v9;
          if ( v8 >= pNumArgs )
            goto LABEL_18;
        }
        std::wstring::wstring((__int64)v17, *v9);
        v12 = TryGetNameFromPath((__int64)v18, v17);
        std::wstring::operator=((__int64)&v15, v12);
        std::wstring::~wstring(v18);
        v11 = v17;
LABEL_17:
        std::wstring::~wstring(v11);
      }
    }
LABEL_18:
    LocalFree(v6);
    *a1 = v15;
    a1[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v15) = 0;
    std::wstring::~wstring(&v15);
  }
  else
  {
    TryExtractJavaMainClassNameFromCommandLineRollback((__int64)a1, a2);
  }
  return a1;
}
