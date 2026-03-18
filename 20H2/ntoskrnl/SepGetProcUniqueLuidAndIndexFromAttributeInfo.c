/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140595CE8
 * Callers:
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140595DB0 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140595FBC (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14022B12C (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromAttributeInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int SecurityAttributeAndValues; // r9d
  _QWORD v8[10]; // [rsp+20h] [rbp-78h] BYREF

  SecurityAttributeAndValues = -1073741275;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    memset(v8, 0, 0x48uLL);
    LODWORD(v8[2]) = SepProcUniqueAttributeName;
    v8[3] = off_140C0EF08;
    v8[1] = a1;
    SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v8);
    if ( SecurityAttributeAndValues >= 0 )
    {
      *a2 = *(_DWORD *)v8[6];
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v8);
      if ( SecurityAttributeAndValues >= 0 )
        *a3 = *(_QWORD *)v8[6];
    }
  }
  return (unsigned int)SecurityAttributeAndValues;
}
