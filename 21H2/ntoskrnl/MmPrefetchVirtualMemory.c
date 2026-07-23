/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1406BEF48
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1402A1FCC (MiProcessWsInSwapRanges.c)
 *     PfpPrefetchPrivatePages @ 0x1406BE720 (PfpPrefetchPrivatePages.c)
 *     MmPrefetchVirtualAddresses @ 0x1406BEEB0 (MmPrefetchVirtualAddresses.c)
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     ObIsKernelHandle @ 0x1402A06B0 (ObIsKernelHandle.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140539210 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  int v6; // ebx
  struct _DMA_ADAPTER *v7; // r15
  struct _DMA_ADAPTER *v8; // r14
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v14; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h]
  unsigned __int64 v18; // [rsp+58h] [rbp-31h]
  _OWORD v19[3]; // [rsp+60h] [rbp-29h] BYREF

  v17 = a3;
  v18 = a2;
  BugCheckParameter1 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  memset(v19, 0, sizeof(v19));
  CurrentThread = KeGetCurrentThread();
  if ( !Handle )
  {
    SessionVm = 1LL;
    goto LABEL_31;
  }
  if ( Handle != (char *)-1LL )
  {
    if ( Handle == (char *)-3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[281] & 0x10000) == 0 )
        return -1073741799;
      SessionVm = MiGetSessionVm();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle(Handle) )
      return -1073741585;
    if ( (int)ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL) >= 0 )
    {
      p_LockNV = (_DWORD *)BugCheckParameter1;
      if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v19);
        v6 = 1;
      }
      goto LABEL_15;
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &Object, 0LL);
    v7 = (struct _DMA_ADAPTER *)Object;
    if ( result < 0 )
      return result;
    v14 = (struct _DMA_ADAPTER *)MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v8 = v14;
    if ( !v14 )
    {
LABEL_29:
      HalPutDmaAdapter(v7);
      return 0;
    }
    if ( (int)MmAttachSession((ULONG_PTR)v14) < 0 )
    {
      HalPutDmaAdapter(v8);
      goto LABEL_29;
    }
    SessionVm = MiGetSessionVm();
LABEL_31:
    p_LockNV = (_DWORD *)BugCheckParameter1;
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
  if ( Handle == (char *)-2LL || (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
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
