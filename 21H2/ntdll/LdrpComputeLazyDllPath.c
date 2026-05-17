/*
 * XREFs of LdrpComputeLazyDllPath @ 0x1800614A0
 * Callers:
 *     LdrpSearchPath @ 0x18006035C (LdrpSearchPath.c)
 * Callees:
 *     LdrpGetDllPath @ 0x18001147C (LdrpGetDllPath.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  int DllPath; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v10; // cl
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpPathLock, a2, a3, a4);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                &v11,
                &v12,
                (_DWORD *)(a1 + 120),
                (_OWORD *)(a1 + 40),
                &v13);
    v5 = DllPath;
    if ( DllPath < 0 )
    {
      v10 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1480,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          (__int64)"Lazy DLL search path computation failed with status: 0x%08lx.\n",
          DllPath);
        v10 = LdrpDebugFlags;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v7 = v11;
      *(_QWORD *)(a1 + 8) = v12;
      v8 = v13;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v8;
      if ( v8 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1498,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            (__int64)"Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v8,
            v7);
      }
      else if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1491,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          (__int64)"DLL search path computed: %ws\n",
          v7);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v5;
}
