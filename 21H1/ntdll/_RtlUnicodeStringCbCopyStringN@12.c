/*
 * XREFs of _RtlUnicodeStringCbCopyStringN@12 @ 0x4B2DDCAF
 * Callers:
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x4B2DDDD0 (RtlUnicodeStringValidateWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x4B2DDE65 (RtlWideCharArrayCopyStringWorker.c)
 */

int __fastcall RtlUnicodeStringCbCopyStringN(_WORD *a1, int a2, unsigned int a3)
{
  __int16 v3; // di
  int result; // eax
  int v7; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  result = RtlUnicodeStringValidateWorker(a1);
  if ( result >= 0 )
  {
    v7 = 0;
    if ( a3 >> 1 > 0x7FFF )
    {
      result = -1073741811;
    }
    else
    {
      result = RtlWideCharArrayCopyStringWorker(&v7, a2, a3 >> 1);
      v3 = v7;
    }
    *a1 = 2 * v3;
  }
  return result;
}
