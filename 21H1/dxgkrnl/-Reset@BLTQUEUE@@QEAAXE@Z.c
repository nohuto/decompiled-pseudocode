/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C02FA96C
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C013ED88 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0208670 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02107CC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0152558 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C02F8A3C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::Reset(BLTQUEUE *this, char a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  char *v6; // rdx
  _BYTE v7[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v8[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v9[88]; // [rsp+78h] [rbp-70h] BYREF

  if ( *((_QWORD *)this + 75) )
  {
    *((_BYTE *)this + 561) = 1;
    BLTQUEUE::IssueCommand(this);
    v5 = *((_QWORD *)this + 44);
    if ( v5 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v7, v5, 0, v4, 0);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL) + 16LL)) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v7, v6);
      BLTQUEUE::DestroyStagingBuffer(this);
      *((_QWORD *)this + 44) = 0LL;
      COREACCESS::~COREACCESS((COREACCESS *)v9);
      COREACCESS::~COREACCESS((COREACCESS *)v8);
    }
    if ( !a2 )
      *((_DWORD *)this + 235) = 0;
  }
}
