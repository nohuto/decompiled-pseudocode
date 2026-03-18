/*
 * XREFs of ?VmBusLogEvent@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1C0039874 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4433AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x1C003FA1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U-$_tlgWrapBuffer@U_UNICO.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLogEvent(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+80h] [rbp-9h] BYREF
  int v21; // [rsp+84h] [rbp-5h] BYREF
  int v22; // [rsp+88h] [rbp-1h] BYREF
  __int64 v23; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int16 *v24; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+B0h] [rbp+27h] BYREF
  _BYTE v28[8]; // [rsp+B8h] [rbp+2Fh] BYREF
  DXGPUSHLOCK *v29; // [rsp+C0h] [rbp+37h]
  int v30; // [rsp+C8h] [rbp+3Fh]
  int v31; // [rsp+F0h] [rbp+67h] BYREF
  int v32; // [rsp+F8h] [rbp+6Fh] BYREF
  int v33; // [rsp+100h] [rbp+77h] BYREF
  int v34; // [rsp+108h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v29);
  v4 = *((_QWORD *)a1 + 5);
  v30 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v9 = v6;
    if ( v6 )
    {
      if ( *(int *)(v6 + 32) >= 0 )
      {
        v12 = WdLogNewEntry5_WdEvent(v8, v7);
        *(_QWORD *)(v12 + 24) = *(int *)(v9 + 24);
        *(_QWORD *)(v12 + 32) = *(unsigned int *)(v9 + 28);
        WdLogEvent5_WdEvent(v12);
      }
      else
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
        v10[3] = *(int *)(v9 + 32);
        v10[4] = *(int *)(v9 + 24);
        v10[5] = *(unsigned int *)(v9 + 28);
        WdLogEvent5_WdError(v10);
      }
      if ( bTracingEnabled )
      {
        v13 = *(unsigned int *)(v9 + 32);
        if ( (int)v13 >= 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v13,
              &VirtualGpuGuestEvent,
              v11,
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL),
              *(_DWORD *)(v9 + 32),
              *(_DWORD *)(v9 + 24),
              *(_DWORD *)(v9 + 28),
              *(_QWORD *)(v9 + 40),
              *(_QWORD *)(v9 + 48));
        }
        else
        {
          v14 = *((_QWORD *)a1 + 5);
          v15 = *(_QWORD *)(v14 + 16);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v13,
              &VirtualGpuGuestEventFailure,
              v11,
              *(_QWORD *)(v14 + 16),
              *(_DWORD *)(v14 + 24),
              *(_DWORD *)(v9 + 32),
              *(_DWORD *)(v9 + 24),
              *(_DWORD *)(v9 + 28),
              *(_QWORD *)(v9 + 40),
              *(_QWORD *)(v9 + 48));
          if ( (unsigned int)dword_1C00B0A90 > 5 && tlgKeywordOn((__int64)&dword_1C00B0A90, 0x400000008000LL) )
          {
            v31 = *(_DWORD *)(v15 + 336);
            v32 = *(_DWORD *)(v15 + 332);
            v33 = *(_DWORD *)(v15 + 328);
            v34 = *(_DWORD *)(v15 + 324);
            v23 = *(_QWORD *)(v15 + 316);
            v24 = *(unsigned __int16 **)(v15 + 1520);
            v25 = *(_QWORD *)(v9 + 48);
            v26 = *(_QWORD *)(v9 + 40);
            v20 = *(_DWORD *)(v9 + 32);
            v21 = *(_DWORD *)(v9 + 28);
            v22 = *(_DWORD *)(v9 + 24);
            v27 = 0x2000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v16,
              byte_1C007EFEB,
              v17,
              v18,
              (__int64)&v27,
              (__int64)&v22,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v26,
              (__int64)&v25,
              &v24,
              (__int64)&v23,
              (__int64)&v34,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&v31);
          }
        }
      }
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 5447LL;
    WdLogEvent5_WdError(v5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return 0;
}
