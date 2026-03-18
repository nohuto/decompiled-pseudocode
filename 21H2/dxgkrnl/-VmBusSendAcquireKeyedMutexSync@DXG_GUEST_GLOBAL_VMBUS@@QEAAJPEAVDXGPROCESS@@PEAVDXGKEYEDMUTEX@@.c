/*
 * XREFs of ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0373A04
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C033E6E8 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C033FD28 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C037E618 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        void **a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        union _LARGE_INTEGER *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  LONGLONG QuadPart; // rsi
  struct DXGKVMB_COMMAND_BASE *v12; // rdi
  int v13; // ebx
  int v14; // ebx
  int HostProcess; // eax
  __int64 v16; // r9
  int v17; // eax
  size_t v18; // r14
  unsigned int v19; // esi
  _QWORD *v20; // rdi
  struct _MDL *v22; // [rsp+30h] [rbp-D0h]
  unsigned int HostHandle; // [rsp+50h] [rbp-B0h] BYREF
  DXGPROCESS *v24; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v25; // [rsp+60h] [rbp-A0h]
  struct DXGKVMB_COMMAND_BASE *v26[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-80h]

  v24 = a2;
  v25 = a8;
  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  v27 = 0;
  *(_OWORD *)v26 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v26, this, 0x40u, 0LL, 0LL, 0LL);
  v12 = v26[0];
  if ( !v26[0] )
    goto LABEL_5;
  v14 = *((_DWORD *)a3 + 8);
  HostProcess = DXGPROCESS::GetHostProcess(v24);
  *(_QWORD *)v12 = 0LL;
  *((_DWORD *)v12 + 5) = 0;
  *((_DWORD *)v12 + 2) = HostProcess;
  *((_DWORD *)v12 + 7) = HostHandle;
  *((_QWORD *)v12 + 4) = a5;
  *((_DWORD *)v12 + 10) = a6;
  v17 = *((_DWORD *)v12 + 14);
  *((_QWORD *)v12 + 6) = QuadPart;
  *((_BYTE *)v12 + 12) = 1;
  *((_DWORD *)v12 + 3) &= 0x1FFu;
  *((_DWORD *)v12 + 4) = 1014;
  *((_DWORD *)v12 + 6) = v14;
  *((_DWORD *)v12 + 14) = v17 & 0xFFFFFFFE | (a7 == 0LL);
  v18 = *((unsigned int *)a3 + 42);
  v19 = (v18 + 31) & 0xFFFFFFF8;
  if ( v19 > 0x20000 || v19 < (unsigned int)v18 )
  {
    WdLogSingleEntry1(3LL, v19);
    v13 = -2147483643;
    goto LABEL_19;
  }
  v20 = (_QWORD *)operator new[](v19, 0x4B677844u, 64LL, v16);
  if ( !v20 )
  {
    WdLogSingleEntry1(6LL, 13421LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate output buffer for VmBusSendAcquireKeyedMutexSync",
      13421LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_5:
    v13 = -1073741801;
    goto LABEL_19;
  }
  HostHandle = (v18 + 31) & 0xFFFFFFF8;
  v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
          this,
          (unsigned __int8 *)v26[1],
          v26[0],
          v27,
          v20,
          &HostHandle,
          v22);
  if ( v13 >= 0 )
  {
    if ( HostHandle < v19 )
    {
      v13 = -1073741823;
    }
    else
    {
      v13 = *(_DWORD *)v20;
      if ( (_DWORD)v18 )
        memmove(a3[20], v20 + 3, v18);
      *v25 = v20[2];
      if ( a9 )
        *a9 = v20[1];
    }
  }
  operator delete[](v20);
LABEL_19:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v26);
  return (unsigned int)v13;
}
