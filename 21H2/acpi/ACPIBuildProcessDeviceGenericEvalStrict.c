/*
 * XREFs of ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C000E000 (WPP_RECORDER_SF_LLqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEvalStrict(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r12d
  _QWORD *v3; // r15
  int v5; // ebp
  __int64 *v6; // rbx
  int v7; // edi
  KIRQL v8; // dl
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rcx
  __int64 v14; // rdx
  void *v15; // rcx
  void *v16; // r8
  signed __int32 v17; // ecx
  KIRQL v18; // di
  int v19; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x1012D1uLL, 0LL, 0LL);
  v6 = (__int64 *)v3[95];
  v7 = AcpiBuildDevicePowerNameLookup[v1];
  v8 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v9 = *v6;
  v10 = *(__int64 **)(*v6 + 24);
  v11 = (__int64 *)(v9 + 24);
  if ( v11 == v10 )
  {
LABEL_5:
    ExReleaseSpinLockShared(&ACPINamespaceLock, v8);
LABEL_6:
    v12 = 0LL;
    goto LABEL_7;
  }
  while ( v7 != *((_DWORD *)v10 + 10) )
  {
    v10 = (__int64 *)*v10;
    if ( v11 == v10 )
      goto LABEL_5;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v8);
  if ( !v10 )
    goto LABEL_6;
  v12 = (volatile signed __int32 *)(v10 + 15);
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v12 + 2);
LABEL_7:
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v13 = *(volatile signed __int32 **)(a1 + 56);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  if ( v13 )
    AMLIDereferenceHandleEx(v13);
  *(_QWORD *)(a1 + 56) = v12;
  if ( v12 )
  {
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v12 + 2);
    v5 = AMLIAsyncEvalObject((_DWORD)v12, (int)a1 + 80, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1);
  }
  v14 = v3[1];
  v15 = &unk_1C006FB8B;
  v16 = &unk_1C006FB8B;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v15 = (void *)v3[76];
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = (void *)v3[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      (__int64)v16,
      0x1Cu,
      BugCheckParameter4,
      *(_DWORD *)(a1 + 28) - 3,
      v5,
      (char)v3,
      (__int64)v15,
      (__int64)v16);
  if ( v5 != 259 )
  {
    v17 = *(_DWORD *)(a1 + 32);
    if ( v5 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v5;
        if ( v12 )
          v2 = *(_DWORD *)(*(_QWORD *)v12 + 40LL);
        KeBugCheckEx(0xA5u, 3uLL, (ULONG_PTR)v12, v5, v2);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v17, 1);
      v18 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v19 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v19;
      if ( (v19 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v19 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v18);
    }
  }
  if ( v12 )
    AMLIDereferenceHandleEx(v12);
  return 0LL;
}
