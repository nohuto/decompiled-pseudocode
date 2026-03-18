/*
 * XREFs of ?DesiresTearing@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180263F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::DesiresTearing(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 29) & 0x800) != 0;
}
