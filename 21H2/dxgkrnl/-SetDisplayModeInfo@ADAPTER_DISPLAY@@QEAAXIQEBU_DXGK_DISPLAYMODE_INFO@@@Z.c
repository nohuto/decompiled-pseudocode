/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0001850
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E1F50 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C00019B8 (McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C03001EC (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rbp
  int v6; // edx
  int v7; // r8d
  DXGADAPTER *v8; // rax
  __int64 v9; // rdi
  DXGADAPTER *v10; // rcx
  int v11; // eax
  DXGADAPTER *v12; // rcx
  int v13; // eax
  DXGDODPRESENT *v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v16 + 24) = 5573LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v17 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v17 + 24) = 5574LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v8 = this[14];
  v9 = 3968 * v4;
  *(_OWORD *)((char *)v8 + v9 + 1012) = *(_OWORD *)a3;
  *(_OWORD *)((char *)v8 + v9 + 1028) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)v8 + v9 + 1044) = *((_OWORD *)a3 + 2);
  *(_QWORD *)((char *)v8 + v9 + 1060) = *((_QWORD *)a3 + 6);
  v10 = this[14];
  v11 = *((_DWORD *)v10 + 992 * v4 + 157);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)((char *)v10 + v9 + 636) = *(_DWORD *)a3 + v11;
    v12 = this[14];
    v13 = *((_DWORD *)a3 + 1) + *(_DWORD *)((char *)v12 + v9 + 632);
  }
  else
  {
    *(_DWORD *)((char *)v10 + v9 + 636) = *((_DWORD *)a3 + 1) + v11;
    v12 = this[14];
    v13 = *(_DWORD *)a3 + *(_DWORD *)((char *)v12 + v9 + 632);
  }
  *(_DWORD *)((char *)v12 + v9 + 640) = v13;
  v14 = this[49];
  if ( v14 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v14, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)this[14] + v9 + 1012));
  v15 = bTracingEnabled == 0;
  *(_DWORD *)((char *)this[14] + v9 + 1104) = -1;
  *(_DWORD *)((char *)this[14] + v9 + 1108) = -1;
  if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer(
      *((_BYTE *)a3 + 36) & 1,
      v6,
      v7,
      (_DWORD)this,
      v4,
      *(_DWORD *)a3,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 4),
      *((_DWORD *)a3 + 5),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 7),
      *((_DWORD *)a3 + 8),
      *((_BYTE *)a3 + 36) & 1,
      *((_DWORD *)a3 + 11),
      *((_DWORD *)a3 + 12));
}
