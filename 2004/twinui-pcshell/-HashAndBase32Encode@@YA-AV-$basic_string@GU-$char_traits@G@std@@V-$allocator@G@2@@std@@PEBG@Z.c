/*
 * XREFs of ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180460660
 * Callers:
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804605D0 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019BD18 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x18046049C (-Base32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAEK@Z.c)
 *     ?CryptReleaseContextNoParam@details@wil@@YAX_K@Z @ 0x1804605BC (-CryptReleaseContextNoParam@details@wil@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int16 *__fastcall HashAndBase32Encode(unsigned __int16 *a1, const BYTE *a2)
{
  const char *v4; // r9
  const char *v5; // r9
  __int64 v6; // rax
  const char *v7; // r9
  unsigned int v8; // r8d
  const char *v9; // r9
  HCRYPTHASH phHash; // [rsp+30h] [rbp-40h] BYREF
  HCRYPTPROV phProv; // [rsp+38h] [rbp-38h] BYREF
  DWORD pdwDataLen; // [rsp+40h] [rbp-30h] BYREF
  BYTE pbData[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  phProv = 0LL;
  if ( !CryptAcquireContextW(&phProv, 0LL, L"Microsoft Enhanced RSA and AES Cryptographic Provider", 0x18u, 0xF0000000) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v4);
  phHash = 0LL;
  if ( !CryptCreateHash(phProv, 0x800Cu, 0LL, 0, &phHash) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v5);
    __debugbreak();
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)&a2[2 * v6] );
  if ( !CryptHashData(phHash, a2, 2 * v6, 0) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x5C,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v7);
    __debugbreak();
  }
  pdwDataLen = 32;
  if ( !CryptGetHashParam(phHash, 2u, pbData, &pdwDataLen, 0) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v9);
    __debugbreak();
  }
  Base32Encode(a1, pbData, v8);
  if ( phHash )
    CryptDestroyHash(phHash);
  if ( phProv )
    wil::details::CryptReleaseContextNoParam((wil::details *)phProv);
  return a1;
}
