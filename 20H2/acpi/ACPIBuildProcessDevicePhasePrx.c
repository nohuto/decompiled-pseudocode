/*
 * XREFs of ACPIBuildProcessDevicePhasePrx @ 0x1C001EAF0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015BC4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A470 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_dLqss @ 0x1C001DD7C (WPP_RECORDER_SF_dLqss.c)
 *     ACPIBuildScheduleDpc @ 0x1C001E2EC (ACPIBuildScheduleDpc.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054B08 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbp
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 *v10; // rbx
  int v11; // edi
  KIRQL v12; // dl
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rdx
  const char *v17; // rax
  char v18; // cl
  const char *v19; // rdx
  __int64 v20; // r8
  signed __int32 v21; // ecx
  KIRQL v22; // bl
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]

  v5 = *(_QWORD **)(a1 + 40);
  v6 = 0;
  v7 = a1 + 80;
  v8 = (unsigned int)(*(_DWORD *)(a1 + 28) - 19) >> 1;
  v9 = (unsigned int)(v8 + 1);
  *(_DWORD *)(a1 + 32) = 2 * v8 + 20;
  if ( v5[v9 + 52] || v5[v9 + 46] )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_9;
    dword_1C0082908 = 0;
    pszDest = 0;
    goto LABEL_21;
  }
  v10 = (__int64 *)v5[90];
  v11 = *(_DWORD *)&aPs0Ps1Ps2[4 * v8];
  v12 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v13 = *v10;
  v14 = *(__int64 **)(*v10 + 24);
  v15 = (__int64 *)(v13 + 24);
  if ( v15 == v14 )
  {
LABEL_6:
    v14 = 0LL;
  }
  else
  {
    while ( v11 != *((_DWORD *)v14 + 10) )
    {
      v14 = (__int64 *)*v14;
      if ( v15 == v14 )
        goto LABEL_6;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v12);
  if ( v14 )
  {
    v14 += 15;
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  }
  v5[v9 + 52] = v14;
  v16 = *(__int64 **)(a1 + 56);
  if ( v16 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_9;
    }
    v6 = ACPIBuildDevicePowerNodes(v5, v16, a1 + 80, v9);
    dword_1C0082908 = 0;
    v7 = a1 + 80;
    pszDest = 0;
LABEL_21:
    FreeDataBuffs(v7, 1u);
  }
LABEL_9:
  v17 = (const char *)&unk_1C00701BA;
  v18 = 0;
  v19 = (const char *)&unk_1C00701BA;
  if ( v5 )
  {
    v20 = v5[1];
    a4 = 0x200000000000LL;
    v18 = (char)v5;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v17 = (const char *)v5[71];
      a4 = 0x400000000000LL;
      if ( (v20 & 0x400000000000LL) != 0 )
        v19 = (const char *)v5[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v19,
      (__int64)&WPP_RECORDER_INITIALIZED,
      a4,
      BugCheckParameter4,
      v8,
      v6,
      v18,
      v17,
      v19);
  v21 = *(_DWORD *)(a1 + 32);
  if ( v6 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v6 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v6;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v6, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v21, 1);
    v22 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v22);
  }
  return (unsigned int)v6;
}
