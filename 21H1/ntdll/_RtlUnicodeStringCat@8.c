/*
 * XREFs of _RtlUnicodeStringCat@8 @ 0x4B2DDD16
 * Callers:
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x4B2DDD9A (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x4B2DDDD0 (RtlUnicodeStringValidateWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0x4B2DDE13 (RtlWideCharArrayCopyWorker.c)
 */

int __fastcall RtlUnicodeStringCat(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // ebx
  int v8; // [esp+Ch] [ebp-10h]
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h] BYREF
  int v11; // [esp+18h] [ebp-4h]

  v11 = 0;
  v10 = a2;
  LOWORD(v3) = 0;
  v4 = RtlUnicodeStringValidateWorker(a1);
  if ( v4 >= 0 )
  {
    if ( a1 )
    {
      v6 = *a1;
      v11 = *((_DWORD *)a1 + 1);
      v3 = v6 >> 1;
    }
    v4 = RtlUnicodeStringValidateSrcWorker(&v9, v5, v5);
    if ( v4 >= 0 )
    {
      v10 = 0;
      v4 = RtlWideCharArrayCopyWorker(&v10, v8, v9);
      *a1 = 2 * (v3 + v10);
    }
  }
  return v4;
}
