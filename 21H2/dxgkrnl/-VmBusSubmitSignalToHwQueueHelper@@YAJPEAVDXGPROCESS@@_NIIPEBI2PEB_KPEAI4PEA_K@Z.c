/*
 * XREFs of ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C038240C
 * Callers:
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C037CE14 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C033FD90 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall VmBusSubmitSignalToHwQueueHelper(
        struct DXGPROCESS *a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned __int64 *a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // r11d
  unsigned int v19; // esi
  __int64 v20; // r9
  unsigned int v21; // ecx
  DXGSYNCOBJECT *v22; // rcx
  unsigned int HostHandle; // eax
  __int64 v24; // r8
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 *v28; // rdx
  struct DXGPROCESS *v30; // [rsp+80h] [rbp+8h]

  v30 = a1;
  v11 = 0;
  if ( a7 && a6 )
  {
    while ( 1 )
    {
      if ( v11 >= a4 )
      {
        v16 = 0LL;
        while ( (unsigned int)v16 < a3 )
        {
          v17 = (a6[v16] >> 6) & 0xFFFFFF;
          v18 = a6[v16] >> 30;
          v19 = *((_DWORD *)a1 + 74);
          if ( (unsigned int)v17 < v19
            && (v20 = *((_QWORD *)a1 + 35),
                v21 = *(_DWORD *)(v20 + 16LL * (unsigned int)v17 + 8),
                v18 == ((v21 >> 5) & 3))
            && (v21 & 0x2000) == 0
            && (v21 & 0x1F) == 8 )
          {
            v22 = *(DXGSYNCOBJECT **)(v20 + 16LL * (unsigned int)v17);
          }
          else
          {
            v22 = 0LL;
          }
          if ( v22 )
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(v22, a6[v16]);
          }
          else
          {
            if ( (unsigned int)v17 >= v19 )
              goto LABEL_31;
            v24 = *((_QWORD *)v30 + 35);
            v25 = *(_DWORD *)(v24 + 16 * v17 + 8);
            if ( v18 != ((v25 >> 5) & 3) || (v25 & 0x2000) != 0 || (v25 & 0x1F) == 0 )
              goto LABEL_31;
            v26 = 2 * v17;
            if ( (v25 & 0x1F) != 0xB )
            {
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_31:
              WdLogSingleEntry1(2LL, a6[(unsigned int)v16]);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid sync object handle 0x%I64x",
                a6[(unsigned int)v16],
                0LL,
                0LL,
                0LL,
                0LL);
              return 3221225485LL;
            }
            v27 = *(_QWORD *)(v24 + 8 * v26);
            if ( !v27 )
              goto LABEL_31;
            HostHandle = *(_DWORD *)(v27 + 44);
          }
          a9[v16] = HostHandle;
          if ( a2 )
          {
            v28 = (unsigned __int64 *)&a7[v16];
            if ( (unsigned __int64)v28 >= MmUserProbeAddress )
              v28 = (unsigned __int64 *)MmUserProbeAddress;
            a10[v16] = *v28;
          }
          else
          {
            a10[v16] = a7[v16];
          }
          v16 = (unsigned int)(v16 + 1);
          a1 = v30;
        }
        return 0LL;
      }
      v12 = (a5[v11] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v12 >= *((_DWORD *)a1 + 74) )
        goto LABEL_10;
      v13 = *((_QWORD *)a1 + 35);
      v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
      if ( ((a5[v11] >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
        || (v14 & 0x2000) != 0
        || (v14 & 0x1F) == 0 )
      {
        goto LABEL_10;
      }
      if ( (v14 & 0x1F) != 0xF )
        break;
      v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
LABEL_11:
      if ( !v15 )
      {
        WdLogSingleEntry1(2LL, a5[v11]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid HwQueue handle: 0x%I64x",
          a5[v11],
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      a8[v11++] = *(_DWORD *)(v15 + 28);
      a1 = v30;
    }
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v15 = 0LL;
    goto LABEL_11;
  }
  WdLogSingleEntry1(2LL, 8648LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"MonitoredFenceValueArray or ObjectHandleArray not specified for submit signal to HwQueue",
    8648LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
