/*
 * XREFs of IsMotherDesktopWindow @ 0x1C000EB48
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 == gTermIO[1] || a1 == qword_1C0339FD8 )
    return 1;
  return v1;
}
