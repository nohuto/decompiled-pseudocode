/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1406D03C8
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x14030E630 (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1406D0330 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x1406D0954 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     MiPrefetchVirtualMemory @ 0x140248300 (MiPrefetchVirtualMemory.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     ObIsKernelHandle @ 0x140310AB0 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140533B00 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4)
{
  int v6; // ebx
  struct _DMA_ADAPTER *v7; // r15
  struct _DMA_ADAPTER *v8; // r14
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  _KPROCESS *v14; // rax
  ULONG_PTR BugCheckParameter1a; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-39h]
  unsigned __int64 v18; // [rsp+58h] [rbp-31h]
  _OWORD v19[3]; // [rsp+60h] [rbp-29h] BYREF

  v17 = a3;
  v18 = a2;
  BugCheckParameter1a = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  memset(v19, 0, sizeof(v19));
  CurrentThread = KeGetCurrentThread();
  if ( !BugCheckParameter1 )
  {
    SessionVm = 1LL;
    goto LABEL_31;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    if ( BugCheckParameter1 == -3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[281] & 0x10000) == 0 )
        return -1073741799;
      SessionVm = MiGetSessionVm();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle((HANDLE)BugCheckParameter1) )
      return -1073741585;
    if ( (int)ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                8,
                (__int64)PsProcessType,
                0,
                0x66506D4Du,
                &BugCheckParameter1a,
                0LL,
                0LL) >= 0 )
    {
      p_LockNV = (_DWORD *)BugCheckParameter1a;
      if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1a )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)v19);
        v6 = 1;
      }
      goto LABEL_15;
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle((HANDLE)BugCheckParameter1, 1u, MmSessionObjectType, 0, &Object, 0LL);
    v7 = (struct _DMA_ADAPTER *)Object;
    if ( result < 0 )
      return result;
    v14 = (_KPROCESS *)MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v8 = (struct _DMA_ADAPTER *)v14;
    if ( !v14 )
    {
LABEL_29:
      HalPutDmaAdapter(v7);
      return 0;
    }
    if ( (int)MmAttachSession(v14, (__int64)v19) < 0 )
    {
      HalPutDmaAdapter(v8);
      goto LABEL_29;
    }
    SessionVm = MiGetSessionVm();
LABEL_31:
    p_LockNV = (_DWORD *)BugCheckParameter1a;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  SessionVm = (unsigned __int64)(p_LockNV + 416);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v18, v17, SessionVm, a4);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v19, 0LL);
  if ( v8 )
  {
    MmDetachSession((__int64)v8, (__int64)v19);
    HalPutDmaAdapter(v8);
  }
  if ( BugCheckParameter1 == -2LL || BugCheckParameter1 - 1 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    if ( p_LockNV )
    {
      ObfDereferenceObjectWithTag(p_LockNV, 0x66506D4Du);
    }
    else if ( v7 )
    {
      HalPutDmaAdapter(v7);
    }
  }
  return v12;
}
