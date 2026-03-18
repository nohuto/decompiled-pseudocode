/*
 * XREFs of ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1C03588B0
 * Callers:
 *     ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C03589B4 (-ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C035E010 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C035F620 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z.c)
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C005C07C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     McTemplateK0ppxxqq_EtwWriteTransfer @ 0x1C005C100 (McTemplateK0ppxxqq_EtwWriteTransfer.c)
 *     McTemplateK0pxppqq_EtwWriteTransfer @ 0x1C005C1C0 (McTemplateK0pxppqq_EtwWriteTransfer.c)
 */

void __fastcall DXGK_VIRTUAL_GPU::ReportState(DXGK_VIRTUAL_GPU *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]
  BOOL v10; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v10 = *((_BYTE *)this + 152) != 0;
      v8 = *((_DWORD *)this + 6);
      McTemplateK0pxppqq_EtwWriteTransfer(
        (__int64)this,
        a2,
        a3,
        this,
        *(_QWORD *)((char *)this + 28),
        *((_QWORD *)this + 13),
        *((_QWORD *)this + 2),
        v8,
        v10);
    }
    if ( !*((_BYTE *)this + 152) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v6) = *((_DWORD *)this + 42);
        McTemplateK0ppq_EtwWriteTransfer((__int64)this, &EventVirtualGpup, a3, this, *((_QWORD *)this + 22), v6);
      }
      if ( *((_DWORD *)this + 42) )
      {
        do
        {
          v5 = *((_QWORD *)this + 23) + 32LL * v3;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v9) = *(_DWORD *)(v5 + 28);
            LODWORD(v7) = *(_DWORD *)(v5 + 24);
            McTemplateK0ppxxqq_EtwWriteTransfer(
              v5,
              a2,
              a3,
              this,
              *(_QWORD *)v5,
              *(_QWORD *)(v5 + 8),
              *(_QWORD *)(v5 + 16),
              v7,
              v9);
          }
          ++v3;
        }
        while ( v3 < *((_DWORD *)this + 42) );
      }
    }
  }
}
