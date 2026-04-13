/*
 * XREFs of ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180038B18
 * Callers:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180037230 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1800475D4 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004CF44 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800776E0 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x180094020 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x18009BA3C (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800B03B8 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800B1140 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 */

_QWORD *__fastcall std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &std::wstreambuf::`vftable';
  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = std::locale::_Init(1);
  else
    v2 = 0LL;
  a1[12] = v2;
  a1[3] = a1 + 1;
  a1[4] = a1 + 2;
  a1[7] = a1 + 5;
  a1[8] = a1 + 6;
  a1[10] = a1 + 9;
  a1[11] = (char *)a1 + 76;
  a1[2] = 0LL;
  *(_QWORD *)a1[8] = 0LL;
  *(_DWORD *)a1[11] = 0;
  *(_QWORD *)a1[3] = 0LL;
  *(_QWORD *)a1[7] = 0LL;
  *(_DWORD *)a1[10] = 0;
  return a1;
}
