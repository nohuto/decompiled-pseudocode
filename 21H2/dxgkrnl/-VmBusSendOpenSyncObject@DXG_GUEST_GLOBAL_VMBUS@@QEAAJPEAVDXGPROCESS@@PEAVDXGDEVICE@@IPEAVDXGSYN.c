/*
 * XREFs of ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C037AAC8
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C03411C8 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C03650E0 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C037E618 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        int a4,
        struct DXGSYNCOBJECT *a5,
        struct DXGDEVICESYNCOBJECT *a6,
        unsigned int a7,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a8)
{
  struct DXGKVMB_COMMAND_BASE *v12; // rcx
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  int v18; // eax
  struct _MDL *v20; // [rsp+38h] [rbp-D0h]
  unsigned int v21; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-90h]
  unsigned int v24; // [rsp+188h] [rbp+80h] BYREF
  int v25; // [rsp+18Ch] [rbp+84h]
  __int64 v26; // [rsp+190h] [rbp+88h]
  unsigned __int64 v27; // [rsp+198h] [rbp+90h]

  v23 = 0;
  *(_OWORD *)v22 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v22, this, 0x28u, 0LL, 0LL, 0LL);
  v12 = v22[0];
  if ( !v22[0] )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_15;
  }
  v14 = *((_DWORD *)a5 + 21);
  if ( a3 )
    v15 = *((_DWORD *)a3 + 110);
  else
    v15 = 0;
  *((_DWORD *)v22[0] + 2) = *((_DWORD *)a2 + 126);
  *((_DWORD *)v12 + 8) = a7;
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)v12 + 9) = a8;
  *((_BYTE *)v12 + 12) = 1;
  *((_DWORD *)v12 + 3) &= 0x1FFu;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 2) = 1002LL;
  *((_DWORD *)v12 + 6) = v15;
  *((_DWORD *)v12 + 7) = v14;
  v21 = 24;
  LODWORD(v13) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (unsigned __int8 *)v22[1],
                   v22[0],
                   v23,
                   &v24,
                   &v21,
                   v20);
  if ( (int)v13 < 0 )
    goto LABEL_14;
  if ( v21 < 0x18 )
  {
    LODWORD(v13) = -1073741823;
    goto LABEL_14;
  }
  LODWORD(v13) = v25;
  if ( v25 < 0 )
  {
LABEL_14:
    WdLogSingleEntry1(2LL, (int)v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbusSendOpenSyncObject failed: 0x%I64x",
      (int)v13,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  if ( a6 )
  {
    v17 = v27;
    *((_DWORD *)a6 + 11) = v24;
    *((_QWORD *)a6 + 6) = v26;
    v18 = MapGuestFenceCpuVaToHost(v17, (void **)a6 + 7, (unsigned __int64 *)a6 + 10, (unsigned int *)a6 + 22);
    v13 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry2(2LL, v18, 13296LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"MapCpuVaForParavirtualization failed: 0x%I64x",
        v13,
        13296LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    DXGSYNCOBJECT::SetHostHandle(a5, a4, v24, v16);
  }
LABEL_15:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v22);
  return (unsigned int)v13;
}
