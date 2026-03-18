/*
 * XREFs of _GetDPITransformationMonitor@12 @ 0x1510B9
 * Callers:
 *     _EditionDoPointerDPITransforms@112 @ 0xF1D18 (_EditionDoPointerDPITransforms@112.c)
 *     ?MakePointerMessageWorker@@YGHPBUtagPOINTER_INFO@@UtagPOINT@@HHHIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z @ 0x15AF28 (-MakePointerMessageWorker@@YGHPBUtagPOINTER_INFO@@UtagPOINT@@HHHIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@.c)
 *     ?xxxQueryLegacyActivation@@YGJPAUtagWND@@0FPBUtagPOINTEREVENTINT@@@Z @ 0x15B7A9 (-xxxQueryLegacyActivation@@YGJPAUtagWND@@0FPBUtagPOINTEREVENTINT@@@Z.c)
 *     _PointerInfoCopyOutHelperInternal@28 @ 0x15BB5F (_PointerInfoCopyOutHelperInternal@28.c)
 *     ?GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1AE0E2 (-GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

int __thiscall GetDPITransformationMonitor(_DWORD *this, int a2, int a3)
{
  int TopLevelWindow; // eax
  int v6; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h]

  TopLevelWindow = _GetTopLevelWindow((int)this);
  if ( TopLevelWindow
    && (v6 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(TopLevelWindow + 20) + 164))) != 0
    && (v7 = 0,
        v8 = 0,
        PhysicalToLogicalDPIPoint(&v7, &a2, *(_DWORD *)(this[5] + 184), &v6),
        PtInRect((_DWORD *)(this[5] + 52), v7, v8)) )
  {
    return v6;
  }
  else
  {
    return _MonitorFromPoint(a2, a3, 2u, 18);
  }
}
