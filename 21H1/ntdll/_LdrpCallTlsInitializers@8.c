/*
 * XREFs of _LdrpCallTlsInitializers@8 @ 0x4B2CF073
 * Callers:
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpCalloutExceptionFilter@4 @ 0x4B334818 (_LdrpCalloutExceptionFilter@4.c)
 */

void __fastcall LdrpCallTlsInitializers(int a1, int a2)
{
  char v3; // dl
  unsigned int v4; // edi
  _UNKNOWN **i; // eax
  int v6; // esi
  int v7; // esi
  int *v8; // esi
  int v9; // edi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v3 = 0;
  v4 = 0;
  for ( i = (_UNKNOWN **)LdrpTlsList; i != &LdrpTlsList; i = (_UNKNOWN **)*i )
  {
    v4 = (unsigned int)i;
    if ( i[8] == (_UNKNOWN *)a2 )
    {
      v3 = 1;
      break;
    }
  }
  v6 = -(v3 != 0);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  v7 = v4 & v6;
  if ( v7 )
  {
    v8 = *(int **)(v7 + 20);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        ++v8;
        if ( (ShowSnaps & 5) != 0 )
          LdrpLogDbgPrint(
            "minkernel\\ntdll\\ldrtls.c",
            1060,
            "LdrpCallTlsInitializers",
            2,
            "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v9,
            a2 + 36,
            *(_DWORD *)(a2 + 24));
        LdrpCallInitRoutine(v9, *(_DWORD *)(a2 + 24), a1, 0);
      }
    }
  }
}
