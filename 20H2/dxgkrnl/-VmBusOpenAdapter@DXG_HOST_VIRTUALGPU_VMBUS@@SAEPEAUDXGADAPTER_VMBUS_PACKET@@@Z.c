/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00394AC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F69C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444444@Z @ 0x1C003FA24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C011C294 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rsi
  int v6; // r15d
  __int64 v7; // rbx
  char v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+30h] [rbp-D0h]
  unsigned int v33; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v34; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+94h] [rbp-6Ch] BYREF
  int v37; // [rsp+98h] [rbp-68h] BYREF
  int v38; // [rsp+9Ch] [rbp-64h] BYREF
  int v39; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+A4h] [rbp-5Ch] BYREF
  int v41; // [rsp+A8h] [rbp-58h] BYREF
  int v42; // [rsp+ACh] [rbp-54h] BYREF
  unsigned __int16 *v43; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v45[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-38h]
  char v47; // [rsp+D0h] [rbp-30h]
  _BYTE v48[8]; // [rsp+D8h] [rbp-28h] BYREF
  DXGPUSHLOCK *v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  _DWORD v51[4]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return v2;
  v33 = 0;
  v6 = 0;
  v7 = *((_QWORD *)a1 + 5);
  v8 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    v32 = 0;
    v30 = 0;
    v28 = *(_DWORD *)(v7 + 24);
    McTemplateK0pqqq_EtwWriteTransfer(v3, &OpenVirtualGpuStart, v4, *(_QWORD *)(v7 + 16), v28, v30, v32);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48, (struct _KTHREAD **)(v7 + 232), 0);
  DXGPUSHLOCK::AcquireExclusive(v49);
  v50 = 2;
  v46 = *(_QWORD *)(v7 + 16);
  v47 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  v10 = *(unsigned int *)(v5 + 24);
  if ( (unsigned int)v10 > 0x1B || (v11 = *(_DWORD *)(v5 + 28), v11 < 0x10) || (unsigned int)v10 < v11 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v9, v10);
    v18[3] = 27LL;
    v18[4] = 16LL;
    v18[5] = *(unsigned int *)(v5 + 24);
    v18[6] = *(unsigned int *)(v5 + 28);
    WdLogEvent5_WdError(v18);
    LODWORD(v14) = -1073741637;
    v6 = 9;
  }
  else if ( *(_BYTE *)(v7 + 165) )
  {
    v12 = WdLogNewEntry5_WdError(v9, v10);
    *(_QWORD *)(v12 + 24) = 4845LL;
    WdLogEvent5_WdError(v12);
    LODWORD(v14) = -1073741811;
    v6 = 10;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 7) + 496LL) + 352LL) = v10;
    v13 = *(unsigned int *)(*(_QWORD *)(v7 + 16) + 200LL);
    if ( (_DWORD)v13 == 1 )
    {
      v15 = DXGADAPTER::CreateHandle(*(DXGADAPTER **)(v7 + 16), *(struct DXGPROCESS **)(v7 + 96), &v33);
      v14 = v15;
      if ( v15 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v13, v10);
        *(_QWORD *)(v17 + 24) = v14;
        WdLogEvent5_WdError(v17);
        LODWORD(v14) = -1073741823;
        v6 = 13;
      }
      else
      {
        *(_BYTE *)(v7 + 165) = 1;
        if ( *(_DWORD *)(v5 + 24) <= 0x10u )
          goto LABEL_21;
        if ( *((_DWORD *)a1 + 22) < 0x28u )
        {
          v16 = WdLogNewEntry5_WdError(v13, v10);
          *(_QWORD *)(v16 + 24) = *((unsigned int *)a1 + 22);
          WdLogEvent5_WdError(v16);
          LODWORD(v14) = -1073741811;
          v6 = 12;
        }
        *(_QWORD *)(v7 + 320) = *(_QWORD *)(v5 + 32);
      }
    }
    else
    {
      LODWORD(v14) = -1073741130;
      v6 = 11;
    }
  }
  if ( *(_DWORD *)(v5 + 24) > 0x10u )
  {
    v19 = v51;
    v51[0] = v33;
    v20 = 16;
    v51[1] = v14;
    v51[2] = 27;
    v51[3] = 16;
LABEL_23:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v19, v20);
    v8 = 1;
    goto LABEL_25;
  }
LABEL_21:
  if ( (int)v14 >= 0 )
  {
    v20 = 4;
    v19 = &v33;
    goto LABEL_23;
  }
  v23 = WdLogNewEntry5_WdError(v13, v10);
  *(_QWORD *)(v23 + 24) = (int)v14;
  WdLogEvent5_WdError(v23);
LABEL_25:
  v34 = *(unsigned __int16 **)(*(_QWORD *)(v7 + 16) + 316LL);
  if ( (unsigned int)dword_1C00AFA90 > 5 && tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000008000LL) )
  {
    v25 = *(unsigned int *)(*(_QWORD *)(v7 + 104) + 352LL);
    v35 = *(_DWORD *)(v24 + 336);
    v36 = *(_DWORD *)(v24 + 332);
    v37 = *(_DWORD *)(v24 + 328);
    v38 = *(_DWORD *)(v24 + 324);
    v43 = v34;
    v34 = *(unsigned __int16 **)(v24 + 1520);
    v39 = 27;
    v40 = v25;
    v41 = v14;
    v42 = v6;
    v44 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v25,
      byte_1C007E096,
      v22,
      v24,
      (__int64)&v44,
      (__int64)&v42,
      (__int64)&v41,
      &v34,
      (__int64)&v43,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v14 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    {
      LODWORD(v31) = v6;
      LODWORD(v29) = v14;
      LODWORD(v27) = *(_DWORD *)(v7 + 24);
      McTemplateK0pqqq_EtwWriteTransfer(v21, &OpenVirtualGpuFailed, v22, *(_QWORD *)(v7 + 16), v27, v29, v31);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v31) = v6;
      LODWORD(v29) = v14;
      LODWORD(v27) = *(_DWORD *)(v7 + 24);
      McTemplateK0pqqq_EtwWriteTransfer(v21, &OpenVirtualGpuEnd, v22, *(_QWORD *)(v7 + 16), v27, v29, v31);
    }
  }
  if ( v47 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
  LOBYTE(v2) = v8;
  return v2;
}
