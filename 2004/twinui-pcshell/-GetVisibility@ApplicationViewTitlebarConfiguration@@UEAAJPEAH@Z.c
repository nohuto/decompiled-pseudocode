/*
 * XREFs of ?GetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJPEAH@Z @ 0x180081A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetVisibility(
        ApplicationViewTitlebarConfiguration *this,
        int *a2)
{
  *a2 = *((unsigned __int8 *)this + 49);
  return *((_BYTE *)this + 48) == 0 ? 0x80070490 : 0;
}
