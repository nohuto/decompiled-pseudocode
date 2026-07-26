/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005ADC8
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C005D130 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C0059958 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005AB18 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005C9C0 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x1C005D478 (McTemplateK0qxxq_EtwWriteTransfer.c)
 *     McTemplateK0ujjpx_EtwWriteTransfer @ 0x1C005D688 (McTemplateK0ujjpx_EtwWriteTransfer.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C005D73C (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C005DA00 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x1C008AD80 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDI.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008B72C (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A57F4 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A77C4 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C0113F90 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C011410C (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURI.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x1C01141B0 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C011470C (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned __int8 v2; // r14
  unsigned __int64 v3; // r15
  unsigned int v5; // r12d
  int v6; // r9d
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _GUID InterfaceGuid; // xmm0
  bool v23; // zf
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  int v27; // eax
  __int128 v28; // xmm0
  unsigned int i; // r14d
  unsigned __int64 v30; // rcx
  wchar_t *v31; // rdx
  int v32; // r8d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  int v36; // [rsp+28h] [rbp-E0h]
  unsigned __int8 NewIrql; // [rsp+58h] [rbp-B0h]
  KIRQL NewIrql_1; // [rsp+59h] [rbp-AFh]
  unsigned __int64 v39; // [rsp+5Ch] [rbp-ACh]
  int v40; // [rsp+64h] [rbp-A4h]
  _QWORD v41[3]; // [rsp+70h] [rbp-98h] BYREF
  GUID v42; // [rsp+88h] [rbp-80h] BYREF
  __int128 v43; // [rsp+98h] [rbp-70h] BYREF
  int v44; // [rsp+A8h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-48h]
  __int128 v47; // [rsp+D0h] [rbp-38h]
  int v48; // [rsp+E0h] [rbp-28h]
  __int128 v49; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v50; // [rsp+F8h] [rbp-10h]
  __int128 v51; // [rsp+108h] [rbp+0h]
  __int128 v52; // [rsp+118h] [rbp+10h] BYREF
  __int128 v53; // [rsp+128h] [rbp+20h]
  __int128 v54; // [rsp+138h] [rbp+30h]

  v2 = ndisConnectedStandby;
  v3 = ndisLastCsScenarioInstanceId;
  NewIrql = ndisConnectedStandby;
  AoAc = a1->AoAc;
  v39 = 0LL;
  v52 = 0LL;
  v5 = 0;
  v48 = 0;
  v53 = 0LL;
  v44 = 0;
  v54 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  *(_OWORD *)&v41[1] = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v43 = 0LL;
  NewIrql_1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  ndisAoAcWriteRefcountRundown(a1, AoAc);
  if ( v2 )
  {
    ndisTraceNicAutoPowerSaver(a1, 1u);
    v7 = (_DWORD *)((char *)AoAc + 500);
    v8 = 576LL;
    v9 = 17LL;
    v10 = MEMORY[0xFFFFF78000000008];
    do
    {
      *(_QWORD *)((char *)AoAc + v8 - 8) = 0LL;
      v11 = 0LL;
      if ( *v7++ > 0 )
        v11 = v10;
      *(_QWORD *)((char *)AoAc + v8) = v11;
      v8 += 16LL;
      --v9;
    }
    while ( v9 );
    *((_QWORD *)AoAc + 106) = 0LL;
    *((_DWORD *)AoAc + 210) = 0;
    *((_QWORD *)AoAc + 110) = 0LL;
    *((_QWORD *)AoAc + 107) = 0LL;
    *((_QWORD *)AoAc + 108) = 0LL;
    *((_QWORD *)AoAc + 109) = 0LL;
    *((_DWORD *)AoAc + 278) = 0;
    *((_QWORD *)AoAc + 140) = 0LL;
    *((_QWORD *)AoAc + 141) = 0LL;
    *((_QWORD *)AoAc + 142) = 0LL;
    *((_QWORD *)AoAc + 143) = 0LL;
    *((_DWORD *)AoAc + 288) = 0;
    *((_QWORD *)AoAc + 145) = 0LL;
    *((_QWORD *)AoAc + 146) = 0LL;
    *((_QWORD *)AoAc + 147) = 0LL;
    memset((char *)AoAc + 936, 0, 0xA8uLL);
    v13 = *((_DWORD *)AoAc + 94);
    if ( (v13 & 0xFFFFFFFC) == 0 && v13 != 2 )
      *((_QWORD *)AoAc + 108) = v10;
  }
  else
  {
    v14 = (_QWORD *)((char *)AoAc + 576);
    v15 = 17LL;
    do
    {
      if ( *v14 )
      {
        *(v14 - 1) += MEMORY[0xFFFFF78000000008] - *v14;
        *v14 = 0LL;
      }
      v14 += 2;
      --v15;
    }
    while ( v15 );
    if ( *((_QWORD *)AoAc + 109) )
    {
      *((_QWORD *)AoAc + 107) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 109);
      *((_QWORD *)AoAc + 109) = 0LL;
    }
    if ( *((_QWORD *)AoAc + 108) )
    {
      *((_QWORD *)AoAc + 106) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 108);
      *((_QWORD *)AoAc + 108) = 0LL;
    }
    v16 = -444972355;
    if ( (byte_1C00E6083 & 4) != 0 )
      McTemplateK0qxxq_EtwWriteTransfer(
        -444972355,
        *((_QWORD *)AoAc + 106) / 0x989680uLL,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        *((_QWORD *)AoAc + 106) / 0x989680uLL,
        *((_DWORD *)AoAc + 210));
    v17 = *(_OWORD *)((char *)AoAc + 952);
    v52 = *(_OWORD *)((char *)AoAc + 936);
    v18 = *(_OWORD *)((char *)AoAc + 968);
    v53 = v17;
    v19 = *(_OWORD *)((char *)AoAc + 984);
    v54 = v18;
    v20 = *(_OWORD *)((char *)AoAc + 1000);
    v49 = v19;
    v21 = *(_OWORD *)((char *)AoAc + 1016);
    v50 = v20;
    InterfaceGuid = a1->InterfaceGuid;
    v51 = v21;
    *(_GUID *)&v41[1] = InterfaceGuid;
    v23 = *((_QWORD *)AoAc + 107) == 0LL;
    v24 = *(_OWORD *)((char *)AoAc + 1048);
    v5 = *((_DWORD *)AoAc + 220);
    HIDWORD(v39) = *((_DWORD *)AoAc + 221);
    v25 = *((_DWORD *)AoAc + 270);
    v45 = *(_OWORD *)((char *)AoAc + 1032);
    v48 = v25;
    v26 = *(_OWORD *)((char *)AoAc + 1064);
    v44 = *((_DWORD *)AoAc + 275);
    v27 = *((_DWORD *)AoAc + 210);
    v47 = v26;
    v28 = *(_OWORD *)((char *)AoAc + 1084);
    LODWORD(v39) = v27;
    v46 = v24;
    v43 = v28;
    if ( !v23 )
    {
      v42 = 0LL;
      if ( (byte_1C00E6085 & 0x10) != 0 )
      {
        LOBYTE(v6) = v3;
        McTemplateK0ujjpx_EtwWriteTransfer(
          v16,
          v15,
          (_DWORD)a1 + 4008,
          v6,
          v36,
          (__int64)&a1->InterfaceGuid,
          (char)a1->PhysicalDeviceObject,
          v3);
      }
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      {
        LOBYTE(v6) = v3;
        McTemplateK0ujqzr2jxx_EtwWriteTransfer(
          a1->pAdapterInstanceName,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (_DWORD)a1 + 4008,
          v6,
          (__int64)&GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          *((_QWORD *)AoAc + 107),
          v3);
      }
      for ( i = 0; i < 0x11; ++i )
      {
        v30 = *((_QWORD *)AoAc + 2 * i + 71);
        if ( v30 )
        {
          v42 = GUID_CS_BLOCKER_GEN;
          v42.Data4[0] = i;
          v31 = (&off_1C00C9020)[2 * (int)i];
          v32 = *((_DWORD *)&off_1C00C9020 + 4 * (int)i + 2);
          v42.Data3 = a1->IfIndex;
          v33 = *((_QWORD *)AoAc + 107);
          v41[0] = v31;
          v40 = v32;
          if ( v30 > v33 )
          {
            *((_QWORD *)AoAc + 2 * i + 71) = v33;
            v30 = v33;
          }
          if ( (byte_1C00E6083 & 4) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              v30,
              v30 / 0x989680,
              (_DWORD)a1 + 4008,
              a1->NetLuid.Value,
              i,
              v30 / 0x989680);
            v31 = (wchar_t *)v41[0];
            v32 = v40;
          }
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          {
            LOBYTE(v6) = v3;
            McTemplateK0ujqzr2jxx_EtwWriteTransfer(
              v30,
              (_DWORD)v31,
              (_DWORD)a1 + 4008,
              v6,
              (__int64)&a1->InterfaceGuid,
              v32,
              (__int64)v31,
              (__int64)&v42,
              *((_QWORD *)AoAc + 2 * i + 71),
              v3);
          }
        }
      }
      v2 = NewIrql;
    }
    ndisTraceNicAutoPowerSaver(a1, 0);
    NdisTraceLoggingPowerOnStatistics(a1);
    NdisTraceLoggingCsStateChange(
      a1,
      AoAc,
      v3,
      (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v45,
      (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v43,
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v52,
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v49);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, NewIrql_1);
  if ( v2 )
  {
    ndisUpdateMiniportCsTrafficStatistics(a1, 0LL);
  }
  else
  {
    ndisPublishSleepStudyCustomData(v3, (const struct _GUID *)&v41[1], L"Power Transitions", (unsigned int)v39);
    ndisPublishSleepStudyCustomData(v3, (const struct _GUID *)&v41[1], L"Surprise Wakes", v5);
    ndisPublishSleepStudyCustomData(v3, (const struct _GUID *)&v41[1], L"Spurious Wakes", HIDWORD(v39));
    ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
      v3,
      (const struct _GUID *)&v41[1],
      (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v45,
      (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v43);
    ndisPublishSleepStudyCustomDataCsTraffic(
      v3,
      (const struct _GUID *)&v41[1],
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v52,
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v49);
    ndisPublishSleepStudyCustomData(
      v3,
      (const struct _GUID *)&v41[1],
      L"Last Wake IRP Latency (ms)",
      *((_QWORD *)AoAc + 141));
    ndisPublishSleepStudyCustomData(
      v3,
      (const struct _GUID *)&v41[1],
      L"Max Wake IRP Latency (ms)",
      *((_QWORD *)AoAc + 142));
    v34 = ComputeRoundedAverage(*((_QWORD *)AoAc + 143), *((unsigned int *)AoAc + 278));
    ndisPublishSleepStudyCustomData(v3, (const struct _GUID *)&v41[1], L"Avg Wake IRP Latency (ms)", v34);
    ndisPublishSleepStudyCustomData(
      v3,
      (const struct _GUID *)&v41[1],
      L"Last SetPowerOid Latency (ms)",
      *((_QWORD *)AoAc + 145));
    ndisPublishSleepStudyCustomData(
      v3,
      (const struct _GUID *)&v41[1],
      L"Max SetPowerOid Latency (ms)",
      *((_QWORD *)AoAc + 146));
    v35 = ComputeRoundedAverage(*((_QWORD *)AoAc + 147), *((unsigned int *)AoAc + 288));
    ndisPublishSleepStudyCustomData(v3, (const struct _GUID *)&v41[1], L"Avg SetPowerOid Latency (ms)", v35);
    ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v3, (const struct _GUID *)&v41[1]);
  }
  ndisNicAutoPowerSaverResetTelemetryData(a1);
}
