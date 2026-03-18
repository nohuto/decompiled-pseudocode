/*
 * XREFs of ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1C0336EAC
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C030C1C8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1C0057D24 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESS::ReportProcess(DXGPROCESS *this)
{
  __int64 v1; // r8

  v1 = *((unsigned int *)this + 106);
  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpppz_EtwWriteTransfer(*((_QWORD *)this + 76), &EventReportDxgProcessVm, v1);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0pxqt_EtwWriteTransfer(*((_QWORD *)this + 8), &EventReportDxgProcess, v1);
  }
}
