/*
 * XREFs of ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0254004
 * Callers:
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0281438 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02B9990 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0112380 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02541B4 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02558F4 (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateStagingSurface2(
        struct _DXGK_ALLOCATIONINFO *this,
        struct _D3DKMDT_STAGINGSURFACEDATA *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // al
  __int64 result; // rax
  struct COREDEVICEACCESS *v14; // r8
  int AllocationResident; // edi
  _QWORD v16[54]; // [rsp+20h] [rbp-E0h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(this->Size + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 8683LL;
    WdLogEvent5_WdAssertion(v11);
  }
  memset(v16, 0, 0x1A8uLL);
  *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v12 = v16[51];
  HIDWORD(v16[0]) = 0;
  LODWORD(v16[2]) = 3;
  v16[3] = a2;
  if ( !a5 )
    v12 = 1;
  LOBYTE(v16[51]) = v12;
  result = DXGDEVICE::CreateStandardAllocation(this, (struct _D3DKM_CREATESTANDARDALLOCATION *)v16, a3);
  if ( (int)result >= 0 )
  {
    AllocationResident = DXGDEVICE::MakeAllocationResident((DXGDEVICE *)this, HIDWORD(v16[6]), v14);
    if ( AllocationResident >= 0 )
    {
      *a4 = HIDWORD(v16[6]);
      if ( a5 )
        *a5 = v16[1];
    }
    else
    {
      DXGDEVICE::DestroyStagingSurface((DXGDEVICE *)this, HIDWORD(v16[6]), v16[1], a3);
    }
    return (unsigned int)AllocationResident;
  }
  return result;
}
