/*
 * XREFs of ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180134FF0
 * Callers:
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x180134970 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x1801362FC (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180136C4C (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180060190 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x180133C50 (--$_Emplace_reallocate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall AtmosCheck::GetCurrentEndpointsUnderLock(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rbx
  _WORD *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v5 = *(_QWORD **)(a1 + 472);
  while ( 1 )
  {
    v5 = (_QWORD *)*v5;
    if ( v5 == *(_QWORD **)(a1 + 472) )
      break;
    v6 = v5 + 2;
    if ( v5[5] >= 8uLL )
      v6 = *(_WORD **)v6;
    std::wstring::wstring((__int64)&v10, v6);
    v7 = a2[1];
    if ( a2[2] == v7 )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(a2, v7, (__int64)&v10);
      v8 = *((_QWORD *)&v11 + 1);
    }
    else
    {
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_OWORD *)v7 = v10;
      *(_OWORD *)(v7 + 16) = v11;
      *(_QWORD *)&v11 = 0LL;
      v8 = 7LL;
      *((_QWORD *)&v11 + 1) = 7LL;
      LOWORD(v10) = 0;
      a2[1] += 32LL;
    }
    if ( v8 >= 8 )
      std::_Deallocate<16,0>((void *)v10, (const struct std::nothrow_t *)(2 * v8 + 2));
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
