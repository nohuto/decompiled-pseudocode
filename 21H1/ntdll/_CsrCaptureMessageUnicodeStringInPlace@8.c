/*
 * XREFs of _CsrCaptureMessageUnicodeStringInPlace@8 @ 0x4B33E7D5
 * Callers:
 *     _CsrCaptureMessageMultiUnicodeStringsInPlace@12 @ 0x4B33E740 (_CsrCaptureMessageMultiUnicodeStringsInPlace@12.c)
 * Callees:
 *     _ZwWow64CsrCaptureMessageString@20 @ 0x4B2F4760 (_ZwWow64CsrCaptureMessageString@20.c)
 */

unsigned int __fastcall CsrCaptureMessageUnicodeStringInPlace(int a1, unsigned __int16 *a2)
{
  unsigned int result; // eax
  unsigned int v4; // ecx

  ZwWow64CsrCaptureMessageString(a1, *((_DWORD *)a2 + 1), *a2, a2[1], (int)a2);
  result = a2[1];
  v4 = *a2;
  if ( (unsigned __int16)result > (unsigned __int16)v4 )
  {
    result -= v4;
    if ( result >= 2 )
    {
      result = *((_DWORD *)a2 + 1);
      *(_WORD *)(result + 2 * (v4 >> 1)) = 0;
    }
  }
  return result;
}
