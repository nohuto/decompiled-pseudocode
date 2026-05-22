/*
 * XREFs of ?IsLocked@DWMCursor@@UEAA_NXZ @ 0x18001EBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DWMCursor::IsLocked(DWMCursor *this)
{
  return *((_BYTE *)this + 48);
}
