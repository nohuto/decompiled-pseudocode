/*
 * XREFs of ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0247430
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024CF2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _UNICODE_STRING *a3)
{
  size_t v6; // rbx
  unsigned int Length; // eax
  char v8; // cl
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  struct _MDL *v14; // [rsp+28h] [rbp-D8h]
  unsigned int v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+4Ch] [rbp-B4h]
  int v19; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v20; // [rsp+58h] [rbp-A8h]
  HANDLE CurrentProcessId; // [rsp+60h] [rbp-A0h]
  _WORD v22[261]; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+272h] [rbp+172h]
  unsigned int v24; // [rsp+280h] [rbp+180h] BYREF

  v23 &= 0xF0u;
  CurrentProcessId = PsGetCurrentProcessId();
  v6 = 520LL;
  Length = a3->Length;
  v16 = 0LL;
  v17 = 0;
  v18 = 1;
  v19 = 1000;
  v20 = a2;
  if ( (unsigned __int16)Length <= 0x208u )
    v6 = Length;
  memmove(v22, a3->Buffer, v6);
  v8 = *((_BYTE *)a2 + 344) & 1 | (2 * (*((_BYTE *)a2 + 346) & 1 | *((_BYTE *)a2 + 347) & 4));
  v22[v6 >> 1] = 0;
  LOBYTE(v9) = v23 & 0xF4 | v8;
  v23 = v9;
  CurrentProcess = PsGetCurrentProcess(v9, v10);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  v15[0] = 8;
  v23 = (ProcessWow64Process != 0 ? 4 : 0) | v23 & 0xFB;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v16, 0x238u, &v24, v15, v14) < 0
    || v15[0] < 4 )
  {
    return 0LL;
  }
  else
  {
    return v24;
  }
}
