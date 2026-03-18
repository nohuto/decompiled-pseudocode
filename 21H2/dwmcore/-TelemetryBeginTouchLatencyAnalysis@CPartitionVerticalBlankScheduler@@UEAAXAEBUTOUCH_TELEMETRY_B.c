/*
 * XREFs of ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x180015A80
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180015B80 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBU.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003D75C (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  CDisplayManager *v7; // rcx
  struct IDXGIAdapter1 *v8[2]; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v9[296]; // [rsp+50h] [rbp-168h] BYREF
  struct _LUID v10; // [rsp+178h] [rbp-40h] BYREF
  int v11; // [rsp+180h] [rbp-38h]

  memset_0(v9, 0, 0x138uLL);
  v8[0] = 0LL;
  if ( (int)CDisplayManager::GetPrimaryAdapter(v7, v8) >= 0 )
    ((void (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v8[0]->lpVtbl->GetDesc1)(v8[0], v9);
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
    (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
    a2,
    2 - (unsigned int)(*(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) != 0),
    a4,
    **((_QWORD **)this + 564),
    2 - (*(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) != 0),
    &v10,
    (v11 & 2) != 0);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(v8);
}
