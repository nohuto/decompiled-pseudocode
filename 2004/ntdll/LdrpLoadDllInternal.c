/*
 * XREFs of LdrpLoadDllInternal @ 0x18001FA14
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 * Callees:
 *     LdrpPinModule @ 0x18000F948 (LdrpPinModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpBuildForwarderLink @ 0x18001F59C (LdrpBuildForwarderLink.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D878 (LdrpPrepareModuleForExecution.c)
 *     LdrpDropLastInProgressCount @ 0x18005D92C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18005EB1C (LdrpProcessWork.c)
 *     LdrpLogError @ 0x1800600D8 (LdrpLogError.c)
 *     LdrpDetectDetour @ 0x180061EAC (LdrpDetectDetour.c)
 *     LdrpFreeReplacedModule @ 0x180066508 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180066540 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x1800666B0 (LdrpHandleReplacedModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006B120 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpCondenseGraph @ 0x18006E334 (LdrpCondenseGraph.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        PUNICODE_STRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  __int64 result; // rax
  int *v10; // rbx
  char v11; // di
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  PVOID v15; // rcx
  PVOID v16; // rax
  int v17; // eax
  int v18; // eax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      425,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  BaseAddress = 0LL;
  result = LdrpFastpthReloadedDll(a1);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    if ( !a6 || v11 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v10 = a8;
      v12 = LdrpFindOrPrepareLoadingModule(a1, a5, (__int64)&BaseAddress, (__int64)a8);
      if ( v12 == -1073741515 )
      {
        LOBYTE(v13) = 1;
        LdrpProcessWork(*((_QWORD *)BaseAddress + 22), v13);
      }
      else if ( v12 != -1073741267 && v12 < 0 )
      {
        *a8 = v12;
      }
    }
    else
    {
      v10 = a8;
      *a8 = -1073741515;
    }
    result = LdrpDrainWorkQueue(1LL);
    v15 = BaseAddress;
    if ( BaseAddress )
    {
      v16 = (PVOID)LdrpHandleReplacedModule();
      *a7 = v16;
      if ( BaseAddress != v16 )
      {
        LdrpFreeReplacedModule(BaseAddress);
        BaseAddress = *a7;
      }
      if ( *((_QWORD *)BaseAddress + 22) )
        LdrpCondenseGraph(*((_QWORD *)BaseAddress + 19));
      if ( *v10 >= 0 )
      {
        v17 = LdrpPrepareModuleForExecution(BaseAddress, v10);
        *v10 = v17;
        if ( v17 >= 0 )
        {
          v18 = LdrpBuildForwarderLink(a6, (__int64)BaseAddress);
          *v10 = v18;
          if ( v18 >= 0 && !LdrInitState )
            LdrpPinModule((__int64)BaseAddress);
        }
      }
      result = LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress + 19), v10);
      if ( *v10 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx((__int64)BaseAddress, 0);
        result = LdrpDereferenceModule(BaseAddress);
      }
    }
    else
    {
      *v10 = -1073741801;
    }
    if ( !v11 )
      result = LdrpDropLastInProgressCount(v15, v14);
  }
  else
  {
    v10 = a8;
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             655,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             (__int64)"Status: 0x%08lx\n",
             *v10);
  return result;
}
