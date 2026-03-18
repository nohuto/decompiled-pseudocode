/*
 * XREFs of HWInsertAfter @ 0x1C0106EA8
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0022ADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HWInsertAfter(unsigned __int64 a1)
{
  if ( a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL )
    return a1;
  else
    return *(_QWORD *)a1;
}
