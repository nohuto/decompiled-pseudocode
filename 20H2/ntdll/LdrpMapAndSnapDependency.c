/*
 * XREFs of LdrpMapAndSnapDependency @ 0x180017990
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
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

unsigned __int64 __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  int DllActivationContext; // edi
  int v4; // ebp
  __int64 ImportDescriptorForSnap; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int *v8; // rsi
  _DWORD *v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  unsigned __int64 result; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  char *v17; // rcx
  STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF

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
  v8 = (unsigned int *)(ImportDescriptorForSnap + 12);
  if ( !*(_DWORD *)(ImportDescriptorForSnap + 12) )
    goto LABEL_31;
  v9 = (_DWORD *)(ImportDescriptorForSnap + 12);
  do
  {
    v10 = (unsigned int)v9[1];
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
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8u, 8LL * v7);
  *(_QWORD *)(a1 + 88) = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 96) = v7;
    result = (unsigned int)(v4 + 1);
    *(_DWORD *)(a1 + 100) = result;
    v13 = 0;
    *(_QWORD *)(a1 + 128) = v6;
    v20 = 0LL;
    if ( *v8 )
    {
      while ( v8[1] )
      {
        v14 = *(_QWORD *)(v1 + 48);
        result = v8[1];
        if ( *(_QWORD *)(result + v14) )
        {
          v15 = *v8;
          v16 = v14 + v15 == 0;
          v17 = (char *)(v14 + v15);
          *(_QWORD *)&SourceString.Length = 0LL;
          SourceString.Buffer = v17;
          if ( !v16 )
          {
            result = -1LL;
            do
              ++result;
            while ( v17[result] );
            if ( result > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = result;
            SourceString.MaximumLength = result + 1;
          }
          result = LdrpLoadDependentModule(&SourceString, *(_QWORD *)(a1 + 88) + 8LL * v13, (__int64)&v20);
          DllActivationContext = result;
          if ( (result & 0x80000000) != 0LL )
            break;
        }
        v8 += 5;
        ++v13;
        if ( !*v8 )
          break;
      }
      if ( v20 )
        result = RtlFreeHeap(LdrpHeap, 0LL, v20);
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v4 = --*(_DWORD *)(a1 + 100);
      result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
  }
  if ( !v4 )
  {
LABEL_31:
    result = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v2 + 104) )
    {
      *(_DWORD *)(result + 56) = 4;
      if ( *(_QWORD *)(v2 + 48) )
      {
        result = (unsigned __int64)LdrpQueueWork(v2);
      }
      else
      {
        result = LdrpSnapModule(v2);
        DllActivationContext = result;
      }
    }
    else
    {
      *(_DWORD *)(result + 56) = 5;
    }
  }
  if ( DllActivationContext < 0 )
  {
LABEL_38:
    result = *(_QWORD *)(v2 + 40);
    *(_DWORD *)result = DllActivationContext;
  }
  return result;
}
