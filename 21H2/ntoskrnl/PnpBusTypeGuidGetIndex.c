/*
 * XREFs of PnpBusTypeGuidGetIndex @ 0x140747C74
 * Callers:
 *     PnpQueryBusInformation @ 0x1407499A8 (PnpQueryBusInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpBusTypeGuidGetIndex(__int128 *Source1)
{
  unsigned int v2; // ebx
  char *v3; // rdx
  __int128 v5; // xmm0
  __int64 v6; // r8
  void *Pool2; // rax
  void *v8; // rdi
  PVOID v9; // rsi

  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  v2 = 0;
  if ( !PnpBusTypeGuidCount )
    goto LABEL_7;
  do
  {
    v3 = (char *)PnpBusTypeGuidArray + 16 * v2;
    if ( Source1 == (__int128 *)v3 )
      break;
    if ( RtlCompareMemory(Source1, v3, 0x10uLL) == 16 )
      break;
    ++v2;
  }
  while ( v2 < PnpBusTypeGuidCount );
  if ( v2 == PnpBusTypeGuidCount )
  {
LABEL_7:
    if ( v2 == PnpBusTypeGuidCountMax )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 16LL * (v2 + 1), 1970499664LL);
      v8 = Pool2;
      if ( !Pool2 )
      {
        LOWORD(v2) = -1;
        goto LABEL_6;
      }
      v9 = PnpBusTypeGuidArray;
      memmove(Pool2, PnpBusTypeGuidArray, 16LL * (unsigned int)PnpBusTypeGuidCount);
      ++PnpBusTypeGuidCountMax;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      PnpBusTypeGuidArray = v8;
    }
    if ( v2 != -1 )
    {
      v5 = *Source1;
      v6 = 2LL * (unsigned int)PnpBusTypeGuidCount++;
      *(_OWORD *)((char *)PnpBusTypeGuidArray + 8 * v6) = v5;
    }
  }
LABEL_6:
  KeReleaseGuardedMutex(&PnpBusTypeGuidLock);
  return (unsigned __int16)v2;
}
