/*
 * XREFs of LdrpPreprocessDllName @ 0x18001A360
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrLoadEnclaveModule @ 0x1800CCF80 (LdrLoadEnclaveModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CD53C (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4C54 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     LdrpApplyFileNameRedirection @ 0x18001A514 (LdrpApplyFileNameRedirection.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18001A8AC (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpGetFullPath @ 0x18006099C (LdrpGetFullPath.c)
 *     LdrpLogDbgPrint @ 0x1800CDC48 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int *a4)
{
  bool v5; // zf
  int FullPath; // ebx
  char v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int64 v11; // rdx
  _WORD *i; // rcx
  unsigned __int64 v13; // rdx
  _WORD *j; // rcx
  unsigned __int64 v15; // rdx
  _WORD *k; // rcx
  int v18; // eax
  const char *v19; // rax
  __int64 v20; // [rsp+30h] [rbp-38h]
  char v21; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 0x800008) == 0;
  v21 = 0;
  FullPath = 0;
  v9 = 0;
  if ( v5 )
  {
    FullPath = LdrpApplyFileNameRedirection(a3, a1, a3, a2, &v21);
    if ( FullPath < 0 )
      goto LABEL_23;
    v9 = v21;
  }
  v10 = a1;
  if ( !*a2 )
  {
    v11 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(*a1 + v11 - 2); (unsigned __int64)i >= v11; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) != 5 )
        {
          FullPath = LdrpGetFullPath(a1, a2);
          if ( FullPath >= 0 )
            *a4 |= 0x600u;
          goto LABEL_12;
        }
LABEL_11:
        FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, a1);
        goto LABEL_12;
      }
    }
    *a4 |= 0x20u;
    goto LABEL_11;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
  {
    v19 = "SxS";
    if ( !v9 )
      v19 = "API set";
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2680,
      (unsigned int)"LdrpPreprocessDllName",
      2,
      (__int64)"DLL %wZ was redirected to %wZ by %s\n",
      a1,
      a2,
      v19);
  }
  v18 = *a4 | 0x200;
  *a4 = v18;
  if ( v9 )
    *a4 = v18 | 4;
  v10 = a2;
LABEL_12:
  if ( FullPath >= 0 )
  {
    v13 = *((_QWORD *)v10 + 1);
    for ( j = (_WORD *)(*v10 + v13 - 2); ; --j )
    {
      if ( (unsigned __int64)j < v13 )
      {
LABEL_29:
        FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, &LdrpDefaultExtension);
        goto LABEL_23;
      }
      if ( *j == 46 )
        break;
      if ( *j == 47 || *j == 92 )
        goto LABEL_29;
    }
    v15 = *((_QWORD *)a2 + 1);
    for ( k = (_WORD *)(*a2 + v15 - 2); (unsigned __int64)k >= v15 && *k == 46; --k )
      *a2 -= 2;
    k[1] = 0;
LABEL_23:
    if ( FullPath >= 0 )
      return (unsigned int)FullPath;
  }
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LODWORD(v20) = FullPath;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2738,
      (unsigned int)"LdrpPreprocessDllName",
      0,
      (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
      a1,
      v20);
  }
  if ( (LdrpDebugFlags & 0x10) != 0 )
    __debugbreak();
  return (unsigned int)FullPath;
}
