/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C0379D14
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C02E73F8 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     DxgkMarkDeviceAsError @ 0x1C02EA650 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rbx
  __int64 v9; // rdi
  int HostProcess; // eax
  int v11; // eax
  struct _MDL *v13; // [rsp+20h] [rbp-178h]
  struct DXGKVMB_COMMAND_BASE *v14[2]; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v15; // [rsp+60h] [rbp-138h]

  v15 = 0;
  *(_OWORD *)v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v14, this, 0x20u, 0LL, 0LL, 0LL);
  v8 = v14[0];
  if ( v14[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 12) = 0;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 2) = HostProcess;
    *((_DWORD *)v8 + 4) = 29;
    *((struct _D3DKMT_MARKDEVICEASERROR *)v8 + 3) = *a4;
    *((_DWORD *)v8 + 6) = *((_DWORD *)a3 + 110);
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v14[1], v14[0], v15, v13);
    v9 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSyncMessageStatusReturn failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    LODWORD(v9) = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v14);
  return (unsigned int)v9;
}
