/*
 * XREFs of RtlpWow64CreateUserStack @ 0x1406DB328
 * Callers:
 *     PspWow64SetupUserStack @ 0x1406DB278 (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x1403F2630 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x1403F26B0 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rdi
  NTSTATUS result; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  NTSTATUS v14; // esi
  char *v15; // rax
  int v16; // edi
  PIMAGE_NT_HEADERS v17; // rax
  PIMAGE_NT_HEADERS v18; // rcx
  unsigned __int64 SizeOfStackReserve_high; // rax
  unsigned int SizeOfStackReserve; // edx
  PVOID BaseAddress; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h]
  ULONG_PTR v23[2]; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR v25; // [rsp+58h] [rbp-70h] BYREF
  PVOID v26; // [rsp+60h] [rbp-68h] BYREF
  _DWORD ProcessInformation[4]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp-48h]
  __int64 v30; // [rsp+88h] [rbp-40h]
  ULONG_PTR v31; // [rsp+90h] [rbp-38h]
  unsigned __int64 v32; // [rsp+D0h] [rbp+8h]

  v32 = a1;
  v23[0] = 0LL;
  v30 = 0LL;
  v7 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[4];
  v23[1] = v7;
  if ( !a1 || (v8 = a2) == 0 )
  {
    v16 = 0;
    v17 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[18]);
    v18 = v17;
    if ( v17 )
    {
      SizeOfStackReserve_high = HIDWORD(v17->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = v18->OptionalHeader.SizeOfStackReserve;
      a1 = v32;
      if ( !v32 )
        a1 = SizeOfStackReserve_high;
      v8 = a2;
      if ( !a2 )
        v8 = SizeOfStackReserve;
    }
    else
    {
      v16 = -1073741701;
      v22 = -1073741701;
      v8 = a2;
      a1 = v32;
    }
    if ( v16 < 0 )
      return v16;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v8 )
    v8 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v9 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v31 = *(_QWORD *)(v7 + 792);
  if ( v31 && v9 < v31 )
  {
    v9 = (v31 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v10 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation[0] = a4;
  ProcessInformation[1] = 0;
  ProcessInformation[3] = 0;
  ProcessInformation[2] = 0;
  v28 = v10;
  v29 = a3;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v12 = v30;
    *(_QWORD *)(a5 + 56) = v30;
    *(_QWORD *)(a5 + 40) = v12 + v10;
    BaseAddress = (PVOID)(v10 + v12 - v9);
    v13 = v10 - v9;
    RegionSize = v9;
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v14 < 0
      || (v15 = (char *)BaseAddress, *(_QWORD *)(a5 + 48) = BaseAddress, v13 >= 0x2000)
      && (BaseAddress = v15 - 0x2000,
          v23[0] = 0x2000LL,
          v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v23, 0x1000u, 0x104u),
          v14 < 0) )
    {
      v26 = *(PVOID *)(a5 + 56);
      v25 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v26, &v25, 0x8000u);
      *(_QWORD *)(a5 + 56) = 0LL;
      *(_QWORD *)(a5 + 40) = 0LL;
      *(_QWORD *)(a5 + 48) = 0LL;
      return v14;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
