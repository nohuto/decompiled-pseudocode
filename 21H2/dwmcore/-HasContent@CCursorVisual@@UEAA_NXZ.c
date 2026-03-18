/*
 * XREFs of ?HasContent@CCursorVisual@@UEAA_NXZ @ 0x180211C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCursorVisual::HasContent(CCursorVisual *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 93) || *((_QWORD *)this + 32) )
    return 1;
  return result;
}
