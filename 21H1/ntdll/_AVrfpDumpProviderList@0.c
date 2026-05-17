/*
 * XREFs of _AVrfpDumpProviderList@0 @ 0x4B338DA8
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 */

int __stdcall AVrfpDumpProviderList()
{
  int *v0; // esi
  int result; // eax
  int v2; // [esp-4h] [ebp-10h]

  v0 = (int *)AVrfpVerifierProvidersList;
  while ( v0 != &AVrfpVerifierProvidersList )
  {
    v2 = v0[3];
    v0 = (int *)*v0;
    result = DbgPrint("AVRF: provider %ws \n", v2);
  }
  return result;
}
