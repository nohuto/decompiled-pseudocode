/*
 * XREFs of ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180071680
 * Callers:
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800718EC (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800757F4 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006B134 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B30C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x18007A794 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x18008B3D4 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Windows::Services::TargetedContent::Internal::NormalizedString(void **a1, char *a2)
{
  unsigned __int64 v3; // r8
  void **v4; // rax
  __int64 v5; // rcx

  a1[3] = (void *)7;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)&a2[2 * v3] );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign(a1, a2, v3);
  while ( 1 )
  {
    v5 = std::wstring::find(a1, L"-", 0LL, 1LL);
    if ( v5 == -1 )
      break;
    v4 = (void **)std::wstring::replace(a1, v5, 1LL, L"%", asc_1801112F8[0] != 0);
    if ( a1 != v4 )
      std::wstring::assign(a1, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  }
  return a1;
}
