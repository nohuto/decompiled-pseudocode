/*
 * XREFs of KeCanChangeEnclavePageProtection @ 0x14050F65C
 * Callers:
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiEncls @ 0x1403F6CE0 (KiEncls.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiEnclsStatus @ 0x14050F9B8 (KiEnclsStatus.c)
 */

__int64 KeCanChangeEnclavePageProtection()
{
  _DWORD *v0; // rbp
  unsigned int v1; // eax
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (_DWORD *)((unsigned __int64)v3 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (KeFeatureBits & 0x80000000000LL) == 0 )
    return 3221225659LL;
  memset(v0 + 16, 0, 0x40uLL);
  *(_DWORD *)(((unsigned __int64)v3 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 7;
  do
    v1 = KiEncls(0xEu);
  while ( v1 == 15 );
  result = KiEnclsStatus(v1);
  *v0 = result;
  return result;
}
