/*
 * XREFs of ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180091894
 * Callers:
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180029ED4 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x180161100 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::compare(char *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r10
  __int64 result; // rax
  unsigned __int16 v6; // r8
  signed __int64 v7; // rcx
  bool v8; // cc
  unsigned __int16 v9; // r8

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  v4 = v2;
  if ( v2 >= v3 )
    v4 = v3;
  result = 0LL;
  if ( v4 )
  {
    v6 = *(_WORD *)a1;
    if ( *(_WORD *)a1 >= *(_WORD *)a2 )
    {
      v7 = a1 - (char *)a2;
      v8 = v6 <= *(_WORD *)a2;
      while ( v8 )
      {
        if ( v4 == 1 )
          goto LABEL_10;
        a2 = (_QWORD *)((char *)a2 + 2);
        --v4;
        v9 = *(_WORD *)((char *)a2 + v7);
        v8 = v9 <= *(_WORD *)a2;
        if ( v9 < *(_WORD *)a2 )
          goto LABEL_9;
      }
      result = 1LL;
    }
    else
    {
LABEL_9:
      result = 0xFFFFFFFFLL;
    }
  }
LABEL_10:
  if ( !(_DWORD)result )
  {
    if ( v3 < v2 )
      return 0xFFFFFFFFLL;
    else
      return v3 > v2;
  }
  return result;
}
