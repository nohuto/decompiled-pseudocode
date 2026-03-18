/*
 * XREFs of ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003F07C
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0234F84 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0288618 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C02B3F90 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C02B43A0 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B46C0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::ReferenceDwmProcess(DXGSESSIONDATA *this, struct _EPROCESS **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct _EPROCESS *v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1073741823;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONDATA *)((char *)this + 18648), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = (struct _EPROCESS *)*((_QWORD *)this + 2336);
  if ( v6 )
  {
    *a2 = v6;
    ObfReferenceObject(*((PVOID *)this + 2336));
    v4 = 0;
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v5);
  return v4;
}
