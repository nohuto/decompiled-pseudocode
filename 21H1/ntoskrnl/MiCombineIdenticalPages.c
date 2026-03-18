/*
 * XREFs of MiCombineIdenticalPages @ 0x1407128D0
 * Callers:
 *     MmCombineIdenticalPages @ 0x140712880 (MmCombineIdenticalPages.c)
 *     MmManagePartitionCombineMemory @ 0x1408D6F18 (MmManagePartitionCombineMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MiGetNextPageColor @ 0x140280344 (MiGetNextPageColor.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     MiCombiningInProgress @ 0x140364068 (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiCombineWorkingSet @ 0x140557134 (MiCombineWorkingSet.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 */

__int64 __fastcall MiCombineIdenticalPages(
        ULONG_PTR *a1,
        void *a2,
        int a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        _QWORD *a6)
{
  __int64 v9; // r8
  _DWORD *v10; // r9
  struct _DMA_ADAPTER *v11; // rsi
  struct _DMA_ADAPTER *v12; // r15
  __int64 v13; // rax
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR *v17; // rdi
  unsigned int NextPageColor; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  NTSTATUS v24; // eax
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v26; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR *v28; // [rsp+48h] [rbp-B8h]
  _QWORD *v29; // [rsp+50h] [rbp-B0h]
  _QWORD v30[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v32[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v33[30]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v34; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v35; // [rsp+1D0h] [rbp+D0h]
  _OWORD v36[3]; // [rsp+1E0h] [rbp+E0h] BYREF

  v28 = a1;
  v29 = a6;
  memset(v32, 0, sizeof(v32));
  v34 = 0LL;
  v35 = 0LL;
  memset(v33, 0, sizeof(v33));
  *a6 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset(v36, 0, sizeof(v36));
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  v13 = -1LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a4 )
      v13 = (__int64)a4;
    a4 = (void *)v13;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140CFB178 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (Object = 0LL,
        v14 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL),
        v12 = (struct _DMA_ADAPTER *)Object,
        v15 = v14,
        v14 >= 0) )
  {
    if ( a4 )
    {
      v26 = 0LL;
      v24 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &v26, 0LL);
      v11 = (struct _DMA_ADAPTER *)v26;
      v15 = v24;
      if ( v24 < 0 )
      {
LABEL_14:
        if ( v11 )
        {
          KiUnstackDetachProcess((__int64)v36, 0LL, v9, v10);
          HalPutDmaAdapter(v11);
        }
        goto LABEL_16;
      }
      KiStackAttachProcess((_KPROCESS *)v26, 0LL, (__int64)v36, v10);
    }
    CurrentThread = KeGetCurrentThread();
    v17 = v28 + 806;
    if ( (a3 & 1) == 0 || v28 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v17, v32, 1);
      v27[0] = 0;
      v27[1] = -1;
      v30[0] = qword_140C4ECD8;
      v30[1] = qword_140C4ECE0;
      v33[5] = v30;
      v33[6] = v27;
      v33[2] = v32;
      v33[3] = &v34;
      LODWORD(v33[7]) = 2;
      v33[0] = v17;
      v33[1] = v12;
      HIDWORD(v33[7]) = a3;
      v31 = 0LL;
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
        0,
        (__int64)&v31);
      NextPageColor = MiGetNextPageColor((__int64)&v31);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v33[14], NextPageColor, 8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v33[4] = v11 + 104;
          v19 = MiCombineWorkingSet((__int64)v33);
        }
        else
        {
          v33[4] = 0LL;
          v19 = MiCombineAllPhysicalMemory(v33);
        }
        v15 = v19;
        MiDeleteUltraThreadContext((__int64)&v33[14]);
        *v29 = v34;
        _InterlockedIncrement((volatile signed __int32 *)v17 + 96);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 47, *((unsigned __int64 *)&v34 + 1));
        _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 45, v35);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 46, *((unsigned __int64 *)&v35 + 1));
      }
      else
      {
        v15 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v17, v32, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v20, v21, v22);
    }
    else
    {
      v15 = -1073741637;
    }
    goto LABEL_14;
  }
LABEL_16:
  if ( v12 )
    HalPutDmaAdapter(v12);
  return v15;
}
