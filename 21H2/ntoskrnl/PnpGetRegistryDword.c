/*
 * XREFs of PnpGetRegistryDword @ 0x1403B74FC
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14076E5C4 (PipDmgGetDriverDmarCompatLevel.c)
 *     PnpInitializePnpWatchdogs @ 0x140A54858 (PnpInitializePnpWatchdogs.c)
 *     PiDmaGuardProcessRegistry @ 0x140A548C4 (PiDmaGuardProcessRegistry.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140A548F4 (PnpQueryWatchdogTimeoutConfiguration.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x14039AB18 (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRegistryDword(void *a1, __int64 a2, _DWORD *a3)
{
  int RegistryValue; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // ebx

  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  v5 = 0LL;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryDword(0LL) )
      *a3 = *(unsigned int *)((char *)v5 + v5[2]);
    else
      v6 = -1073741271;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
