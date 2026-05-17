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
int __fastcall LdrpCorInitialize(_DWORD *a1)
{
  bool v1; // bl
  int ProcedureAddress; // edi
  int v4; // [esp+10h] [ebp-188h] BYREF
  _DWORD *v5; // [esp+14h] [ebp-184h]
  unsigned int v6; // [esp+18h] [ebp-180h] BYREF
  int v7; // [esp+1Ch] [ebp-17Ch] BYREF
  char v8; // [esp+23h] [ebp-175h]
  int v9; // [esp+24h] [ebp-174h] BYREF
  _DWORD *v10; // [esp+28h] [ebp-170h]
  _DWORD v11[85]; // [esp+2Ch] [ebp-16Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+180h] [ebp-18h]

  v5 = a1;
  v6 = (unsigned int)a1;
  v1 = 1;
  v8 = 1;
  RtlEnterCriticalSection(&FastPebLock);
  ms_exc.registration.TryLevel = 0;
  if ( RtlQueryEnvironmentVariable(0, (wchar_t *)L"COMPLUS_InstallRoot", 0x13u, 0, 0, (int)&v4) == -1073741789 )
  {
    v1 = RtlQueryEnvironmentVariable(0, (wchar_t *)L"COMPLUS_Version", 0xFu, 0, 0, (int)&v4) != -1073741789;
    v8 = v1;
  }
  ms_exc.registration.TryLevel = -2;
  RtlLeaveCriticalSection(&FastPebLock);
  v10 = v11;
  v9 = 0x1000000;
  LOWORD(v11[0]) = 0;
  if ( v1 )
    ProcedureAddress = LdrpBuildSystem32FileName(&v9, &LdrpMscoreeDllName);
  else
    ProcedureAddress = 0;
  if ( ProcedureAddress >= 0 )
  {
    memset(&v11[64], 0, 0x50u);
    ProcedureAddress = LdrpLoadDll(1, &v7);
    if ( LOBYTE(v11[83]) )
      RtlReleasePath(v11[64]);
    if ( ProcedureAddress >= 0 )
    {
      ProcedureAddress = LdrpGetProcedureAddress(0, &v6);
      if ( ProcedureAddress < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v7, 0);
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR4__(v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
        *v5 = v7;
      }
      LdrpDereferenceModule();
    }
  }
  if ( v11 != v10 )
    RtlDeleteBoundaryDescriptor(v10);
  return ProcedureAddress;
}
