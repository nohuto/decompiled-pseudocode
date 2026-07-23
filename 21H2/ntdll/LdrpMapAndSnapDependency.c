/*
 * XREFs of LdrpMapAndSnapDependency @ 0x180017990
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x18001427C (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpGetImportDescriptorForSnap @ 0x1800142DC (LdrpGetImportDescriptorForSnap.c)
 *     LdrpFindDllActivationContext @ 0x180014E80 (LdrpFindDllActivationContext.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180014F84 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 */

void __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  int DllActivationContext; // edi
  int v4; // ebp
  PIMAGE_NT_HEADERS ImportDescriptorForSnap; // rax
  PIMAGE_NT_HEADERS v6; // r13
  unsigned int v7; // r15d
  unsigned int *p_PointerToSymbolTable; // rsi
  unsigned int *v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  PVOID Heap; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  char *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0
    || (DllActivationContext = LdrpFindDllActivationContext(*(_QWORD **)(a1 + 56)), DllActivationContext >= 0) )
  {
    DllActivationContext = LdrpPrepareImportAddressTableForSnap(v2);
  }
  if ( DllActivationContext < 0 )
    goto LABEL_38;
  v4 = 0;
  if ( !*(_QWORD *)(v2 + 104) )
    goto LABEL_31;
  if ( LdrpShouldModuleImportBeRedirected(v1) )
    *(_DWORD *)(v2 + 32) |= 0x2000000u;
  ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(v2);
  v6 = ImportDescriptorForSnap;
  v7 = 0;
  p_PointerToSymbolTable = &ImportDescriptorForSnap->FileHeader.PointerToSymbolTable;
  if ( !ImportDescriptorForSnap->FileHeader.PointerToSymbolTable )
    goto LABEL_31;
  v9 = &ImportDescriptorForSnap->FileHeader.PointerToSymbolTable;
  do
  {
    v10 = v9[1];
    if ( !(_DWORD)v10 )
      break;
    v11 = v4 + 1;
    ++v7;
    v9 += 5;
    if ( !*(_QWORD *)(v10 + *(_QWORD *)(v1 + 48)) )
      v11 = v4;
    v4 = v11;
  }
  while ( *v9 );
  v2 = a1;
  if ( !v4 )
    goto LABEL_31;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(a1 + 96) = v7;
    *(_DWORD *)(a1 + 100) = v4 + 1;
    v13 = 0;
    *(_QWORD *)(a1 + 128) = v6;
    BaseAddress = 0LL;
    if ( *p_PointerToSymbolTable )
    {
      while ( p_PointerToSymbolTable[1] )
      {
        v14 = *(_QWORD *)(v1 + 48);
        if ( *(_QWORD *)(p_PointerToSymbolTable[1] + v14) )
        {
          v15 = *p_PointerToSymbolTable;
          v16 = v14 + v15 == 0;
          v17 = (char *)(v14 + v15);
          *(_QWORD *)&SourceString.Length = 0LL;
          SourceString.Buffer = v17;
          if ( !v16 )
          {
            v18 = -1LL;
            do
              ++v18;
            while ( v17[v18] );
            if ( v18 > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = v18;
            SourceString.MaximumLength = v18 + 1;
          }
          DllActivationContext = LdrpLoadDependentModule(
                                   &SourceString,
                                   *(_QWORD *)(a1 + 88) + 8LL * v13,
                                   (__int64)&BaseAddress);
          if ( DllActivationContext < 0 )
            break;
        }
        p_PointerToSymbolTable += 5;
        ++v13;
        if ( !*p_PointerToSymbolTable )
          break;
      }
      if ( BaseAddress )
        RtlFreeHeap(LdrpHeap, 0, BaseAddress);
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v4 = --*(_DWORD *)(a1 + 100);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
  }
  if ( !v4 )
  {
LABEL_31:
    v19 = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v2 + 104) )
    {
      *(_DWORD *)(v19 + 56) = 4;
      if ( *(_QWORD *)(v2 + 48) )
        LdrpQueueWork(v2);
      else
        DllActivationContext = LdrpSnapModule(v2);
    }
    else
    {
      *(_DWORD *)(v19 + 56) = 5;
    }
  }
  if ( DllActivationContext < 0 )
LABEL_38:
    **(_DWORD **)(v2 + 40) = DllActivationContext;
}
