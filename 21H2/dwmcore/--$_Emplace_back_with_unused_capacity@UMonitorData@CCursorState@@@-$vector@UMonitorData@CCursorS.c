/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAAEAUMonitorData@CCursorState@@$$QEAU23@@Z @ 0x180267BE4
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x18026B004 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CCursorState::MonitorData>::_Emplace_back_with_unused_capacity<CCursorState::MonitorData>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v2 = *(_QWORD *)a2;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(v2 + 12) = *(_OWORD *)(a2 + 12);
  *(_OWORD *)(v2 + 28) = *(_OWORD *)(a2 + 28);
  *(_OWORD *)(v2 + 44) = *(_OWORD *)(a2 + 44);
  *(_OWORD *)(v2 + 60) = *(_OWORD *)(a2 + 60);
  *(_DWORD *)(v2 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(v2 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(v2 + 104) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_DWORD *)(v2 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(v2 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(v2 + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(v2 + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(v2 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(v2 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(v2 + 136) = *(_DWORD *)(a2 + 136);
  *(_BYTE *)(v2 + 140) = *(_BYTE *)(a2 + 140);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 144;
  return result;
}
