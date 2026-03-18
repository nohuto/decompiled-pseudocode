/*
 * XREFs of ?bIsZero@EPOINTFL@@QBEHXZ @ 0x219BA
 * Callers:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EPOINTFL::bIsZero(EPOINTFL *this)
{
  BOOL result; // eax

  result = 0;
  if ( !*(_DWORD *)this && !*((_DWORD *)this + 1) && !*((_DWORD *)this + 2) )
    return *((_DWORD *)this + 3) == 0;
  return result;
}
