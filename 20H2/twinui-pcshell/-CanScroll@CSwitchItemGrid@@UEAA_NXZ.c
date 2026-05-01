/*
 * XREFs of ?CanScroll@CSwitchItemGrid@@UEAA_NXZ @ 0x18008B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemGrid::CanScroll(CSwitchItemGrid *this)
{
  return *((_BYTE *)this + 540);
}
