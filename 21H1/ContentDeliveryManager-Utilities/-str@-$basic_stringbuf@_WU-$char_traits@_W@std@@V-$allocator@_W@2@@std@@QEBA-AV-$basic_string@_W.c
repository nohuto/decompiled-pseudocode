/*
 * XREFs of ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800777B0
 * Callers:
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180075080 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x180097BBC (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800A8FBC (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180034B5C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::wstringbuf::str(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r8
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v9[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  unsigned __int64 v11; // [rsp+40h] [rbp-10h]

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    v3 = *(unsigned __int64 **)(a1 + 64);
    if ( *v3 )
    {
      v4 = *(_QWORD *)(a1 + 104);
      if ( v4 < *v3 )
        v4 = *v3;
      v5 = **(char ***)(a1 + 32);
      v6 = v4 - (_QWORD)v5;
      goto LABEL_6;
    }
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
  {
    v7 = **(_QWORD **)(a1 + 56);
    if ( v7 )
    {
      v5 = **(char ***)(a1 + 24);
      v6 = v7 + 2LL * **(int **)(a1 + 80) - (_QWORD)v5;
LABEL_6:
      v11 = 7LL;
      v10 = 0LL;
      LOWORD(v9[0]) = 0;
      std::wstring::assign(v9, v5, v6 >> 1);
      a2[3] = 7LL;
      a2[2] = 0LL;
      *(_WORD *)a2 = 0;
      goto LABEL_11;
    }
  }
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  v11 = 7LL;
  v10 = 0LL;
  LOWORD(v9[0]) = 0;
LABEL_11:
  std::wstring::_Assign_rv(a2, v9);
  if ( v11 >= 8 )
    operator delete(v9[0]);
  return a2;
}
