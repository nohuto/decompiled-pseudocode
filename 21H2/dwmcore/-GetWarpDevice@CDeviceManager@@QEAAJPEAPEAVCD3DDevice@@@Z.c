/*
 * XREFs of ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802772A0
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003DF5C (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180268E4C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180277568 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall CDeviceManager::GetWarpDevice(CDeviceManager *this, struct CD3DDevice **a2)
{
  unsigned int v2; // ebx
  _BYTE *v4; // rcx
  __int64 i; // rax
  struct _LUID *WarpAdapterLuid; // rax
  CDeviceManager *v7; // rcx
  int Device; // eax
  __int64 v9; // rcx
  int v10; // edi
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v12 = &stru_1803D75A8;
  EnterCriticalSection(&stru_1803D75A8);
  for ( i = xmmword_1803D75D0; i != *((_QWORD *)&xmmword_1803D75D0 + 1); i += 16LL )
  {
    v4 = *(_BYTE **)i;
    if ( *(int *)(*(_QWORD *)i + 1088LL) >= 0 && v4[1509] )
    {
      *a2 = (struct CD3DDevice *)v4;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
      goto LABEL_9;
    }
  }
  WarpAdapterLuid = (struct _LUID *)CDisplayManager::GetWarpAdapterLuid((CDisplayManager *)v4);
  Device = CDeviceManager::GetDevice(v7, *WarpAdapterLuid, a2);
  v10 = Device;
  if ( Device < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180377E10, 2LL, Device, 0x10Cu);
  v2 = v10;
LABEL_9:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v2;
}
