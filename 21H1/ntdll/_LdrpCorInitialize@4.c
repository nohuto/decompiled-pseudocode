/*
 * XREFs of _LdrpCorInitialize@4 @ 0x4B2A6100
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _LdrpBuildSystem32FileName@8 @ 0x4B2A6BD1 (_LdrpBuildSystem32FileName@8.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

// bad sp value at call has been detected, the output may be wrong!
int __fastcall LdrpCorInitialize(int a1)
{
  bool v1; // bl
  int ProcedureAddress; // edi
  int *v3; // ebx
  PVOID v4; // ecx
  SIZE_T v6; // [esp-4h] [ebp-19Ch]
  SIZE_T v7; // [esp-4h] [ebp-19Ch]
  ULONG_PTR *v8; // [esp+4h] [ebp-194h]
  ULONG_PTR *v9; // [esp+4h] [ebp-194h]
  SIZE_T ValueLength; // [esp+10h] [ebp-188h] BYREF
  int v11; // [esp+18h] [ebp-180h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-17Ch] BYREF
  char v13; // [esp+23h] [ebp-175h]
  int v14; // [esp+24h] [ebp-174h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+28h] [ebp-170h]
  _WORD v16[128]; // [esp+2Ch] [ebp-16Ch] BYREF
  PWSTR Path[19]; // [esp+12Ch] [ebp-6Ch] BYREF
  char v18; // [esp+178h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+180h] [ebp-18h]

  HIDWORD(ValueLength) = a1;
  v11 = a1;
  v1 = 1;
  v13 = 1;
  RtlEnterCriticalSection(&FastPebLock);
  ms_exc.registration.TryLevel = 0;
  LODWORD(v6) = &ValueLength;
  if ( RtlQueryEnvironmentVariable(0, L"COMPLUS_InstallRoot", 0x13uLL, 0, v6, v8) == -1073741789 )
  {
    LODWORD(v7) = &ValueLength;
    v1 = RtlQueryEnvironmentVariable(0, L"COMPLUS_Version", 0xFuLL, 0, v7, v9) != -1073741789;
    v13 = v1;
  }
  ms_exc.registration.TryLevel = -2;
  RtlLeaveCriticalSection(&FastPebLock);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v16;
  v14 = 0x1000000;
  v16[0] = 0;
  if ( v1 )
  {
    ProcedureAddress = LdrpBuildSystem32FileName(&v14, &LdrpMscoreeDllName);
    v3 = &v14;
  }
  else
  {
    v3 = &LdrpMscoreeDllName;
    ProcedureAddress = 0;
  }
  if ( ProcedureAddress >= 0 )
  {
    ms_exc.registration.Next = (struct _EH3_EXCEPTION_REGISTRATION *)80;
    memset(Path, 0, *(size_t *)&ms_exc.registration.Next);
    ProcedureAddress = LdrpLoadDll((PUNICODE_STRING)v3, 1, &BaseAddress);
    if ( v18 )
      RtlReleasePath(Path[0]);
    if ( ProcedureAddress >= 0 )
    {
      ProcedureAddress = LdrpGetProcedureAddress(*((PVOID *)BaseAddress + 6), 0, (int)&v11);
      if ( ProcedureAddress < 0 )
      {
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0);
        v4 = BaseAddress;
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR4__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
        v4 = BaseAddress;
        *(_DWORD *)HIDWORD(ValueLength) = BaseAddress;
      }
      LdrpDereferenceModule(v4);
    }
  }
  if ( v16 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return ProcedureAddress;
}
