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
 *     LdrpPrepareModuleForExecution @ 0x18003D888 (LdrpPrepareModuleForExecution.c)
 *     LdrpDropLastInProgressCount @ 0x18005EEAC (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005FEF4 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18006011C (LdrpProcessWork.c)
 *     LdrpLogError @ 0x1800616D8 (LdrpLogError.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     LdrpFreeReplacedModule @ 0x180067B08 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B40 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x180067CB0 (LdrpHandleReplacedModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006C260 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpCondenseGraph @ 0x18006F464 (LdrpCondenseGraph.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8)
{
  __int64 result; // rax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      425,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  v21 = 0LL;
  result = LdrpFastpthReloadedDll(a1, a3, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v12 = a8;
      v14 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, a5, (__int64)&v21, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LOBYTE(v15) = 1;
        LdrpProcessWork(*(_QWORD *)(v21 + 176), v15);
      }
      else if ( v14 != -1073741267 && v14 < 0 )
      {
        *a8 = v14;
      }
    }
    else
    {
      v12 = a8;
      *a8 = -1073741515;
    }
    result = LdrpDrainWorkQueue(1LL);
    v17 = v21;
    if ( v21 )
    {
      v18 = LdrpHandleReplacedModule();
      *a7 = v18;
      if ( v21 != v18 )
      {
        LdrpFreeReplacedModule();
        v21 = *a7;
      }
      if ( *(_QWORD *)(v21 + 176) )
        LdrpCondenseGraph(*(_QWORD *)(v21 + 152));
      if ( *v12 >= 0 )
      {
        v19 = LdrpPrepareModuleForExecution(v21, v12);
        *v12 = v19;
        if ( v19 >= 0 )
        {
          v20 = LdrpBuildForwarderLink(a6, v21);
          *v12 = v20;
          if ( v20 >= 0 && !LdrInitState )
            LdrpPinModule(v21);
        }
      }
      result = LdrpFreeLoadContextOfNode(*(_QWORD *)(v21 + 152), v12);
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx(v21, 0);
        result = LdrpDereferenceModule(v21);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = LdrpDropLastInProgressCount(v17, v16);
  }
  else
  {
    v12 = a8;
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             655,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             (__int64)"Status: 0x%08lx\n",
             *v12);
  return result;
}
