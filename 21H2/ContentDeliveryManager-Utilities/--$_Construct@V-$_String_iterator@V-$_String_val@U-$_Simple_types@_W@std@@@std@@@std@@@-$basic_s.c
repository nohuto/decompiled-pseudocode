/*
 * XREFs of ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180050EA4
 * Callers:
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004D5C4 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180067DF8 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180018A6C (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003AED0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

char __fastcall std::string::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<wchar_t>>>>(
        __int64 a1,
        char *a2,
        char *a3)
{
  _UNKNOWN **v3; // rax
  char *v5; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  v5 = a2;
  v7 = (a3 - a2) >> 1;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 <= v7 && *(_QWORD *)(a1 + 24) != v7 )
  {
    LOBYTE(v3) = std::string::_Grow((void **)a1, v7, 1);
    if ( (_BYTE)v3 )
    {
      if ( *(_QWORD *)(a1 + 24) < 0x10uLL )
        v3 = (_UNKNOWN **)a1;
      else
        v3 = *(_UNKNOWN ***)a1;
      *(_QWORD *)(a1 + 16) = v8;
      *((_BYTE *)v3 + v8) = 0;
    }
  }
  while ( v5 != a3 )
  {
    try
    {
      LOBYTE(v3) = (unsigned __int8)std::string::append((char *)a1, 1uLL, *v5);
      v5 += 2;
    }
    catch ( ... )
    {
      std::string::_Tidy((void **)a1, 1, 0LL);
      throw;
    }
  }
  return (char)v3;
}
