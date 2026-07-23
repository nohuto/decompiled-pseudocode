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
  PLDR_DATA_TABLE_ENTRY Flink; // esi
  PLDR_DATA_TABLE_ENTRY v1; // edi

  Flink = dword_4B3A5D8C;
  while ( Flink != (PLDR_DATA_TABLE_ENTRY)&dword_4B3A5D8C )
  {
    v1 = Flink;
    Flink = (PLDR_DATA_TABLE_ENTRY)Flink->InLoadOrderLinks.Flink;
    if ( AVrfpIsVerifierProviderDll(v1->DllBase) )
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: skipped resnapping provider %ws ... \n", v1->BaseDllName.Buffer);
    }
    else
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: resnapping %ws ... \n", v1->BaseDllName.Buffer);
      AVrfpDllLoadNotificationInternal((const wchar_t **)v1);
    }
  }
}
