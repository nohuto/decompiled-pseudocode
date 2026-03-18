/*
 * XREFs of ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0344248
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C02E22B0 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C02E7148 (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGHWQUEUE@@IEAAXXZ @ 0x1C03101A8 (-ReportState@DXGHWQUEUE@@IEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::ReportState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v1; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *((_QWORD *)this + 4);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v1 + 32));
  if ( bTracingEnabled )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)this + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventReportSyncObject,
        v4,
        VidSchSyncObject,
        *((unsigned int *)this + 10),
        v5);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 32));
}
