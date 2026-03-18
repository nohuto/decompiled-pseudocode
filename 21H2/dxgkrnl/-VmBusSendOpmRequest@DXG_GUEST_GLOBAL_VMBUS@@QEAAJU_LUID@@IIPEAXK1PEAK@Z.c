/*
 * XREFs of ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C037AD20
 * Callers:
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C01EDB94 (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C037E618 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int Size,
        void *a7,
        unsigned int *a8)
{
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // eax
  struct DXGKVMB_COMMAND_BASE *v13; // rcx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // r8d
  void *v17; // rdx
  int v18; // r8d
  __int64 v19; // r9
  int *v20; // rbx
  unsigned int v21; // eax
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rdi
  struct _MDL *v26; // [rsp+30h] [rbp-D0h]
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh]
  void *Src; // [rsp+58h] [rbp-A8h]
  struct DXGKVMB_COMMAND_BASE *v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+70h] [rbp-90h]

  Src = a5;
  v10 = *a8 + 19;
  v28 = a4;
  v11 = v10 & 0xFFFFFFF8;
  v27 = a3;
  v12 = Size + 56;
  if ( Size + 56 > 0x20000 || v11 > 0x20000 )
  {
    v23 = v11;
    v24 = v11;
    v25 = v12;
    WdLogSingleEntry2(2LL, v12, v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Either input buffer size (0x%I64x) or output buffer size (0x%I64x) is too big to go over VmBus",
      v25,
      v23,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v31 = 0;
    *(_OWORD *)v30 = 0LL;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v30, this, v12, 0LL, 0LL, 0LL);
    v13 = v30[0];
    if ( v30[0] )
    {
      v15 = *a8;
      v16 = v27;
      *(_QWORD *)v30[0] = 0LL;
      *((_DWORD *)v13 + 2) = 0;
      *((_DWORD *)v13 + 5) = 0;
      v17 = Src;
      *((_DWORD *)v13 + 8) = v16;
      v18 = v28;
      *((_BYTE *)v13 + 12) = 1;
      *((_DWORD *)v13 + 3) &= 0x1FFu;
      *((_DWORD *)v13 + 9) = v18;
      *((_DWORD *)v13 + 4) = 1017;
      *((struct _LUID *)v13 + 3) = a2;
      *((_DWORD *)v13 + 10) = Size;
      *((_DWORD *)v13 + 11) = v15;
      memmove((char *)v13 + 48, v17, Size);
      v20 = (int *)operator new[](v11, 0x4B677844u, 64LL, v19);
      v27 = v11;
      v14 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v30[1], v30[0], v31, v20, &v27, v26);
      if ( v14 >= 0 )
      {
        v14 = -1073741823;
        if ( v27 >= 8 )
        {
          v14 = *v20;
          if ( *v20 >= 0 )
          {
            v21 = v20[1];
            if ( v21 <= *a8 )
            {
              memmove(a7, v20 + 2, v21);
              *a8 = v20[1];
            }
          }
        }
      }
      if ( v20 )
        operator delete[](v20);
    }
    else
    {
      WdLogSingleEntry1(6LL, 13694LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate storage for input buffer",
        13694LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v14 = -1073741801;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v30);
    return (unsigned int)v14;
  }
}
