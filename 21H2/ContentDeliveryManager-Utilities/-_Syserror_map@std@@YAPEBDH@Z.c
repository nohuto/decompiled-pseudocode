/*
 * XREFs of ?_Syserror_map@std@@YAPEBDH@Z @ 0x1800B2740
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007D50 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007DC0 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?default_error_condition@_System_error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x180007EC0 (-default_error_condition@_System_error_category@std@@UEBA-AVerror_condition@2@H@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall std::_Syserror_map(int a1)
{
  _QWORD *v1; // rax

  v1 = &unk_1800DC4E0;
  if ( !"address family not supported" )
    return 0LL;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( !v1[1] )
      return 0LL;
  }
  return (const char *)v1[1];
}
