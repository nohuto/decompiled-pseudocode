/*
 * XREFs of ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C012C6BC
 * Callers:
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C012C588 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C012C86C (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CcdCreateMd5Checksum(const unsigned __int8 *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int8 v9[16]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  memset(a3, 0, 0x42uLL);
  result = CcdCreateMd5Checksum(a1, a2, v9);
  if ( (int)result >= 0 )
  {
    do
    {
      v8 = v9[v3];
      a3[2 * v3] = ByteToWCharArray[v8 >> 4];
      a3[2 * v3++ + 1] = ByteToWCharArray[v8 & 0xF];
    }
    while ( v3 < 16 );
    return 0LL;
  }
  return result;
}
