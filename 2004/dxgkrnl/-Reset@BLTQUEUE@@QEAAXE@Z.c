/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C02FEE7C
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014BBA4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C020C8C0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0214A1C (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0162BF8 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C02FCF4C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
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
