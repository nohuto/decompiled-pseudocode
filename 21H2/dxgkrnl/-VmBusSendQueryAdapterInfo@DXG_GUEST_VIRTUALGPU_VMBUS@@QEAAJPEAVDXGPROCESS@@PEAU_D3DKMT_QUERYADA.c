/*
 * XREFs of ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C037AF98
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0301F98 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYADAPTERINFO *a3)
{
  UINT PrivateDriverDataSize; // r8d
  __int64 v8; // rsi
  int v9; // ebx
  int HostProcess; // eax
  const void *v11; // r14
  UINT v12; // eax
  unsigned __int64 v13; // r15
  unsigned int v14[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v15; // [rsp+60h] [rbp-158h] BYREF
  int v16; // [rsp+70h] [rbp-148h]

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  if ( PrivateDriverDataSize > 0x20000 )
  {
    WdLogSingleEntry1(2LL, 8273LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrivateDriverDataSize is invalid",
      8273LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v16 = 0;
  v14[0] = (PrivateDriverDataSize + 11) & 0xFFFFFFF8;
  v15 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v15, this, v14[0] + 32, 0LL, 0LL, 0LL);
  v8 = v15;
  if ( (_QWORD)v15 )
  {
    if ( a2 )
      HostProcess = DXGPROCESS::GetHostProcess(a2);
    else
      HostProcess = 0;
    *(_QWORD *)v8 = 0LL;
    v11 = (const void *)(v8 + 32);
    *(_DWORD *)(v8 + 20) = 0;
    *(_BYTE *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 12) &= 0x1FFu;
    *(_DWORD *)(v8 + 8) = HostProcess;
    *(_DWORD *)(v8 + 16) = 2;
    v12 = a3->PrivateDriverDataSize;
    if ( v12 )
      memmove((void *)(v8 + 32), a3->pPrivateDriverData, v12);
    *(_DWORD *)(v8 + 24) = a3->Type;
    *(_DWORD *)(v8 + 28) = a3->PrivateDriverDataSize;
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v15, (void *)(v8 + 32), v14);
    if ( v9 < 0 )
      goto LABEL_18;
    v13 = v14[0];
    if ( v14[0] < a3->PrivateDriverDataSize )
      goto LABEL_12;
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) >= 0x27u )
    {
      if ( v13 < (unsigned __int64)a3->PrivateDriverDataSize + 4 )
      {
LABEL_12:
        v9 = -1073741811;
        goto LABEL_18;
      }
      v9 = *(_DWORD *)(v8 + 32);
      v11 = (const void *)(v8 + 36);
    }
    if ( v9 >= 0 )
      memmove(a3->pPrivateDriverData, v11, a3->PrivateDriverDataSize);
    goto LABEL_18;
  }
  v9 = -1073741801;
LABEL_18:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v15);
  return (unsigned int)v9;
}
