/*
 * XREFs of _AVrfpIsVerifierProviderDll@4 @ 0x4B339064
 * Callers:
 *     _AVrfDllLoadNotification@4 @ 0x4B2A6D66 (_AVrfDllLoadNotification@4.c)
 *     _AVrfDllUnloadNotification@4 @ 0x4B33849A (_AVrfDllUnloadNotification@4.c)
 *     _AVrfpSnapAlreadyLoadedDlls@0 @ 0x4B33953A (_AVrfpSnapAlreadyLoadedDlls@0.c)
 * Callees:
 *     <none>
 */

char __thiscall AVrfpIsVerifierProviderDll(void *this)
{
  int *v1; // edx
  int v2; // eax

  v1 = (int *)AVrfpVerifierProvidersList;
  do
  {
    if ( v1 == &AVrfpVerifierProvidersList )
      return 0;
    v2 = v1[4];
    v1 = (int *)*v1;
  }
  while ( !v2 || *(void **)(v2 + 24) != this );
  return 1;
}
