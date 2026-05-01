/*
 * XREFs of ?get_PresenterKind@WindowingEnvironmentSettings@@UEAAJPEAI@Z @ 0x180298F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_PresenterKind(
        WindowingEnvironmentSettings *this,
        unsigned int *a2)
{
  *a2 = 0;
  if ( !*((_BYTE *)this + 68) )
    return 2147943568LL;
  *a2 = *((_DWORD *)this + 16);
  return 0LL;
}
