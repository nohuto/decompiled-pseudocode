/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370A70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0044DE4 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444444@Z @ 0x1C005CA5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // rdi
  char v8; // r13
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // eax
  unsigned int *v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-A9h]
  __int64 v23; // [rsp+30h] [rbp-A1h]
  __int64 v24; // [rsp+38h] [rbp-99h]
  unsigned int v25; // [rsp+88h] [rbp-49h] BYREF
  int v26; // [rsp+8Ch] [rbp-45h] BYREF
  int v27; // [rsp+90h] [rbp-41h] BYREF
  int v28; // [rsp+94h] [rbp-3Dh] BYREF
  int v29; // [rsp+98h] [rbp-39h] BYREF
  int v30; // [rsp+9Ch] [rbp-35h] BYREF
  int v31; // [rsp+A0h] [rbp-31h] BYREF
  int v32; // [rsp+A4h] [rbp-2Dh] BYREF
  int v33; // [rsp+A8h] [rbp-29h] BYREF
  unsigned __int16 *v34; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-19h] BYREF
  _BYTE v36[8]; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-9h]
  char v38; // [rsp+D0h] [rbp-1h]
  _BYTE v39[8]; // [rsp+D8h] [rbp+7h] BYREF
  DXGPUSHLOCK *v40; // [rsp+E0h] [rbp+Fh]
  int v41; // [rsp+E8h] [rbp+17h]
  unsigned __int16 *v42; // [rsp+F0h] [rbp+1Fh] BYREF
  int v43; // [rsp+F8h] [rbp+27h]
  int v44; // [rsp+FCh] [rbp+2Bh]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return v2;
  v6 = 0;
  v7 = *((_QWORD *)a1 + 10);
  v8 = 0;
  v25 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(v3, &OpenVirtualGpuStart, v4, *(_QWORD *)(v7 + 16), *(_DWORD *)(v7 + 24), 0, 0);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39, (struct _KTHREAD **)(v7 + 248), 0);
  DXGPUSHLOCK::AcquireExclusive(v40);
  v41 = 2;
  v37 = *(_QWORD *)(v7 + 16);
  v38 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  v9 = *(_DWORD *)(v5 + 24);
  if ( v9 > 0x29 || (v10 = *(_DWORD *)(v5 + 28), v10 < 0x10) || v9 < v10 )
  {
    WdLogSingleEntry4(2LL, 41LL, 16LL, *(unsigned int *)(v5 + 24), *(unsigned int *)(v5 + 28));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VM bus interface mismatch: 0x%I64x, 0x%I64x, 0x%I64x, 0x%I64x",
      41LL,
      16LL,
      *(unsigned int *)(v5 + 24),
      *(unsigned int *)(v5 + 28),
      0LL);
    LODWORD(v11) = -1073741637;
    v6 = 9;
  }
  else if ( *(_BYTE *)(v7 + 173) )
  {
    WdLogSingleEntry1(2LL, 5420LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter is already opened by the guest",
      5420LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v11) = -1073741811;
    v6 = 10;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL) + 392LL) = v9;
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 16) + 200LL) == 1 )
    {
      v12 = DXGADAPTER::CreateHandle(*(DXGADAPTER **)(v7 + 16), *(struct DXGPROCESS **)(v7 + 96), &v25);
      v11 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"CreateHandle failed: 0x%I64x", v11, 0LL, 0LL, 0LL, 0LL);
        LODWORD(v11) = -1073741823;
        v6 = 13;
      }
      else
      {
        *(_BYTE *)(v7 + 173) = 1;
        if ( *(_DWORD *)(v5 + 24) <= 0x10u )
          goto LABEL_21;
        v13 = *((_DWORD *)a1 + 36);
        if ( v13 < 0x28 )
        {
          WdLogSingleEntry1(2LL, v13);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid command length: 0x%I64x",
            *((unsigned int *)a1 + 36),
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v11) = -1073741811;
          v6 = 12;
        }
        *(_QWORD *)(v7 + 344) = *(_QWORD *)(v5 + 32);
      }
    }
    else
    {
      LODWORD(v11) = -1073741130;
      v6 = 11;
    }
  }
  if ( *(_DWORD *)(v5 + 24) > 0x10u )
  {
    v14 = (unsigned int *)&v42;
    v42 = (unsigned __int16 *)__PAIR64__(v11, v25);
    v15 = 16;
    v43 = 41;
    v44 = 16;
LABEL_23:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v14, v15);
    v8 = 1;
    goto LABEL_25;
  }
LABEL_21:
  if ( (int)v11 >= 0 )
  {
    v15 = 4;
    v14 = &v25;
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL, (int)v11);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"CreateHandle failed: 0x%I64x", (int)v11, 0LL, 0LL, 0LL, 0LL);
LABEL_25:
  v42 = *(unsigned __int16 **)(*(_QWORD *)(v7 + 16) + 404LL);
  if ( (unsigned int)dword_1C012F918 > 5 && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000008000LL) )
  {
    v26 = *(_DWORD *)(v18 + 424);
    v27 = *(_DWORD *)(v18 + 420);
    v28 = *(_DWORD *)(v18 + 416);
    v29 = *(_DWORD *)(v18 + 412);
    v19 = *(_QWORD *)(v7 + 104);
    v30 = 41;
    v20 = *(unsigned int *)(v19 + 392);
    v34 = v42;
    v42 = *(unsigned __int16 **)(v18 + 1616);
    v31 = v20;
    v32 = v11;
    v33 = v6;
    v35 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      byte_1C0099AB7,
      v17,
      v18,
      (__int64)&v35,
      (__int64)&v33,
      (__int64)&v32,
      &v42,
      (__int64)&v34,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v11 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v24) = v6;
      LODWORD(v23) = v11;
      LODWORD(v22) = *(_DWORD *)(v7 + 24);
      McTemplateK0pqqq_EtwWriteTransfer(v16, &OpenVirtualGpuFailed, v17, *(_QWORD *)(v7 + 16), v22, v23, v24);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v24) = v6;
      LODWORD(v23) = v11;
      LODWORD(v22) = *(_DWORD *)(v7 + 24);
      McTemplateK0pqqq_EtwWriteTransfer(v16, &OpenVirtualGpuEnd, v17, *(_QWORD *)(v7 + 16), v22, v23, v24);
    }
  }
  if ( v38 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  LOBYTE(v2) = v8;
  return v2;
}
