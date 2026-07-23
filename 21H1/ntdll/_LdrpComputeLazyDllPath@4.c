/*
 * XREFs of _LdrpComputeLazyDllPath@4 @ 0x4B2B2720
 * Callers:
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 * Callees:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __thiscall LdrpComputeLazyDllPath(PCWSTR *this)
{
  int v2; // edi
  int DllPath; // eax
  int v4; // ecx
  int v5; // eax
  char v7; // cl
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock);
  if ( !*this )
  {
    DllPath = LdrpGetDllPath(this[4], (int)&v10, (int)&v9, (int)(this + 18), (int)(this + 5), (int)&v8);
    v2 = DllPath;
    if ( DllPath < 0 )
    {
      v7 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrutil.c",
          1480,
          "LdrpComputeLazyDllPath",
          0,
          "Lazy DLL search path computation failed with status: 0x%08lx.\n",
          DllPath);
        v7 = ShowSnaps;
      }
      if ( (v7 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v4 = v10;
      this[1] = (PCWSTR)v9;
      v5 = v8;
      *((_BYTE *)this + 76) = 1;
      *this = (PCWSTR)v4;
      this[2] = (PCWSTR)v5;
      if ( v5 )
      {
        if ( (ShowSnaps & 5) != 0 )
          LdrpLogDbgPrint(
            "minkernel\\ntdll\\ldrutil.c",
            1498,
            "LdrpComputeLazyDllPath",
            2,
            "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v5,
            v4);
      }
      else if ( (ShowSnaps & 5) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrutil.c",
          1491,
          "LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v4);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
