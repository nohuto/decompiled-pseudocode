/*
 * XREFs of ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x18045F114
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18045DEF4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x18045FC70 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x18045FE10 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180460050 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppIdForSpecialCategoryApp(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  _QWORD *v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  unsigned __int64 v11; // [rsp+48h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  v8[0] = a1;
  if ( IsJavawExe(a2) )
  {
    TryGetMainClassNameFromJavaEngineProcess(v9, a3);
    if ( v10 )
    {
      v6 = v9;
      if ( v11 >= 8 )
        v6 = (_QWORD *)v9[0];
      v8[0] = v6;
      v8[1] = v10;
      ComposeWin32AppIdForJavaApp(&v12, a2, v8);
      *(_OWORD *)a1 = v12;
      *(__m128i *)(a1 + 16) = si128;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v12) = 0;
      std::wstring::_Tidy_deallocate(&v12);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 7LL;
      *(_WORD *)a1 = 0;
    }
    std::wstring::_Tidy_deallocate(v9);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
