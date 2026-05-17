/*
 * XREFs of LdrLoadDll @ 0x180016A10
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x18007B340 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6AE0 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x180113D28 (SbpResolveBasedOnName.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v18[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v19; // [rsp+BCh] [rbp-2Ch]

  if ( a2 )
  {
    v8 = *a2;
    v9 = 2 * (*a2 & 4);
    v10 = v9 | 0x40;
    if ( (v8 & 2) == 0 )
      v10 = v9;
    v11 = v10 | 0x80;
    if ( (*a2 & 0x800000) == 0 )
      v11 = v10;
    v12 = v11 | 0x100;
    if ( (*a2 & 0x1000) == 0 )
      v12 = v11;
    v13 = v12 | 0x400000;
    if ( *a2 >= 0 )
      v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      151,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n",
      a3);
  if ( (LdrpPolicyBits & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( (v13 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v14 = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath(*(void **)(a3 + 8), a1, v18);
      v14 = LdrpLoadDll(a3, v18, v13, &v17);
      if ( v19 )
        RtlReleasePath(v18[0]);
      if ( v14 >= 0 )
      {
        v15 = v17;
        *a4 = *(_QWORD *)(v17 + 48);
        LdrpDereferenceModule(v15);
      }
    }
  }
  else
  {
    if ( (LdrpDebugFlags & 3) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrapi.c",
        172,
        (unsigned int)"LdrLoadDll",
        0,
        (__int64)"Nonpackaged process attempted to load a packaged DLL.\n");
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
    v14 = -1073741398;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      204,
      (unsigned int)"LdrLoadDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      v14);
  return (unsigned int)v14;
}
