/*
 * XREFs of ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800AD3AC
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800764B4 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x1800390C4 (-erase@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B92C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x18008B964 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::CommonHelper::StringUtils::RemoveSubstring(__int64 a1, char *a2, char *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  void *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  void *v14[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]
  unsigned __int64 v16; // [rsp+50h] [rbp-10h]

  v5 = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign((void **)a1, a2, v6);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( *(_WORD *)a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&a3[2 * v7] );
    v5 = v7;
  }
  std::wstring::assign(v14, a3, v5);
  v8 = (unsigned __int16 *)v14;
  v9 = v14[0];
  v10 = v16;
  if ( v16 >= 8 )
    v8 = (unsigned __int16 *)v14[0];
  v11 = std::wstring::find((char *)a1, v8, 0LL, v15);
  if ( v11 != -1LL )
  {
    std::wstring::erase((_QWORD *)a1, v11, v12);
    v10 = v16;
    v9 = v14[0];
  }
  if ( v10 >= 8 )
    operator delete(v9);
  return a1;
}
