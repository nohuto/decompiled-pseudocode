/*
 * XREFs of ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C004B314
 * Callers:
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02DFAD0 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C0353FA0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0354450 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0354840 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0362D5C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::ReferenceDwmProcess(DXGSESSIONDATA *this, struct _EPROCESS **a2)
{
  unsigned int v4; // ebx
  struct _EPROCESS *v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1073741823;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGSESSIONDATA *)((char *)this + 18664), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v5 = (struct _EPROCESS *)*((_QWORD *)this + 2339);
  if ( v5 )
  {
    *a2 = v5;
    ObfReferenceObject(*((PVOID *)this + 2339));
    v4 = 0;
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return v4;
}
