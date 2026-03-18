/*
 * XREFs of ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18008D16C
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180023C60 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x180025210 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18008D0DC (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18008D1E4 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::GetPrimaryAdapter(CDisplayManager *this, struct IDXGIAdapter1 **a2)
{
  int DXGIFactory; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  CDisplayManager *v9; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIFactory5 *v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = this;
  *a2 = 0LL;
  v10 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v10);
  LODWORD(v9) = DXGIFactory;
  v5 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802DDBE0, 2u, DXGIFactory, 0x5Bu, 0LL);
    goto LABEL_6;
  }
  v6 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, struct IDXGIAdapter1 **))v10->lpVtbl->EnumAdapters1)(
         v10,
         0LL,
         a2);
  LODWORD(v9) = v6;
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802DDBE0, 2u, v6, 0x5Eu, 0LL);
LABEL_6:
    TranslateDXGIorD3DErrorInContext(v5, 4, &v9);
    v5 = (unsigned int)v9;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
