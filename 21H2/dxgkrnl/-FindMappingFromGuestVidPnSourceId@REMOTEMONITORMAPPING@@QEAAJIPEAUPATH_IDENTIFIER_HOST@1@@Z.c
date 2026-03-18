/*
 * XREFs of ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C033D6F4
 * Callers:
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C03746FC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0377DE4 (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
        struct _KTHREAD **this,
        int a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a3)
{
  struct _KTHREAD *v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // xmm0_8
  int v10; // eax
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v6 = *this;
  v13 = 1;
  while ( 1 )
  {
    if ( v6 == (struct _KTHREAD *)this )
    {
      v7 = -1073741275;
      goto LABEL_6;
    }
    if ( *((_DWORD *)v6 + 10) == a2 )
      break;
    v6 = *(struct _KTHREAD **)v6;
  }
  v9 = *((_QWORD *)v6 + 2);
  v7 = 0;
  v10 = *((_DWORD *)v6 + 6);
  *(_QWORD *)a3 = v9;
  *((_DWORD *)a3 + 2) = v10;
LABEL_6:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v7;
}
