/*
 * XREFs of ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003DCF4
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800037B0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x180004D60 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003DC64 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DD6C (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180084B34 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::GetPrimaryAdapter(CDisplayManager *this, struct IDXGIAdapter1 **a2)
{
  int DXGIFactory; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
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
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802D9EC0, 2u, DXGIFactory, 0x5Bu, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802D9EC0, 2u, v6, 0x5Eu, 0LL);
LABEL_6:
    TranslateDXGIorD3DErrorInContext(v5, 4LL, &v9);
    v5 = (unsigned int)v9;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
