/*
 * XREFs of DbgkUserReportWorkRoutine @ 0x140882940
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x14025A330 (IoThreadToProcess.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x1403F24D0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1403F2630 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x1403F2D70 (ZwResumeThread.c)
 *     ZwCreateThreadEx @ 0x1403F3B50 (ZwCreateThreadEx.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PsResumeThread @ 0x140708FB0 (PsResumeThread.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkUserReportWorkRoutine(char *P)
{
  __int64 v2; // rdi
  _KPROCESS *v3; // rax
  _DWORD *v4; // r9
  NTSTATUS v5; // edx
  __int64 v6; // r8
  _DWORD *v7; // r9
  char *v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // r9
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v16[48]; // [rsp+C0h] [rbp-48h] BYREF

  RegionSize[2] = (ULONG_PTR)P;
  Handle = 0LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  RegionSize[0] = 168LL;
  memset(v16, 0, sizeof(v16));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = *(_QWORD *)P;
  RegionSize[1] = v2;
  v3 = IoThreadToProcess((PETHREAD)v2);
  KiStackAttachProcess(v3, 0LL, (__int64)v16, v4);
  v5 = ObOpenObjectByPointer((PVOID)v2, 0, 0LL, 0x72u, (POBJECT_TYPE)PsThreadType, 1, &Handle);
  if ( v5 >= 0 )
  {
    v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
    if ( v5 >= 0 )
    {
      *((_QWORD *)BaseAddress + 1) = *((_QWORD *)P + 1);
      *(_QWORD *)BaseAddress = Handle;
      if ( P[16] )
      {
        v8 = (char *)BaseAddress + 16;
        *((_OWORD *)BaseAddress + 1) = *(_OWORD *)(P + 24);
        *((_OWORD *)v8 + 1) = *(_OWORD *)(P + 40);
        *((_OWORD *)v8 + 2) = *(_OWORD *)(P + 56);
        *((_OWORD *)v8 + 3) = *(_OWORD *)(P + 72);
        *((_OWORD *)v8 + 4) = *(_OWORD *)(P + 88);
        *((_OWORD *)v8 + 5) = *(_OWORD *)(P + 104);
        *((_OWORD *)v8 + 6) = *(_OWORD *)(P + 120);
        *((_OWORD *)v8 + 7) = *(_OWORD *)(P + 136);
        *((_OWORD *)v8 + 8) = *(_OWORD *)(P + 152);
        *((_QWORD *)v8 + 18) = *((_QWORD *)P + 21);
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             DbgkWerReportExceptionWorker,
             BaseAddress,
             0x27u,
             0LL,
             0LL,
             0LL,
             0LL);
    }
    else
    {
      BaseAddress = 0LL;
    }
  }
  if ( v5 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1296), 0xFFDFFFFF);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    PsResumeThread(v2, 0LL, v6, v7);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0x8000u);
  }
  else
  {
    ZwSetInformationThread(ThreadHandle, ThreadDbgkWerReportActive, &qword_140033238, 4u);
    ZwResumeThread(ThreadHandle, 0LL);
    ZwClose(ThreadHandle);
    ThreadHandle = 0LL;
  }
  KiUnstackDetachProcess((__int64)v16, 0LL, v9, v10);
  ExFreePoolWithTag(P, 0x4B474244u);
  HalPutDmaAdapter((PADAPTER_OBJECT)v2);
}
