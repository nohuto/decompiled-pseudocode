/*
 * XREFs of ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0290040
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C022AB20 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0252070 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0045254 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::ReportState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = *((_QWORD *)this + 4);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v1 + 32));
  if ( bTracingEnabled )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)this + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        v5,
        &EventReportSyncObject,
        v6,
        VidSchSyncObject,
        *((unsigned int *)this + 10),
        v7);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 32), v3);
}
