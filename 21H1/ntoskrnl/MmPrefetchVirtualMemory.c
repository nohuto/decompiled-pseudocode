/*
 * XREFs of MmPrefetchVirtualMemory @ 0x140655D68
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1402CCC64 (MiProcessWsInSwapRanges.c)
 *     PfpPrefetchPrivatePages @ 0x1405D3E50 (PfpPrefetchPrivatePages.c)
 *     MmPrefetchVirtualAddresses @ 0x140655CD0 (MmPrefetchVirtualAddresses.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ObIsKernelHandle @ 0x1403232C0 (ObIsKernelHandle.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1405334B0 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v6; // ebx
  struct _DMA_ADAPTER *v7; // r15
  struct _DMA_ADAPTER *v8; // r14
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  __int64 v13; // r8
  _DWORD *v14; // r9
  NTSTATUS result; // eax
  _DWORD *v16; // r9
  _KPROCESS *v17; // rax
  PVOID *Object; // [rsp+20h] [rbp-69h]
  ULONG_PTR BugCheckParameter1a; // [rsp+40h] [rbp-49h] BYREF
  PVOID v20; // [rsp+48h] [rbp-41h] BYREF
  __int64 v21; // [rsp+50h] [rbp-39h]
  unsigned __int64 v22; // [rsp+58h] [rbp-31h]
  _OWORD v23[3]; // [rsp+60h] [rbp-29h] BYREF

  v21 = a3;
  v22 = a2;
  BugCheckParameter1a = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  memset(v23, 0, sizeof(v23));
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
    LODWORD(Object) = 1716546893;
    if ( (int)ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                8LL,
                PsProcessType,
                0,
                Object,
                &BugCheckParameter1a,
                0LL,
                0LL) >= 0 )
    {
      p_LockNV = (_DWORD *)BugCheckParameter1a;
      if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1a )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)v23, v16);
        v6 = 1;
      }
      goto LABEL_15;
    }
    v20 = 0LL;
    result = ObReferenceObjectByHandle((HANDLE)BugCheckParameter1, 1u, MmSessionObjectType, 0, &v20, 0LL);
    v7 = (struct _DMA_ADAPTER *)v20;
    if ( result < 0 )
      return result;
    v17 = (_KPROCESS *)MiLockAndSelectSessionAttachProcess(*((_QWORD *)v20 + 3));
    v8 = (struct _DMA_ADAPTER *)v17;
    if ( !v17 )
    {
LABEL_29:
      HalPutDmaAdapter(v7);
      return 0;
    }
    if ( (int)MmAttachSession(v17, (__int64)v23) < 0 )
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
  v12 = MiPrefetchVirtualMemory(v22, v21, SessionVm, a4);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v23, 0LL, v13, v14);
  if ( v8 )
  {
    MmDetachSession((__int64)v8, (__int64)v23);
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
