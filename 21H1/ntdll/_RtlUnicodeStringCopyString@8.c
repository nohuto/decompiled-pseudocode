/*
 * XREFs of _RtlUnicodeStringCopyString@8 @ 0x4B32D540
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x4B2DDC57 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x4B2DDE65 (RtlWideCharArrayCopyStringWorker.c)
 */

int __fastcall RtlUnicodeStringCopyString(unsigned __int16 *a1, _WORD *a2)
{
  int v4; // ecx
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v4 = RtlUnicodeStringValidateDestWorker(a1, &v6, &v7, 0, (int)a1, (int)a1);
  if ( v4 >= 0 )
  {
    v8 = 0;
    v4 = RtlWideCharArrayCopyStringWorker(v6, v7, &v8, a2, 0x7FFF);
    *a1 = 2 * v8;
  }
  return v4;
}
