/*
 * XREFs of LdrGetDllHandleEx @ 0x1800168A0
 * Callers:
 *     CsrClientConnectToServer @ 0x180008E20 (CsrClientConnectToServer.c)
 *     LdrGetDllHandle @ 0x180016870 (LdrGetDllHandle.c)
 *     SbpResolveBasedOnName @ 0x180113BC8 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpPinModule @ 0x18000F948 (LdrpPinModule.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x18001F544 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int LoadedDll; // ebx
  int v10; // edi
  __int64 v11; // rsi
  int Count; // eax
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+BCh] [rbp-2Ch]

  v13 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      844,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n",
      a4);
  LdrpInitializeDllPath(*(_QWORD *)(a4 + 8), a2, v14);
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 )
    goto LABEL_5;
  if ( a5 )
  {
    v10 = a1 & 2;
  }
  else
  {
    v10 = a1 & 2;
    if ( (a1 & 2) == 0 )
    {
LABEL_5:
      LoadedDll = -1073741811;
      goto LABEL_6;
    }
  }
  LoadedDll = LdrpFindLoadedDll(a4, v14, &v13);
  if ( LoadedDll >= 0 )
  {
    v11 = v13;
    if ( v10 )
    {
      Count = LdrpPinModule(v13);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_16;
      Count = LdrpIncrementModuleLoadCount(v13);
    }
    LoadedDll = Count;
LABEL_16:
    if ( LoadedDll >= 0 && a5 )
      *a5 = *(_QWORD *)(v11 + 48);
    LdrpDereferenceModule(v11);
  }
LABEL_6:
  if ( v15 )
    RtlReleasePath(v14[0]);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      894,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDll);
  return (unsigned int)LoadedDll;
}
