/*
 * XREFs of RtlCreateUserStack @ 0x140685EDC
 * Callers:
 *     PspSetupUserStack @ 0x140685318 (PspSetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x1403F8470 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x1403F84F0 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1403F8530 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlCreateUserStack(
        SIZE_T CommittedStackSize,
        SIZE_T MaximumStackSize,
        ULONG_PTR ZeroBits,
        SIZE_T PageSize,
        ULONG_PTR ReserveAlignment,
        PINITIAL_TEB InitialTeb)
{
  SIZE_T v7; // r14
  SIZE_T v8; // rsi
  ULONG_PTR v9; // r15
  unsigned __int64 v10; // r13
  SIZE_T v11; // rax
  SIZE_T v12; // rcx
  __int64 v13; // rdx
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // rbx
  NTSTATUS result; // eax
  PINITIAL_TEB v17; // rsi
  char *v18; // rcx
  ULONG_PTR v19; // rbx
  int v20; // edi
  char *v21; // rax
  PIMAGE_NT_HEADERS v22; // rax
  SIZE_T SizeOfStackCommit; // rcx
  SIZE_T SizeOfStackReserve; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR v26; // [rsp+38h] [rbp-80h] BYREF
  PVOID StackAllocationBase; // [rsp+40h] [rbp-78h] BYREF
  ULONG_PTR v28; // [rsp+48h] [rbp-70h]
  int ProcessInformation; // [rsp+50h] [rbp-68h] BYREF
  __int64 v30; // [rsp+54h] [rbp-64h]
  int v31; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  ULONG_PTR v33; // [rsp+68h] [rbp-50h]
  char *v34; // [rsp+70h] [rbp-48h]
  PVOID BaseAddress; // [rsp+D8h] [rbp+20h] BYREF

  ReserveAlignment = 0LL;
  v34 = 0LL;
  v7 = HIBYTE(PageSize);
  v8 = PageSize & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(PageSize) > 0x40u )
    return -1073741811;
  v9 = 3 * v8;
  v10 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[4];
  v11 = CommittedStackSize;
  if ( !CommittedStackSize || (v12 = MaximumStackSize) == 0 )
  {
    v22 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[18]);
    if ( !v22 )
      return -1073741701;
    if ( v22->OptionalHeader.Magic == 523 )
    {
      SizeOfStackCommit = v22->OptionalHeader.SizeOfStackCommit;
      SizeOfStackReserve = v22->OptionalHeader.SizeOfStackReserve;
    }
    else
    {
      SizeOfStackCommit = HIDWORD(v22->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = LODWORD(v22->OptionalHeader.SizeOfStackReserve);
    }
    v11 = CommittedStackSize;
    if ( !CommittedStackSize )
      v11 = SizeOfStackCommit;
    v12 = MaximumStackSize;
    if ( !MaximumStackSize )
      v12 = SizeOfStackReserve;
  }
  if ( !v11 )
    v11 = 0x4000LL;
  if ( v11 >= v12 )
    v12 = (v11 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v13 = ~(v8 - 1);
  v14 = v13 & (v11 + v8 - 1);
  v15 = (v12 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v28 = *(_QWORD *)(v10 + 792);
  if ( v28 && v14 < v28 )
  {
    v14 = v13 & (v28 + v8 - 1);
    v15 = (v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation = v7;
  v30 = 0LL;
  v31 = 0;
  v32 = v15;
  v33 = ZeroBits;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             &ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v17 = InitialTeb;
    InitialTeb->OldInitialTeb.OldStackBase = 0LL;
    v17->OldInitialTeb.OldStackLimit = 0LL;
    v18 = v34;
    v17->StackAllocationBase = v34;
    v17->StackBase = &v18[v15];
    BaseAddress = &v18[v15 - v14];
    v19 = v15 - v14;
    RegionSize = v14;
    v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v20 < 0
      || (v21 = (char *)BaseAddress, v17->StackLimit = BaseAddress, v19 >= v9)
      && (BaseAddress = &v21[-v9],
          ReserveAlignment = v9,
          v20 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  &ReserveAlignment,
                  0x1000u,
                  0x104u),
          v20 < 0) )
    {
      StackAllocationBase = v17->StackAllocationBase;
      v26 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &StackAllocationBase, &v26, 0x8000u);
      return v20;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
