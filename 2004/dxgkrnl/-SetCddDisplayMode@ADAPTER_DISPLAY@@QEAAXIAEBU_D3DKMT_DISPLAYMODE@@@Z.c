/*
 * XREFs of ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000CDF8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0147FDC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddDisplayMode(
        PERESOURCE **this,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v10 + 24) = 5531LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 5532LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v8 = this[14];
  v9 = 496 * v4;
  *(_OWORD *)&v8[v9 + 121] = *(_OWORD *)&a3->Width;
  *(_OWORD *)&v8[v9 + 123] = *(_OWORD *)&a3->RefreshRate.Numerator;
  v8[v9 + 125] = *(PERESOURCE *)&a3->DisplayFixedOutput;
  LODWORD(v8[v9 + 126]) = *((_DWORD *)&a3->Flags + 1);
}
