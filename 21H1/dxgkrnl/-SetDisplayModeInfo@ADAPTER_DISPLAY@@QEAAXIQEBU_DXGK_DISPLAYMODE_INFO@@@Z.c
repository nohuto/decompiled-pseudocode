/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0019E80
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0131400 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C0019FE8 (McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02FBA2C (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  PERESOURCE *v9; // rax
  __int64 v10; // rdi
  PERESOURCE *v11; // rcx
  int v12; // eax
  PERESOURCE *v13; // rcx
  int v14; // eax
  DXGDODPRESENT *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 5545LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v18 + 24) = 5546LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = this[14];
  v10 = 496 * v4;
  *(_OWORD *)((char *)&v9[v10 + 126] + 4) = *(_OWORD *)a3;
  *(_OWORD *)((char *)&v9[v10 + 128] + 4) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)&v9[v10 + 130] + 4) = *((_OWORD *)a3 + 2);
  *(PERESOURCE *)((char *)&v9[v10 + 132] + 4) = (PERESOURCE)*((_QWORD *)a3 + 6);
  v11 = this[14];
  v12 = HIDWORD(v11[496 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v11[v10 + 79]) = *(_DWORD *)a3 + v12;
    v13 = this[14];
    v14 = *((_DWORD *)a3 + 1) + LODWORD(v13[v10 + 79]);
  }
  else
  {
    HIDWORD(v11[v10 + 79]) = *((_DWORD *)a3 + 1) + v12;
    v13 = this[14];
    v14 = *(_DWORD *)a3 + LODWORD(v13[v10 + 79]);
  }
  LODWORD(v13[v10 + 80]) = v14;
  v15 = (DXGDODPRESENT *)this[48];
  if ( v15 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v15, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)&this[14][v10 + 126] + 4));
  v16 = bTracingEnabled == 0;
  LODWORD(this[14][v10 + 138]) = -1;
  HIDWORD(this[14][v10 + 138]) = -1;
  if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer(
      *((_BYTE *)a3 + 36) & 1,
      v6,
      v8,
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
