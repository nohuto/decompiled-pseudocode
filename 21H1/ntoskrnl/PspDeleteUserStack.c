/*
 * XREFs of PspDeleteUserStack @ 0x1406E8978
 * Callers:
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v6; // r8
  _DWORD *v7; // r9
  char v8; // al
  void *v9; // rax
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+40h] [rbp-40h] BYREF

  memset(v15, 0, sizeof(v15));
  KiStackAttachProcess(a1, 0LL, (__int64)v15, a4);
  v8 = *(_BYTE *)a4;
  if ( (*(_BYTE *)a4 & 2) != 0 )
  {
    v9 = (void *)a3[4];
    RegionSize = 0LL;
    BaseAddress = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v8 = *(_BYTE *)a4;
  }
  if ( (v8 & 4) != 0 )
  {
    v11 = a3[7];
    BaseAddress = 0LL;
    RegionSize = v11;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
    v8 = *(_BYTE *)a4;
  }
  if ( (v8 & 8) != 0 )
  {
    v12 = a3[8];
    BaseAddress = 0LL;
    RegionSize = v12;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &RegionSize, (__int64 *)&BaseAddress, 0x8000, 0, 0x40000000u);
  }
  return KiUnstackDetachProcess((__int64)v15, 0LL, v6, v7);
}
