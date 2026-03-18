/*
 * XREFs of ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18005EAF0
 * Callers:
 *     ??$_Emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18005E9DC (--$_Emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tset_trai.c)
 *     InteractionLatencyTelemetry::_anonymous_namespace_::NeedToSendSummary @ 0x1801D5238 (InteractionLatencyTelemetry--_anonymous_namespace_--NeedToSendSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::compare(char *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r10
  unsigned int v5; // edi
  unsigned __int16 v6; // r8
  signed __int64 v7; // rcx
  __int64 result; // rax
  bool v9; // cc
  unsigned __int16 v10; // r8

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  v4 = v3;
  if ( v2 < v3 )
    v4 = v2;
  v5 = 0;
  if ( !v4 )
  {
LABEL_15:
    if ( v3 >= v2 )
    {
      LOBYTE(v5) = v3 > v2;
      return v5;
    }
    return 0xFFFFFFFFLL;
  }
  v6 = *(_WORD *)a1;
  if ( *(_WORD *)a1 < *(_WORD *)a2 )
    return 0xFFFFFFFFLL;
  v7 = a1 - (char *)a2;
  result = 1LL;
  v9 = v6 <= *(_WORD *)a2;
  while ( v9 )
  {
    if ( v4 == 1 )
      goto LABEL_15;
    a2 = (_QWORD *)((char *)a2 + 2);
    --v4;
    v10 = *(_WORD *)((char *)a2 + v7);
    v9 = v10 <= *(_WORD *)a2;
    if ( v10 < *(_WORD *)a2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
