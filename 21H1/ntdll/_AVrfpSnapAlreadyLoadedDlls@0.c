/*
 * XREFs of _AVrfpSnapAlreadyLoadedDlls@0 @ 0x4B33953A
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _AVrfpDllLoadNotificationInternal@4 @ 0x4B338C3D (_AVrfpDllLoadNotificationInternal@4.c)
 *     _AVrfpIsVerifierProviderDll@4 @ 0x4B339064 (_AVrfpIsVerifierProviderDll@4.c)
 */

void __stdcall AVrfpSnapAlreadyLoadedDlls()
{
  int *v0; // esi
  int *v1; // edi

  v0 = (int *)dword_4B3A5D8C;
  while ( v0 != &dword_4B3A5D8C )
  {
    v1 = v0;
    v0 = (int *)*v0;
    if ( AVrfpIsVerifierProviderDll((void *)v1[6]) )
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: skipped resnapping provider %ws ... \n", v1[12]);
    }
    else
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: resnapping %ws ... \n", v1[12]);
      AVrfpDllLoadNotificationInternal((const wchar_t **)v1);
    }
  }
}
