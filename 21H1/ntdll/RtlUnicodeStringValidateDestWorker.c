/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x4B2DDC57
 * Callers:
 *     _RtlUnicodeStringCopy@8 @ 0x4B2DDBF1 (_RtlUnicodeStringCopy@8.c)
 *     _RtlUnicodeStringCbCatStringN@12 @ 0x4B2F249F (_RtlUnicodeStringCbCatStringN@12.c)
 *     _RtlUnicodeStringCopyString@8 @ 0x4B32D540 (_RtlUnicodeStringCopyString@8.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x4B2DDDD0 (RtlUnicodeStringValidateWorker.c)
 */

int __fastcall RtlUnicodeStringValidateDestWorker(unsigned __int16 *a1, _DWORD *a2, int *a3, int *a4, int a5, int a6)
{
  int v8; // edx

  *a2 = 0;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v8 = RtlUnicodeStringValidateWorker(0);
  if ( v8 >= 0 )
  {
    if ( a1 )
    {
      *a2 = *((_DWORD *)a1 + 1);
      *a3 = a1[1] >> 1;
      if ( a4 )
        *a4 = *a1 >> 1;
    }
  }
  return v8;
}
