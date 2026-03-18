/*
 * XREFs of ?DxgkReportGlobalState@@YAXXZ @ 0x1C0264B6C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00232EC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0266CFC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DxgkReportGlobalState(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGGLOBAL::ReportState(Global);
}
