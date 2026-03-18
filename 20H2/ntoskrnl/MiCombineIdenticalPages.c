/*
 * XREFs of MiCombineIdenticalPages @ 0x140722C1C
 * Callers:
 *     MmCombineIdenticalPages @ 0x140722BCC (MmCombineIdenticalPages.c)
 *     MmManagePartitionCombineMemory @ 0x1408DE0A8 (MmManagePartitionCombineMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiDeleteUltraThreadContext @ 0x1403338B8 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x140333FE4 (MiCreateUltraThreadContext.c)
 *     MiGetNextPageColor @ 0x140336AE8 (MiGetNextPageColor.c)
 *     MiCombiningInProgress @ 0x140366A08 (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiCombineWorkingSet @ 0x14055B154 (MiCombineWorkingSet.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x140723820 (MiCombineAllPhysicalMemory.c)
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
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v21; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR *v23; // [rsp+48h] [rbp-B8h]
  _QWORD *v24; // [rsp+50h] [rbp-B0h]
  _QWORD v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v27[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[30]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v29; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v30; // [rsp+1D0h] [rbp+D0h]
  _OWORD v31[3]; // [rsp+1E0h] [rbp+E0h] BYREF

  v23 = a1;
  v24 = a6;
  memset(v27, 0, sizeof(v27));
  v29 = 0LL;
  v30 = 0LL;
  memset(v28, 0, sizeof(v28));
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v31, 0, sizeof(v31));
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
      v21 = 0LL;
      v19 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &v21, 0LL);
      v9 = (struct _DMA_ADAPTER *)v21;
      v13 = v19;
      if ( v19 < 0 )
      {
LABEL_14:
        if ( v9 )
        {
          KiUnstackDetachProcess((__int64)v31, 0);
          HalPutDmaAdapter(v9);
        }
        goto LABEL_16;
      }
      KiStackAttachProcess((_KPROCESS *)v21, 0, (__int64)v31);
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v23 + 806;
    if ( (a3 & 1) == 0 || v23 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v15, v27, 1);
      v22[0] = 0;
      v22[1] = -1;
      v25[0] = qword_140C4EC18;
      v25[1] = qword_140C4EC20;
      v28[5] = v25;
      v28[6] = v22;
      v28[2] = v27;
      v28[3] = &v29;
      LODWORD(v28[7]) = 2;
      v28[0] = v15;
      v28[1] = v10;
      HIDWORD(v28[7]) = a3;
      v26 = 0LL;
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
        0,
        (__int64)&v26);
      NextPageColor = MiGetNextPageColor((__int64)&v26);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v28[14], NextPageColor, 8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v28[4] = v9 + 104;
          v17 = MiCombineWorkingSet((__int64)v28);
        }
        else
        {
          v28[4] = 0LL;
          v17 = MiCombineAllPhysicalMemory(v28);
        }
        v13 = v17;
        MiDeleteUltraThreadContext((__int64)&v28[14]);
        *v24 = v29;
        _InterlockedIncrement((volatile signed __int32 *)v15 + 96);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 47, *((unsigned __int64 *)&v29 + 1));
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 45, v30);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 46, *((unsigned __int64 *)&v30 + 1));
      }
      else
      {
        v13 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v15, v27, 0);
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
