/*
 * XREFs of PspSetupUserStack @ 0x140638EE8
 * Callers:
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x14063900C (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1406FC8B4 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, _INITIAL_TEB *a3, char *a4, unsigned int a5)
{
  char v5; // al
  char v6; // bl
  SIZE_T v11; // rdi
  NTSTATUS UserStack; // edi
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int64 v15; // r15
  ULONG_PTR v17; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v20[3]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *a4;
  v6 = 0;
  memset(v20, 0, sizeof(v20));
  if ( (v5 & 1) != 0 )
    goto LABEL_9;
  v11 = 4096LL;
  if ( a5 )
    v11 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v20, a4);
  UserStack = RtlCreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), v11, v17, a3);
  if ( UserStack < 0 )
    goto LABEL_13;
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 )
    v15 = 0LL;
  else
    v15 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
  if ( !*(_QWORD *)(a1 + 1408) || (UserStack = PspWow64SetupCpuArea(&a3->StackBase, a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = (char *)a3->StackBase - v15 - 40;
    KiUnstackDetachProcess((__int64)v20, 0LL, v13, v14);
    v5 = *a4;
    v6 = 2;
LABEL_9:
    *a4 = v6 | v5 & 0xFD;
    return 0LL;
  }
  BaseAddress = a3->StackAllocationBase;
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_13:
  KiUnstackDetachProcess((__int64)v20, 0LL, v13, v14);
  return (unsigned int)UserStack;
}
