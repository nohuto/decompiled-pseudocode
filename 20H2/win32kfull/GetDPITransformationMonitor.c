/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01E4F00
 * Callers:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F0C24 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F17E4 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     EditionDoPointerDPITransforms @ 0x1C01F1AB0 (EditionDoPointerDPITransforms.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01F1EB0 (PointerInfoCopyOutHelperInternal.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0251DC0 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetDPITransformationMonitor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 TopLevelWindow; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v8 = a1;
  v2 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( TopLevelWindow )
  {
    v10 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 256LL));
    if ( v10 )
    {
      v6 = *(_QWORD *)(a2 + 40);
      v9 = 0LL;
      PhysicalToLogicalDPIPoint(&v9, &v8, *(unsigned int *)(v6 + 288), &v10);
      if ( PtInRect((_DWORD *)(*(_QWORD *)(a2 + 40) + 88LL), v9) )
        return v10;
    }
    v2 = v8;
  }
  return MonitorFromPoint(v2, 2LL, 18LL, v5);
}
