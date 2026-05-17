/*
 * XREFs of _RtlUnicodeStringCopy@8 @ 0x4B2DDBF1
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlpEnsureTailingSlashAndAddToList@8 @ 0x4B33D020 (_RtlpEnsureTailingSlashAndAddToList@8.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x4B2DDC57 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x4B2DDD9A (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0x4B2DDE13 (RtlWideCharArrayCopyWorker.c)
 */

int __thiscall RtlUnicodeStringCopy(_WORD *this)
{
  __int16 v1; // si
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  _DWORD v7[2]; // [esp+10h] [ebp-10h] BYREF
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v1 = 0;
  v3 = RtlUnicodeStringValidateDestWorker(v7, 0, this, this);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = 0;
    v4 = RtlUnicodeStringValidateSrcWorker(&v8, v3, v3);
    if ( v4 >= 0 )
    {
      v5 = RtlWideCharArrayCopyWorker(&v9, v7[1], v8);
      v1 = v9;
      v4 = v5;
    }
    *this = 2 * v1;
  }
  return v4;
}
