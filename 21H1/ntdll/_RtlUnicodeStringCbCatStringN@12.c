/*
 * XREFs of _RtlUnicodeStringCbCatStringN@12 @ 0x4B2F249F
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x4B2DDC57 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x4B2DDE65 (RtlWideCharArrayCopyStringWorker.c)
 */

int __fastcall RtlUnicodeStringCbCatStringN(unsigned __int16 *a1, _WORD *a2, unsigned int a3)
{
  int v5; // ecx
  __int16 v6; // si
  _WORD *v8; // [esp-8h] [ebp-20h]
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  int v12; // [esp+14h] [ebp-4h] BYREF

  v5 = RtlUnicodeStringValidateDestWorker(a1, &v9, &v11, &v10, (int)a1, (int)a1);
  if ( v5 >= 0 )
  {
    if ( a3 >> 1 > 0x7FFF )
    {
      return -1073741811;
    }
    else
    {
      v12 = 0;
      v8 = a2;
      v6 = v10;
      v5 = RtlWideCharArrayCopyStringWorker(v9 + 2 * v10, v11 - v10, &v12, v8, a3 >> 1);
      *a1 = 2 * (v6 + v12);
    }
  }
  return v5;
}
