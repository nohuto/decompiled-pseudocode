/*
 * XREFs of AVrfpIsVerifierProviderDll @ 0x1800DAFC0
 * Callers:
 *     AVrfDllLoadNotification @ 0x1800849BC (AVrfDllLoadNotification.c)
 *     AVrfDllUnloadNotification @ 0x1800D9AD4 (AVrfDllUnloadNotification.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800DB5D4 (AVrfpSnapAlreadyLoadedDlls.c)
 * Callees:
 *     <none>
 */

char __fastcall AVrfpIsVerifierProviderDll(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // r8

  v1 = (__int64 *)AVrfpVerifierProvidersList;
  do
  {
    if ( v1 == &AVrfpVerifierProvidersList )
      return 0;
    v2 = v1[4];
    v1 = (__int64 *)*v1;
  }
  while ( !v2 || *(_QWORD *)(v2 + 48) != a1 );
  return 1;
}
