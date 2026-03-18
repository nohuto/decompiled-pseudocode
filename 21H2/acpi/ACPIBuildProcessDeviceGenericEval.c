/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1C000D330
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildScheduleDpc @ 0x1C000C2F4 (ACPIBuildScheduleDpc.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C000E000 (WPP_RECORDER_SF_LLqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  _QWORD *v3; // r14
  __int64 *v5; // rbx
  int v6; // edi
  KIRQL v7; // dl
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rcx
  signed __int32 v13; // ecx
  KIRQL v14; // bl
  int v15; // r8d
  __int64 v16; // rax
  void *v17; // rcx
  void *v18; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+48h] [rbp-20h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x101257uLL, 0LL, 0LL);
  v5 = (__int64 *)v3[95];
  v6 = AcpiBuildDevicePowerNameLookup[v1];
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = *v5;
  v9 = *(__int64 **)(*v5 + 24);
  v10 = (__int64 *)(v8 + 24);
  if ( v10 == v9 )
  {
LABEL_5:
    ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
LABEL_6:
    v11 = 0LL;
    goto LABEL_7;
  }
  while ( v6 != *((_DWORD *)v9 + 10) )
  {
    v9 = (__int64 *)*v9;
    if ( v10 == v9 )
      goto LABEL_5;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
  if ( !v9 )
    goto LABEL_6;
  v11 = (volatile signed __int32 *)(v9 + 15);
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v9 + 32);
LABEL_7:
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v12 = *(volatile signed __int32 **)(a1 + 56);
  if ( v12 )
    AMLIDereferenceHandleEx(v12);
  *(_QWORD *)(a1 + 56) = v11;
  if ( v11 )
  {
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v11 + 2);
    v2 = AMLIAsyncEvalObject((_DWORD)v11, (int)a1 + 80, 0, 0, (__int64)ACPIBuildCompleteGeneric, a1);
    if ( v2 == 259 )
      goto LABEL_22;
  }
  v13 = *(_DWORD *)(a1 + 32);
  if ( v2 < 0 )
    *(_DWORD *)(a1 + 48) = v2;
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v13, 1);
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  ACPIBuildScheduleDpc();
  KeReleaseSpinLock(&AcpiBuildQueueLock, v14);
  if ( v11 )
LABEL_22:
    AMLIDereferenceHandleEx(v11);
  v16 = v3[1];
  v17 = &unk_1C006FB8B;
  v18 = &unk_1C006FB8B;
  if ( (v16 & 0x200000000000LL) != 0 )
  {
    v17 = (void *)v3[76];
    if ( (v16 & 0x400000000000LL) != 0 )
      v18 = (void *)v3[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = (__int64)v18;
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_LLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v18,
      v15,
      27,
      BugCheckParameter4,
      *(_DWORD *)(a1 + 28) - 3,
      v2,
      (char)v3,
      (__int64)v17,
      v21);
  }
  return 0LL;
}
