/*
 * XREFs of ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18019EE40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1800CE2A8 (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18019EEA0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::OnPresentComplete(MagnifierCaptureBitsResponse *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  CDeviceManager::FlushAllDevices(this);
  *(_BYTE *)(*((_QWORD *)this + 215) + 1772LL) = 0;
  v2 = MagnifierCaptureBitsResponse::SendResponse(this, 0);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x6Au, 0LL);
  return v4;
}
