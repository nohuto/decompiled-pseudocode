/*
 * XREFs of ?get_KeepAspectRatio@WindowingEnvironmentSettings@@UEAAJPEAE@Z @ 0x1802BAAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_KeepAspectRatio(
        WindowingEnvironmentSettings *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  if ( !*((_BYTE *)this + 94) )
    return 2147943568LL;
  *a2 = *((_BYTE *)this + 120);
  return 0LL;
}
