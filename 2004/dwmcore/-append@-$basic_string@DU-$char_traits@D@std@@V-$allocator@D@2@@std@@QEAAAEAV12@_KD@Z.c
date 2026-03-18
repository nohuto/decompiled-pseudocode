/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180199854
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18019A050 (-to_bytes@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$alloc.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1801987DC (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 */

void **__fastcall std::string::append(__int64 a1)
{
  __int64 v1; // rdx
  bool v2; // cf
  _BYTE *v3; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v1) < 8 )
    return std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>((void **)a1);
  v2 = *(_QWORD *)(a1 + 24) < 0x10uLL;
  *(_QWORD *)(a1 + 16) = v1 + 8;
  v3 = (_BYTE *)a1;
  if ( !v2 )
    v3 = *(_BYTE **)a1;
  *(_QWORD *)&v3[v1] = 0LL;
  v3[v1 + 8] = 0;
  return (void **)a1;
}
