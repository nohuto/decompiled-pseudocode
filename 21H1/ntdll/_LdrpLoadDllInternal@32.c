/*
 * XREFs of _LdrpLoadDllInternal@32 @ 0x4B2CE104
 * Callers:
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 * Callees:
 *     _LdrpDetectDetour@0 @ 0x4B2AEB06 (_LdrpDetectDetour@0.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _LdrpFreeLoadContextOfNode@8 @ 0x4B2DDEB6 (_LdrpFreeLoadContextOfNode@8.c)
 *     _LdrpCondenseGraph@4 @ 0x4B2E205C (_LdrpCondenseGraph@4.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpBuildForwarderLink@8 @ 0x4B2E7CE3 (_LdrpBuildForwarderLink@8.c)
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 *     _LdrpHandleReplacedModule@4 @ 0x4B2E86A0 (_LdrpHandleReplacedModule@4.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _LdrpFreeReplacedModule@4 @ 0x4B2F2697 (_LdrpFreeReplacedModule@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int *__thiscall LdrpLoadDllInternal(void *this, int a2, int a3, int a4, int a5, PVOID *a6, int *a7)
{
  int *result; // eax
  int *v8; // esi
  char v9; // al
  int v10; // eax
  int v11; // edx
  PVOID v12; // eax
  int v13; // eax
  int v14; // eax
  PVOID BaseAddress; // [esp+20h] [ebp-20h] BYREF
  char v16; // [esp+27h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 425, "LdrpLoadDllInternal", 3, "DLL name: %wZ\n", this);
  *a6 = 0;
  BaseAddress = 0;
  result = (int *)LdrpFastpthReloadedDll(a5, a6);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v9 = 1;
      v16 = 1;
    }
    else
    {
      v16 = 0;
      LdrpDrainWorkQueue(0);
      v9 = 0;
    }
    ms_exc.registration.TryLevel = 0;
    if ( !a5 || v9 || *(_DWORD *)(*(_DWORD *)(a5 + 80) + 12) )
    {
      LdrpDetectDetour();
      v8 = a7;
      v10 = LdrpFindOrPrepareLoadingModule(a2, a3, a4, &BaseAddress, a7);
      if ( v10 == -1073741515 )
      {
        LOBYTE(v11) = 1;
        LdrpProcessWork(*((_DWORD *)BaseAddress + 23), v11);
      }
      else if ( v10 != -1073741267 && v10 < 0 )
      {
        *a7 = v10;
      }
    }
    else
    {
      v8 = a7;
      *a7 = -1073741515;
    }
    result = (int *)LdrpDrainWorkQueue(1);
    if ( BaseAddress )
    {
      v12 = (PVOID)LdrpHandleReplacedModule();
      *a6 = v12;
      if ( BaseAddress != v12 )
      {
        LdrpFreeReplacedModule(BaseAddress);
        BaseAddress = *a6;
      }
      if ( *((_DWORD *)BaseAddress + 23) )
        LdrpCondenseGraph(*((_DWORD *)BaseAddress + 20));
      if ( *v8 >= 0 )
      {
        v13 = LdrpPrepareModuleForExecution(BaseAddress, v8);
        *v8 = v13;
        if ( v13 >= 0 )
        {
          v14 = LdrpBuildForwarderLink(a5, BaseAddress);
          *v8 = v14;
          if ( v14 >= 0 && !LdrInitState )
            LdrpPinModule(BaseAddress);
        }
      }
      result = (int *)LdrpFreeLoadContextOfNode(*((_DWORD *)BaseAddress + 20), v8);
      if ( *v8 < 0 )
      {
        *a6 = 0;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0);
        result = LdrpDereferenceModule((char *)BaseAddress);
      }
    }
    else
    {
      *v8 = -1073741801;
    }
    ms_exc.registration.TryLevel = -2;
    if ( !v16 )
      result = (int *)LdrpDropLastInProgressCount();
  }
  else
  {
    v8 = a7;
    *a7 = (int)result;
  }
  if ( (ShowSnaps & 9) != 0 )
    return (int *)LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 655, "LdrpLoadDllInternal", 4, "Status: 0x%08lx\n", *v8);
  return result;
}
