/*
 * XREFs of LdrpInitShimEngine @ 0x18006C77C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpPinModule @ 0x18000F948 (LdrpPinModule.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpLoadShimEngine @ 0x18006C924 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x18006CD08 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 */

_WORD *__fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  int ShimEngineInterface; // eax
  _WORD *result; // rax
  char v9; // cl
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+28h] [rbp-D8h]
  int v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v19; // [rsp+68h] [rbp-98h]
  _WORD v20[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21[15]; // [rsp+170h] [rbp+70h] BYREF
  char v22; // [rsp+1ECh] [rbp+ECh]
  _BYTE v23[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v16 = 1572886;
  v17 = L"apphelp.dll";
  v18 = 0x1000000;
  v19 = v20;
  v20[0] = 0;
  v2 = LdrpBuildSystem32FileName(&v18, (__int64)&v16);
  if ( v2 < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_14;
    v10 = v2;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2628,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v10);
    goto LABEL_13;
  }
  LdrpInitializeDllPath(0LL, 16385LL, v21);
  Dll = LdrpLoadDll((__int64)&v18, (int)v21, 0, (__int64)&v13);
  if ( v22 )
    RtlReleasePath(v21[0]);
  if ( Dll < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v12 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2647,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Loading the shim engine DLL failed with status 0x%08lx\n",
        v12);
LABEL_13:
      v9 = LdrpDebugFlags;
    }
  }
  else
  {
    *(_DWORD *)(v13 + 104) |= 0x100u;
    g_pShimEngineModule = *(_QWORD *)(v13 + 48);
    LdrpPinModule(v13);
    LdrpDereferenceModule(v13, v4, v5, v6);
    ShimEngineInterface = LdrpGetShimEngineInterface();
    if ( ShimEngineInterface >= 0 )
    {
      SourceString = (PCWSTR)v23;
      v14 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                            g_pfnSE_InitializeEngine,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v14,
             LdrpImageEntry + 72,
             a1) >= 0 )
      {
        LdrpLoadShimEngine(SourceString);
        if ( SourceString != (PCWSTR)v23 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceString);
      }
      goto LABEL_9;
    }
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v11 = ShimEngineInterface;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2661,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Getting the shim engine exports failed with status 0x%08lx\n",
        v11);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (v9 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  result = v20;
  if ( v20 != v19 )
    return (_WORD *)NtdllpFreeStringRoutine((__int64)v19);
  return result;
}
