/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1406EC048
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x14025EA9C (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1406EBFB0 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x140987430 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     ObIsKernelHandle @ 0x14025E6E0 (ObIsKernelHandle.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1405945DC (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  int v6; // ebx
  PVOID v7; // r15
  void *v8; // r14
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  _DWORD *v14; // r9
  _QWORD *v15; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+50h] [rbp-39h]
  unsigned __int64 v19; // [rsp+58h] [rbp-31h]
  _OWORD v20[3]; // [rsp+60h] [rbp-29h] BYREF

  v18 = a3;
  v19 = a2;
  BugCheckParameter1 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  memset(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  if ( !Handle )
  {
    SessionVm = 1LL;
    goto LABEL_29;
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
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v20, v14);
        v6 = 1;
      }
      goto LABEL_15;
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &Object, 0LL);
    v7 = Object;
    if ( result < 0 )
      return result;
    v15 = MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v8 = v15;
    if ( !v15 )
    {
LABEL_27:
      ObfDereferenceObject(v7);
      return 0;
    }
    if ( (int)MmAttachSession((ULONG_PTR)v15) < 0 )
    {
      ObfDereferenceObject(v8);
      goto LABEL_27;
    }
    SessionVm = MiGetSessionVm();
LABEL_29:
    p_LockNV = (_DWORD *)BugCheckParameter1;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  SessionVm = (unsigned __int64)(p_LockNV + 416);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v19, v18, SessionVm, a4);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v20, 0LL);
  if ( v8 )
  {
    MmDetachSession((__int64)v8, (__int64)v20);
    ObfDereferenceObject(v8);
  }
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL || Handle == (char *)-2LL )
  {
    if ( p_LockNV )
    {
      ObfDereferenceObjectWithTag(p_LockNV, 0x66506D4Du);
    }
    else if ( v7 )
    {
      ObfDereferenceObject(v7);
    }
  }
  return v12;
}
