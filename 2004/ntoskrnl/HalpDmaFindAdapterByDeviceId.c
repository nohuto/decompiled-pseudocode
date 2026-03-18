/*
 * XREFs of HalpDmaFindAdapterByDeviceId @ 0x1403EC87C
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407B1368 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x140322B60 (KeReleaseSpinLock.c)
 *     ObReferenceObjectSafe @ 0x140328360 (ObReferenceObjectSafe.c)
 *     IidAreIdsStrictlyEqual @ 0x1405C0EDC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpDmaFindAdapterByDeviceId(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v4; // al
  __int64 *v5; // r11
  KIRQL v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rcx

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v5 = (__int64 *)qword_140C4BD48;
  v6 = v4;
  while ( v5 != &HalpDmaAdapterList )
  {
    v7 = (__int64)(v5 - 57);
    v8 = v5[9];
    if ( v8 && (unsigned __int8)IidAreIdsStrictlyEqual(v8, a1) )
    {
      if ( ObReferenceObjectSafe(v7) )
        v1 = v7;
      break;
    }
    v5 = (__int64 *)v5[1];
  }
  KeReleaseSpinLock(&HalpDmaAdapterListLock, v6);
  return v1;
}
