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

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  char v4; // al
  char v5; // bl
  int UserStack; // edi
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r15
  ULONG_PTR v15; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-78h] BYREF

  v4 = *a4;
  v5 = 0;
  memset(v18, 0, sizeof(v18));
  if ( (v4 & 1) != 0 )
    goto LABEL_7;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v18, a4);
  UserStack = RtlCreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), 4096, v15, a3);
  if ( UserStack >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 )
      v13 = 0LL;
    else
      v13 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
    if ( *(_QWORD *)(a1 + 1408) )
    {
      UserStack = PspWow64SetupCpuArea(a3 + 16, a1);
      if ( UserStack < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v13 - 40;
    KiUnstackDetachProcess((__int64)v18, 0LL, v11, v12);
    v4 = *a4;
    v5 = 2;
LABEL_7:
    *a4 = v5 | v4 & 0xFD;
    return 0LL;
  }
LABEL_11:
  KiUnstackDetachProcess((__int64)v18, 0LL, v11, v12);
  return (unsigned int)UserStack;
}
