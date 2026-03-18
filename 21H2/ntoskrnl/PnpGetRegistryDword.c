/*
 * XREFs of PnpGetRegistryDword @ 0x1403D2D2C
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084EA70 (PipDmgGetDriverDmarCompatLevel.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     PnpInitializePnpWatchdogs @ 0x140B23270 (PnpInitializePnpWatchdogs.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140B232DC (PnpQueryWatchdogTimeoutConfiguration.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1402088DC (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
