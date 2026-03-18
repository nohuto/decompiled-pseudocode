/*
 * XREFs of DbgkUserReportWorkRoutine @ 0x1408897B0
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x140208A40 (IoThreadToProcess.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x1403F8310 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1403F8470 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1403F8530 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x1403F8BB0 (ZwResumeThread.c)
 *     ZwCreateThreadEx @ 0x1403F99B0 (ZwCreateThreadEx.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     PsResumeThread @ 0x1406BC3F0 (PsResumeThread.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkUserReportWorkRoutine(char *P)
{
  __int64 v2; // rdi
  _KPROCESS *v3; // rax
  int Thread; // edx
  __int64 v5; // r8
  _DWORD *v6; // r9
  char *v7; // rcx
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v12; // [rsp+90h] [rbp-78h]
  __int128 v13; // [rsp+A0h] [rbp-68h]
  __int128 v14; // [rsp+B0h] [rbp-58h]
  _BYTE v15[48]; // [rsp+C0h] [rbp-48h] BYREF

  RegionSize[2] = (ULONG_PTR)P;
  Handle = 0LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  RegionSize[0] = 168LL;
  memset(v15, 0, sizeof(v15));
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v2 = *(_QWORD *)P;
  RegionSize[1] = v2;
  v3 = IoThreadToProcess((PETHREAD)v2);
  KiStackAttachProcess(v3, 0, (__int64)v15);
  Thread = ObOpenObjectByPointer((PVOID)v2, 0, 0LL, 0x72u, (POBJECT_TYPE)PsThreadType, 1, &Handle);
  if ( Thread >= 0 )
  {
    Thread = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
    if ( Thread >= 0 )
    {
      *((_QWORD *)BaseAddress + 1) = *((_QWORD *)P + 1);
      *(_QWORD *)BaseAddress = Handle;
      if ( P[16] )
      {
        v7 = (char *)BaseAddress + 16;
        *((_OWORD *)BaseAddress + 1) = *(_OWORD *)(P + 24);
        *((_OWORD *)v7 + 1) = *(_OWORD *)(P + 40);
        *((_OWORD *)v7 + 2) = *(_OWORD *)(P + 56);
        *((_OWORD *)v7 + 3) = *(_OWORD *)(P + 72);
        *((_OWORD *)v7 + 4) = *(_OWORD *)(P + 88);
        *((_OWORD *)v7 + 5) = *(_OWORD *)(P + 104);
        *((_OWORD *)v7 + 6) = *(_OWORD *)(P + 120);
        *((_OWORD *)v7 + 7) = *(_OWORD *)(P + 136);
        *((_OWORD *)v7 + 8) = *(_OWORD *)(P + 152);
        *((_QWORD *)v7 + 18) = *((_QWORD *)P + 21);
      }
      LODWORD(v12) = 48;
      *((_QWORD *)&v12 + 1) = 0LL;
      DWORD2(v13) = 512;
      *(_QWORD *)&v13 = 0LL;
      v14 = 0LL;
      Thread = ZwCreateThreadEx((__int64)&ThreadHandle, 0x1FFFFFLL);
    }
    else
    {
      BaseAddress = 0LL;
    }
  }
  if ( Thread < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1296), 0xFFDFFFFF);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    PsResumeThread(v2, 0LL, v5, v6);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0x8000u);
  }
  else
  {
    ZwSetInformationThread(ThreadHandle, ThreadDynamicCodePolicyInfo|ThreadAffinityMask, &qword_140033570, 4u);
    ZwResumeThread((__int64)ThreadHandle, 0LL);
    ZwClose(ThreadHandle);
    ThreadHandle = 0LL;
  }
  KiUnstackDetachProcess((__int64)v15, 0);
  ExFreePoolWithTag(P, 0x4B474244u);
  HalPutDmaAdapter((PADAPTER_OBJECT)v2);
}
