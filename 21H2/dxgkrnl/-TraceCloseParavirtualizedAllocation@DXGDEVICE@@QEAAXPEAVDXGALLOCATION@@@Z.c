/*
 * XREFs of ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D747C
 * Callers:
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018BD40 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C01950A0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019DC2C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D5C7C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C004AD54 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 */

void __fastcall DXGDEVICE::TraceCloseParavirtualizedAllocation(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbp
  __int64 v6; // rcx

  if ( (*((_DWORD *)a2 + 18) & 0x40000) != 0 )
  {
    v3 = 0LL;
    if ( bTracingEnabled )
    {
      v4 = *((_QWORD *)a2 + 5);
      if ( v4 )
        v3 = *(_QWORD *)(v4 + 56);
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          v6,
          &EventDestroyDeviceAllocation,
          v3,
          *(_QWORD *)(v6 + 80),
          this,
          v5,
          a2);
    }
  }
}
