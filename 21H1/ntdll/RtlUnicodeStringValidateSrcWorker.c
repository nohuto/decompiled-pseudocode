/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x4B2DDD9A
 * Callers:
 *     _RtlUnicodeStringCopy@8 @ 0x4B2DDBF1 (_RtlUnicodeStringCopy@8.c)
 *     _RtlUnicodeStringCat@8 @ 0x4B2DDD16 (_RtlUnicodeStringCat@8.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x4B2DDDD0 (RtlUnicodeStringValidateWorker.c)
 */

int __fastcall RtlUnicodeStringValidateSrcWorker(unsigned __int16 *a1, _DWORD *a2, int *a3, int a4, int a5)
{
  int result; // eax

  *a3 = 0;
  *a2 = 0;
  result = RtlUnicodeStringValidateWorker(a1);
  if ( result >= 0 )
  {
    if ( a1 )
    {
      *a2 = *((_DWORD *)a1 + 1);
      *a3 = *a1 >> 1;
    }
  }
  return result;
}
