/*
 * XREFs of ?GetSystemCursorController@BamoInputSystemPrincipal@@UEAAPEAVBamoSystemCursorControllerPrincipal@@XZ @ 0x18001CA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoSystemCursorControllerPrincipal *__fastcall BamoInputSystemPrincipal::GetSystemCursorController(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoSystemCursorControllerPrincipal *)*((_QWORD *)this + 18);
}
