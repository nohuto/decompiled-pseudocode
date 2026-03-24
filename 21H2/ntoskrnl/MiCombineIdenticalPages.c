/*
 * XREFs of MiCombineIdenticalPages @ 0x1407266AC
 * Callers:
 *     MmCombineIdenticalPages @ 0x14072665C (MmCombineIdenticalPages.c)
 *     MmManagePartitionCombineMemory @ 0x1408DB868 (MmManagePartitionCombineMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MiCreateUltraThreadContext @ 0x1402E30FC (MiCreateUltraThreadContext.c)
 *     MiGetNextPageColor @ 0x1402E5C08 (MiGetNextPageColor.c)
 *     MiDeleteUltraThreadContext @ 0x1402E65FC (MiDeleteUltraThreadContext.c)
 *     MiCombiningInProgress @ 0x140366CB8 (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiCombineWorkingSet @ 0x14055CC24 (MiCombineWorkingSet.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x1407272B0 (MiCombineAllPhysicalMemory.c)
 */

__int64 __fastcall MiCombineIdenticalPages(
        ULONG_PTR *a1,
        void *a2,
        int a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        _QWORD *a6)
{
  struct _DMA_ADAPTER *v9; // rsi
  struct _DMA_ADAPTER *v10; // r15
  __int64 v11; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR *v15; // rdi
  unsigned int NextPageColor; // eax
  unsigned int v17; // eax
  NTSTATUS v19; // eax
  _DWORD *v20; // r9
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v22; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR *v24; // [rsp+48h] [rbp-B8h]
  _QWORD *v25; // [rsp+50h] [rbp-B0h]
  _QWORD v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v28[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v29[30]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v30; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v31; // [rsp+1D0h] [rbp+D0h]
  _OWORD v32[3]; // [rsp+1E0h] [rbp+E0h] BYREF

  v24 = a1;
  v25 = a6;
  memset(v28, 0, sizeof(v28));
  v30 = 0LL;
  v31 = 0LL;
  memset(v29, 0, sizeof(v29));
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v32, 0, sizeof(v32));
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  v11 = -1LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a4 )
      v11 = (__int64)a4;
    a4 = (void *)v11;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140CFB178 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (Object = 0LL,
        v12 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL),
        v10 = (struct _DMA_ADAPTER *)Object,
        v13 = v12,
        v12 >= 0) )
  {
    if ( a4 )
    {
      v22 = 0LL;
      v19 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &v22, 0LL);
      v9 = (struct _DMA_ADAPTER *)v22;
      v13 = v19;
      if ( v19 < 0 )
      {
LABEL_14:
        if ( v9 )
        {
          KiUnstackDetachProcess((__int64)v32, 0);
          HalPutDmaAdapter(v9);
        }
        goto LABEL_16;
      }
      KiStackAttachProcess((_KPROCESS *)v22, 0LL, (__int64)v32, v20);
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v24 + 806;
    if ( (a3 & 1) == 0 || v24 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v15, v28, 1);
      v23[0] = 0;
      v23[1] = -1;
      v26[0] = qword_140C4ED98;
      v26[1] = qword_140C4EDA0;
      v29[5] = v26;
      v29[6] = v23;
      v29[2] = v28;
      v29[3] = &v30;
      LODWORD(v29[7]) = 2;
      v29[0] = v15;
      v29[1] = v10;
      HIDWORD(v29[7]) = a3;
      v27 = 0LL;
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
        0,
        (__int64)&v27);
      NextPageColor = MiGetNextPageColor((__int64)&v27);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v29[14], NextPageColor, 8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v29[4] = v9 + 104;
          v17 = MiCombineWorkingSet((__int64)v29);
        }
        else
        {
          v29[4] = 0LL;
          v17 = MiCombineAllPhysicalMemory(v29);
        }
        v13 = v17;
        MiDeleteUltraThreadContext((__int64)&v29[14]);
        *v25 = v30;
        _InterlockedIncrement((volatile signed __int32 *)v15 + 96);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 47, *((unsigned __int64 *)&v30 + 1));
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 45, v31);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 46, *((unsigned __int64 *)&v31 + 1));
      }
      else
      {
        v13 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v15, v28, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v13 = -1073741637;
    }
    goto LABEL_14;
  }
LABEL_16:
  if ( v10 )
    HalPutDmaAdapter(v10);
  return v13;
}
