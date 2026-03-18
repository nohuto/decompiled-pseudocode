/*
 * XREFs of ?_Change_array@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAXQEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@_K1@Z @ 0x1800E60B8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@QEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x1800E5780 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 104 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 104LL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 104 * a3;
  result = a2 + 104 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
