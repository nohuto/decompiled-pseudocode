/*
 * XREFs of PspSetupReservedUserMappings @ 0x1406E0F68
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x1403F2630 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // ebx
  NTSTATUS VirtualMemory; // esi
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v6 = *(_DWORD *)(a3[26] + 8LL) & 0x60;
  if ( !v6 && !a3[32] )
    return 0LL;
  VirtualMemory = 0;
  KiStackAttachProcess(a1, 0LL, a2, a4);
  if ( !v6 )
    goto LABEL_10;
  BaseAddress = (PVOID)4;
  if ( v6 == 32 )
  {
    RegionSize = 1048320LL;
  }
  else if ( v6 == 64 )
  {
    RegionSize = 16776960LL;
  }
  VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( VirtualMemory >= 0 )
  {
LABEL_10:
    v11 = 0LL;
    if ( a3[32] )
    {
      v12 = 0LL;
      do
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(v12 + a3[35]),
                          0LL,
                          (PSIZE_T)(v12 + a3[35] + 8),
                          0x2000u,
                          4u);
        if ( VirtualMemory < 0 )
          break;
        ++v11;
        v12 += 16LL;
      }
      while ( v11 < a3[32] );
    }
  }
  KiUnstackDetachProcess(a2, 0LL, v9, v10);
  return (unsigned int)VirtualMemory;
}
