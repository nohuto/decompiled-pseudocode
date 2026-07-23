/*
 * XREFs of KeInitializeTimerTable @ 0x14079FD34
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x1403B6600 (KiInitializeTimer2Data.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiInitializeForceIdle @ 0x14079FE80 (KiInitializeForceIdle.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1)
{
  unsigned __int8 v2; // cl
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdi
  void *v8; // rsi
  __int64 v9; // rcx
  PVOID PoolWithTag; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = (unsigned __int8)off_140C00860[0]() != 0;
    }
    KiInitializeTimer2Data();
  }
  v2 = *(_BYTE *)(a1 + 208);
  if ( !KiPendingTimerBitmaps[2 * v2 + 1] )
  {
    v7 = 0x4000LL;
    if ( v2 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v8 = 0LL;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x4000uLL, 0x6254654Bu);
        v8 = PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        memset(PoolWithTag, 0, 0x4000uLL);
        v2 = *(_BYTE *)(a1 + 208);
      }
    }
    else
    {
      v8 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v7 = 32LL;
    }
    v9 = 2LL * v2;
    KiPendingTimerBitmaps[v9] = 8 * v7;
    KiPendingTimerBitmaps[v9 + 1] = (__int64)v8;
  }
  *(_DWORD *)(a1 + 12596) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 31792), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 31848) )
    *(_WORD *)(a1 + 31794) = *(_DWORD *)(a1 + 36) + 1280;
  v3 = a1 + 15176;
  v4 = 2LL;
  do
  {
    v5 = 256LL;
    do
    {
      *(_QWORD *)(v3 - 8) = 0LL;
      *(_DWORD *)(v3 + 20) = -1;
      *(_DWORD *)(v3 + 16) = 0;
      *(_QWORD *)(v3 + 8) = v3;
      *(_QWORD *)v3 = v3;
      v3 += 32LL;
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
  KiInitializeForceIdle(a1);
  return 0LL;
}
