/*
 * XREFs of HWInsertAfter @ 0x1C01071FC
 * Callers:
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00C9C2C (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
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
