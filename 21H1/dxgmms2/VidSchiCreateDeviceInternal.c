/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C007FCC0
 * Callers:
 *     VidSchCreateDevice @ 0x1C00800F0 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C0095C74 (VidSchCreateSystemDevices.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007330 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiIncrementDeviceReference @ 0x1C0010D14 (VidSchiIncrementDeviceReference.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0015BD8 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C002D42C (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C007F764 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C007FFE0 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C0080038 (VidSchiReadDeviceConfiguration.c)
 *     VidSchTerminateDevice @ 0x1C0080130 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncDevice @ 0x1C0087B00 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  struct DXGPROCESS *Current; // rbp
  char *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rbx
  __int64 v13; // xmm1_8
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  ADAPTER_RENDER *v24; // rcx
  bool v25; // zf
  int v26; // r14d
  int v27; // ebp
  HANDLE CurrentProcessId; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbp
  int v34; // eax
  _DXGKARG_CREATEDEVICE v35; // [rsp+50h] [rbp-38h] BYREF

  *a4 = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v30 = WdLogNewEntry5_WdWarning(a1, a2);
      WdLogEvent5_WdWarning(v30);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x6A8uLL, 0x33616956u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x6A8uLL);
    *(_DWORD *)v12 = 862021974;
    *((_QWORD *)v12 + 1) = a3;
    ExInitializeResourceLite((PERESOURCE)(v12 + 968));
    *((_QWORD *)v12 + 4) = a1;
    *((_OWORD *)v12 + 3) = *(_OWORD *)a2;
    v13 = *(_QWORD *)(a2 + 16);
    *((_DWORD *)v12 + 126) = -1;
    *((_QWORD *)v12 + 8) = v13;
    VidSchiReadDeviceConfiguration(v12);
    *((_QWORD *)v12 + 10) = v12 + 72;
    *((_QWORD *)v12 + 9) = v12 + 72;
    *((_QWORD *)v12 + 12) = v12 + 88;
    *((_QWORD *)v12 + 11) = v12 + 88;
    *((_QWORD *)v12 + 202) = v12 + 1608;
    *((_QWORD *)v12 + 201) = v12 + 1608;
    *((_QWORD *)v12 + 16) = v12 + 120;
    *((_QWORD *)v12 + 15) = v12 + 120;
    *((_QWORD *)v12 + 18) = v12 + 136;
    *((_QWORD *)v12 + 17) = v12 + 136;
    *((_QWORD *)v12 + 20) = v12 + 152;
    *((_QWORD *)v12 + 19) = v12 + 152;
    *((_QWORD *)v12 + 22) = v12 + 168;
    *((_QWORD *)v12 + 21) = v12 + 168;
    VidSchSetQueuedPresentLimit(v12, 0LL);
    memset64(v12 + 376, 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference((__int64)v12);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1712), a1 + 288, (_QWORD *)v12 + 13, 0LL);
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v21 = g_pVidSchSystemProcess;
      *((_QWORD *)v12 + 5) = g_pVidSchSystemProcess;
      v14 = v21;
    }
    else
    {
      v14 = *((_QWORD *)Current + 8);
      if ( v14 )
        v14 = *(_QWORD *)(v14 + 24);
      *((_QWORD *)v12 + 5) = v14;
    }
    v15 = *(_DWORD *)(*(_QWORD *)(v14 + 2616) + 4 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5));
    if ( _bittest(&v15, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      LODWORD(v14) = -1073741790;
    }
    else
    {
      LODWORD(v14) = VidSchiOpenProcessAdapterInfo(v14, a1);
      if ( (int)v14 >= 0 )
      {
        v12[240] = 1;
        if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          memset(&v35, 0, 24);
          v22 = *(unsigned int *)(a1 + 4);
          v35.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 1;
          v23 = *(_QWORD **)(*((_QWORD *)Current + 6) + 8 * v22);
          if ( v23 )
            v23 = (_QWORD *)v23[2];
          v24 = *(ADAPTER_RENDER **)(a1 + 8);
          v35.hKmdProcess = v23;
          LODWORD(v14) = ADAPTER_RENDER::DdiCreateDevice(v24, &v35);
          if ( (int)v14 < 0 )
            goto LABEL_32;
          v25 = bTracingEnabled == 0;
          *((_QWORD *)v12 + 2) = v35.hDevice;
          if ( !v25 )
          {
            v26 = *((_DWORD *)v12 + 12) >> 2;
            v27 = *((_DWORD *)v12 + 12) >> 1;
            CurrentProcessId = PsGetCurrentProcessId();
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0ppqpttq_EtwWriteTransfer(
                v29,
                &EventCreateDevice,
                v16,
                CurrentProcessId,
                *(_QWORD *)(a1 + 16),
                -1,
                v12,
                v27 & 1,
                v26 & 1);
          }
        }
        else
        {
          *((_QWORD *)v12 + 2) = *(_QWORD *)(a3 + 584);
        }
        if ( (*((_DWORD *)v12 + 12) & 2) == 0 )
        {
LABEL_14:
          *a4 = v12;
          return (unsigned int)v14;
        }
        if ( *(_BYTE *)(a1 + 2132) )
        {
          v33 = 0LL;
          if ( !*(_DWORD *)(a1 + 40) )
            goto LABEL_14;
          while ( 1 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 8 * v33 + 3104) + 4LL) )
            {
              LOBYTE(v16) = 1;
              v34 = VidSchControlVSyncDevice(v12, 2LL, v16, (unsigned int)v33);
              v14 = v34;
              if ( v34 < 0 )
                break;
            }
            v33 = (unsigned int)(v33 + 1);
            if ( (unsigned int)v33 >= *(_DWORD *)(a1 + 40) )
              goto LABEL_14;
          }
        }
        else
        {
          LOBYTE(v16) = 1;
          v18 = VidSchControlVSyncDevice(v12, 2LL, v16, 4294967293LL);
          v14 = v18;
          if ( v18 >= 0 )
            goto LABEL_14;
        }
        v32 = WdLogNewEntry5_WdAssertion(v20, v19, v16);
        *(_QWORD *)(v32 + 24) = v14;
        WdLogEvent5_WdAssertion(v32);
      }
    }
LABEL_32:
    VidSchTerminateDevice(v12);
    return (unsigned int)v14;
  }
  v31 = WdLogNewEntry5_WdWarning(v11, v10);
  WdLogEvent5_WdWarning(v31);
  return 3221225495LL;
}
