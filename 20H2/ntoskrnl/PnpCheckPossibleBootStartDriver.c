/*
 * XREFs of PnpCheckPossibleBootStartDriver @ 0x1407B84A4
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140736D64 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1407372E4 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

bool __fastcall PnpCheckPossibleBootStartDriver(void *a1)
{
  bool v1; // bl
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  P = 0LL;
  if ( IopGetRegistryValue(a1, L"BootFlags", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  return v1;
}
