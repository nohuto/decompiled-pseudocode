/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1C001E630
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     ACPIBuildScheduleDpc @ 0x1C001E2EC (ACPIBuildScheduleDpc.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C00208A0 (WPP_RECORDER_SF_LLqss.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r14d
  _QWORD *v3; // rbp
  _QWORD *v5; // rbx
  int v6; // r12d
  KIRQL v7; // dl
  __int64 *v8; // rax
  __int64 i; // rdi
  __int64 v10; // rcx
  signed __int32 v11; // ecx
  KIRQL v12; // bl
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rdx
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-20h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x101269uLL, 0LL, 0LL);
  v5 = (_QWORD *)v3[90];
  v6 = AcpiBuildDevicePowerNameLookup[v1];
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = (__int64 *)(*v5 + 24LL);
  for ( i = *v8; v8 != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( v6 == *(_DWORD *)(i + 40) )
      goto LABEL_7;
  }
  i = 0LL;
LABEL_7:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
  if ( i )
  {
    dword_1C0082908 = 0;
    i += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(i + 8));
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  *(_QWORD *)(a1 + 56) = i;
  if ( !i )
    goto LABEL_11;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(i + 8));
  v2 = AMLIAsyncEvalObject((__int64 *)i, a1 + 80, 0, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v2 != 259 )
  {
LABEL_11:
    v11 = *(_DWORD *)(a1 + 32);
    if ( v2 < 0 )
      *(_DWORD *)(a1 + 48) = v2;
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v11, 1);
    v12 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v12);
  }
  if ( i )
    AMLIDereferenceHandleEx(i);
  v13 = v3[1];
  v14 = &unk_1C00701BA;
  v15 = &unk_1C00701BA;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v14 = (void *)v3[71];
    if ( (v13 & 0x400000000000LL) != 0 )
      v15 = (void *)v3[72];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (__int64)v15;
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_LLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v15,
      0,
      27,
      v17,
      *(_DWORD *)(a1 + 28) - 3,
      v2,
      (char)v3,
      (__int64)v14,
      v18);
  }
  return 0LL;
}
