/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1C001A170
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A6D0 (ACPIBuildCompleteCommon.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001B254 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002F388 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  int v5; // r14d
  int *v6; // r15
  void *v7; // r12
  __int64 v8; // r13
  int v9; // edi
  __int64 **v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edi
  ULONG_PTR v15; // r9
  int v16; // edi
  __int64 v17; // rcx
  int v18; // edx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v22; // rax
  void *v23; // r8
  void *v24; // rdx
  unsigned __int64 v25; // rax

  v4 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v4 + 448) = AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 861098079LL, a3, a4);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v5 = 2;
  v6 = (int *)(v4 + 476);
  v7 = &unk_1C00701BA;
  v8 = 4LL;
  do
  {
    v9 = 1;
    v10 = (__int64 **)(v4 + 376);
    v11 = 1LL;
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        do
        {
          if ( *((_DWORD *)v12 + 4) < v5 )
            break;
          v12 = (__int64 *)*v12;
        }
        while ( v12 );
        if ( !v12 )
          break;
      }
      ++v9;
      ++v11;
      ++v10;
      if ( v11 > 3 )
        goto LABEL_5;
    }
    v22 = *(_QWORD *)(v4 + 8);
    v23 = &unk_1C00701BA;
    v24 = &unk_1C00701BA;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v23 = *(void **)(v4 + 568);
      if ( (v22 & 0x400000000000LL) != 0 )
        v24 = *(void **)(v4 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v24,
        6,
        45,
        (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
        v9 - 1,
        v5 - 1,
        v4,
        (__int64)v23,
        (__int64)v24);
    *v6 = v9;
LABEL_5:
    ++v5;
    ++v6;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(v4 + 500) = *(_DWORD *)(v4 + 4LL * *(int *)(v4 + 496) + 468);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v13 = *(_QWORD *)(v4 + 8);
  v14 = 1;
  if ( (v13 & 0x80000000) != 0 )
  {
    v14 = 4;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v13 & 0x80000) != 0 )
      {
        dword_1C0082908 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
        *(_DWORD *)(v4 + 344) = 1;
      }
      else
      {
        if ( *(_WORD *)(a1 + 82) != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v4, v15, *(unsigned __int16 *)(a1 + 82));
        v25 = *(_QWORD *)(a1 + 96);
        if ( v25 < 4 )
          v14 = DevicePowerStateTranslation[v25];
        else
          v14 = 0;
        dword_1C0082908 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
      }
    }
  }
  v16 = ACPIDeviceInternalDelayedDeviceRequest(v4, v14);
  v17 = *(_QWORD *)(v4 + 8);
  v18 = 0;
  v19 = &unk_1C00701BA;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v7 = *(void **)(v4 + 568);
    v18 = 0;
    if ( (v17 & 0x400000000000LL) != 0 )
      v19 = *(void **)(v4 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      6,
      46,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v16,
      v4,
      (__int64)v7,
      (__int64)v19);
  }
  v20 = *(unsigned int *)(a1 + 32);
  if ( v16 < 0 )
    *(_DWORD *)(a1 + 48) = v16;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v20);
  return (unsigned int)v16;
}
