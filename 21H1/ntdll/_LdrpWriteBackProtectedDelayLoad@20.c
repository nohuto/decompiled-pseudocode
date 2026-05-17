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

signed __int32 __fastcall LdrpWriteBackProtectedDelayLoad(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int v10; // eax
  char v11; // cl
  volatile signed __int32 *v12; // [esp+Ch] [ebp-18h]
  _BYTE v14[4]; // [esp+14h] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h] BYREF
  int v17; // [esp+20h] [ebp-4h] BYREF

  v5 = a4;
  v15 = 4 * a4;
  v17 = 4 * a4;
  v16 = a2;
  v12 = (volatile signed __int32 *)(a1 + 76);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 76));
  if ( *(_DWORD *)(a2 + 4 * a5) != *(_DWORD *)(a3 + 4 * a5) && (int)ZwProtectVirtualMemory(-1, &v16, &v17, 4, v14) >= 0 )
  {
    if ( a4 )
    {
      v7 = (_DWORD *)(a2 + v15);
      do
      {
        --v7;
        --v5;
        v8 = *(_DWORD *)((char *)v7 + a3 - a2);
        if ( v8 )
          *v7 = v8;
      }
      while ( v5 );
    }
    ZwProtectVirtualMemory(-1, &v16, &v17, 2, v14);
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v10 = LdrpUnsuppressAddressTakenIat(a2 + v15 - *(_DWORD *)(a1 + 24) - 4);
      v11 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrdload.c",
          850,
          "LdrpWriteBackProtectedDelayLoad",
          0,
          "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the D"
          "LL based at 0x%p.Status = 0x%x\n",
          *(const void **)(a1 + 24),
          v10);
        v11 = ShowSnaps;
      }
      if ( (v11 & 0x10) != 0 )
        __debugbreak();
    }
  }
  return RtlReleaseSRWLockExclusive(v12);
}
