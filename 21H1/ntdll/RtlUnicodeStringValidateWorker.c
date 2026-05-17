/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x4B2DDDD0
 * Callers:
 *     RtlUnicodeStringValidateDestWorker @ 0x4B2DDC57 (RtlUnicodeStringValidateDestWorker.c)
 *     _RtlUnicodeStringCbCopyStringN@12 @ 0x4B2DDCAF (_RtlUnicodeStringCbCopyStringN@12.c)
 *     _RtlUnicodeStringCat@8 @ 0x4B2DDD16 (_RtlUnicodeStringCat@8.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x4B2DDD9A (RtlUnicodeStringValidateSrcWorker.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlUnicodeStringValidateWorker(unsigned __int16 *this, int a2)
{
  int result; // eax
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // dx

  result = 0;
  v4 = *this;
  if ( (v4 & 1) != 0 )
    return -1073741811;
  v5 = this[1];
  if ( (v5 & 1) != 0 || v4 > v5 || v5 == 0xFFFF || !*((_DWORD *)this + 1) && (v4 || v5) )
    return -1073741811;
  return result;
}
