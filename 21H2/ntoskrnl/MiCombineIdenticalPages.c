/*
 * XREFs of MiCombineIdenticalPages @ 0x140726B60
 * Callers:
 *     MmCombineIdenticalPages @ 0x140726B10 (MmCombineIdenticalPages.c)
 *     MmManagePartitionCombineMemory @ 0x1408DB9C8 (MmManagePartitionCombineMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiCombiningInProgress @ 0x140366E68 (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiCombineWorkingSet @ 0x14055CE64 (MiCombineWorkingSet.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v22; // eax
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v24; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR *v26; // [rsp+48h] [rbp-B8h]
  _QWORD *v27; // [rsp+50h] [rbp-B0h]
  _QWORD v28[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v30[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v31[30]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v32; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v33; // [rsp+1D0h] [rbp+D0h]
  _OWORD v34[3]; // [rsp+1E0h] [rbp+E0h] BYREF

  v26 = a1;
  v27 = a6;
  memset(v30, 0, sizeof(v30));
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v34, 0, sizeof(v34));
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
      v24 = 0LL;
      v22 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &v24, 0LL);
      v9 = (struct _DMA_ADAPTER *)v24;
      v13 = v22;
      if ( v22 < 0 )
      {
LABEL_14:
        if ( v9 )
        {
          KiUnstackDetachProcess((__int64)v34, 0LL);
          HalPutDmaAdapter(v9);
        }
        goto LABEL_16;
      }
      KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)v34);
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v26 + 806;
    if ( (a3 & 1) == 0 || v26 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v15, v30, 1);
      v25[0] = 0;
      v25[1] = -1;
      v28[0] = qword_140C4EDD8;
      v28[1] = qword_140C4EDE0;
      v31[5] = v28;
      v31[6] = v25;
      v31[2] = v30;
      v31[3] = &v32;
      LODWORD(v31[7]) = 2;
      v31[0] = v15;
      v31[1] = v10;
      HIDWORD(v31[7]) = a3;
      v29 = 0LL;
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
        0,
        (__int64)&v29);
      NextPageColor = MiGetNextPageColor((__int64)&v29);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v31[14], NextPageColor, 8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v31[4] = v9 + 104;
          v17 = MiCombineWorkingSet((__int64)v31);
        }
        else
        {
          v31[4] = 0LL;
          v17 = MiCombineAllPhysicalMemory(v31);
        }
        v13 = v17;
        MiDeleteUltraThreadContext((__int64)&v31[14]);
        *v27 = v32;
        _InterlockedIncrement((volatile signed __int32 *)v15 + 96);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 47, *((unsigned __int64 *)&v32 + 1));
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 45, v33);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 46, *((unsigned __int64 *)&v33 + 1));
      }
      else
      {
        v13 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v15, v30, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v18, v19, v20);
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
