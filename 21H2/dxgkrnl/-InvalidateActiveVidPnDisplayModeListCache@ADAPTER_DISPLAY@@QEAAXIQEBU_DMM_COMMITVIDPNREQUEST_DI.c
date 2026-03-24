/*
 * XREFs of ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C019C344
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C019C068 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C021748C (DxgkInvalidateVidPnDisplayModeListCache.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pquutttq_EtwWriteTransfer @ 0x1C003B9E0 (McTemplateK0pquutttq_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
        PERESOURCE **this,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-48h]
  char v13; // [rsp+28h] [rbp-40h]
  char v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+50h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v11 + 24) = 2891LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DxgkLogCodePointPacket(0x1Cu, 0xFFFFFFFD, 0, 0, *(__int64 *)((char *)this[2] + 316));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    LODWORD(v12) = -3;
    McTemplateK0pquutttq_EtwWriteTransfer(v7, v6, v8, this, v12, v13, v14, v15, v16, v17, v18);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( i != -3 )
    {
      v10 = 496LL * i;
      BYTE4(this[14][v10 + 136]) = 0;
      LODWORD(this[14][v10 + 138]) = -1;
      HIDWORD(this[14][v10 + 138]) = -1;
    }
  }
}
