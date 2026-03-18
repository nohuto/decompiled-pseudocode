/*
 * XREFs of ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C020977C
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C02095AC (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(DXGMONITOR *this)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  char v4; // r8
  char v5; // r8
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v2 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 184LL))(v2, &v7) < 0 )
    return 3221226021LL;
  v3 = v7;
  v4 = *((_BYTE *)this + 177) | 1;
  if ( (unsigned int)v7 >= HIDWORD(v7) )
    v4 = *((_BYTE *)this + 177) & 0xFE;
  v5 = v4 & 0xFD;
  if ( (unsigned int)v7 >= HIDWORD(v7) )
    v3 = HIDWORD(v7);
  *((_BYTE *)this + 177) = (v3 < 0x400 ? 2 : 0) | v5;
  return 0LL;
}
