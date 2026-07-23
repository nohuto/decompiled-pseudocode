/*
 * XREFs of _LdrpWriteBackProtectedDelayLoad@20 @ 0x4B2CFDFF
 * Callers:
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(_RTL_SRWLOCK *a1, char *a2, int a3, int a4, int a5)
{
  int v5; // esi
  char *v7; // eax
  int v8; // ecx
  int v9; // eax
  char v10; // cl
  _RTL_SRWLOCK *SRWLock; // [esp+Ch] [ebp-18h]
  ULONG OldProtect; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch]
  PVOID BaseAddress; // [esp+1Ch] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+20h] [ebp-4h] BYREF

  v5 = a4;
  v14 = 4 * a4;
  LODWORD(RegionSize) = 4 * a4;
  BaseAddress = a2;
  SRWLock = a1 + 19;
  RtlAcquireSRWLockExclusive(a1 + 19);
  if ( *(_DWORD *)&a2[4 * a5] != *(_DWORD *)(a3 + 4 * a5)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( a4 )
    {
      v7 = &a2[v14];
      do
      {
        v7 -= 4;
        --v5;
        v8 = *(_DWORD *)&v7[a3 - (_DWORD)a2];
        if ( v8 )
          *(_DWORD *)v7 = v8;
      }
      while ( v5 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 2u, &OldProtect);
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v9 = LdrpUnsuppressAddressTakenIat(a1[6].Ptr, (int)&a2[v14 - a1[6].Value - 4]);
      v10 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrdload.c",
          850,
          "LdrpWriteBackProtectedDelayLoad",
          0,
          "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the D"
          "LL based at 0x%p.Status = 0x%x\n",
          a1[6].Ptr,
          v9);
        v10 = ShowSnaps;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
    }
  }
  RtlReleaseSRWLockExclusive(SRWLock);
}
