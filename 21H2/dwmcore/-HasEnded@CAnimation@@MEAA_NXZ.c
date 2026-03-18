/*
 * XREFs of ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1800E5230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::HasEnded(CAnimation *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 120) & 2) != 0 )
    return 1;
  result = 0;
  if ( !*((_QWORD *)this + 16) )
    return 1;
  return result;
}
