/*
 * XREFs of ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C014E348
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014D6D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C019142C (MonitorCreatePhysicalMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02F4284 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 */

__int64 __fastcall DmmPowerOnOffTargetsFromSourceIfNecessary(PERESOURCE *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE v8; // rax
  VIDPN_MGR *Address; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _BYTE v19[8]; // [rsp+50h] [rbp-138h] BYREF
  __int64 v20; // [rsp+58h] [rbp-130h] BYREF
  _BYTE v21[256]; // [rsp+60h] [rbp-128h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2);
LABEL_11:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = a1[337];
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_11;
  }
  Address = (VIDPN_MGR *)v8->Address;
  if ( Address )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, (__int64)v8->Address);
    memset(v21, 0, sizeof(v21));
    v19[0] = 0;
    v10 = VIDPN_MGR::SetTimingsFromVidPn(
            Address,
            0LL,
            4u,
            0LL,
            (struct D3DKMT_VIDPN_SOURCE_MASKS *)v21,
            v19,
            a3,
            0LL,
            0LL);
    v13 = v10;
    if ( v10 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v18[3] = v3;
      v18[4] = *((int *)a1 + 80);
      v18[5] = *((unsigned int *)a1 + 79);
      v18[6] = v13;
      WdLogEvent5_WdError(v18);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40), v11);
    return (unsigned int)v13;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
