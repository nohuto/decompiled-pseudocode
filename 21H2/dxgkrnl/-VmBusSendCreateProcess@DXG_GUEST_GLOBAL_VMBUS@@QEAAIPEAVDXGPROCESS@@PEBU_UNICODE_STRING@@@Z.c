/*
 * XREFs of ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0375B9C
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C037E618 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned int v3; // edi
  struct DXGKVMB_COMMAND_BASE *v7; // rbx
  HANDLE CurrentProcessId; // rax
  size_t Length; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  struct _MDL *v16; // [rsp+30h] [rbp-D0h]
  unsigned int v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-A0h]
  unsigned int v20; // [rsp+170h] [rbp+70h] BYREF

  v3 = 0;
  v19 = 0;
  *(_OWORD *)v18 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v18, this, 0x238u, 0LL, 0LL, 0LL);
  v7 = v18[0];
  if ( v18[0] )
  {
    CurrentProcessId = PsGetCurrentProcessId();
    *((_BYTE *)v7 + 12) = 1;
    Length = 520LL;
    *((_DWORD *)v7 + 3) &= 0x1FFu;
    *((_QWORD *)v7 + 4) = CurrentProcessId;
    *(_QWORD *)v7 = 0LL;
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 2) = 1000LL;
    *((_QWORD *)v7 + 3) = a2;
    *((_BYTE *)v7 + 562) = 0;
    *(_DWORD *)((char *)v7 + 563) = 0;
    *((_BYTE *)v7 + 567) = 0;
    if ( a3->Length <= 0x208u )
      Length = a3->Length;
    memmove((char *)v7 + 40, a3->Buffer, Length);
    *((_WORD *)v7 + (Length >> 1) + 20) = 0;
    *((_BYTE *)v7 + 562) ^= (*((_BYTE *)a2 + 424) ^ *((_BYTE *)v7 + 562)) & 1;
    v10 = *((_DWORD *)a2 + 106) >> 2;
    LOBYTE(v10) = *((_BYTE *)v7 + 562) ^ (*((_BYTE *)v7 + 562) ^ (2 * v10)) & 2;
    *((_BYTE *)v7 + 562) = v10;
    v11 = *((_DWORD *)a2 + 106) >> 5;
    LOBYTE(v11) = v10 ^ (v10 ^ (8 * v11)) & 8;
    *((_BYTE *)v7 + 562) = v11;
    *((_BYTE *)v7 + 562) = v11 ^ (v11 ^ *((_DWORD *)a2 + 106) & 0xF0) & 0x10;
    CurrentProcess = PsGetCurrentProcess(v10, v11, v12, v13);
    v17[0] = 8;
    *((_BYTE *)v7 + 562) = (PsGetProcessWow64Process(CurrentProcess) != 0 ? 4 : 0) | *((_BYTE *)v7 + 562) & 0xFB;
    if ( (int)DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v18[1], v18[0], v19, &v20, v17, v16) >= 0
      && v17[0] >= 4 )
    {
      v3 = v20;
    }
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v18);
  return v3;
}
