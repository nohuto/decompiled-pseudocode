/*
 * XREFs of ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18043C94C
 * Callers:
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18043C724 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008BF18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134FD8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18043C458 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-L.c)
 *     ?CertCloseStoreNoParam@details@wil@@YAXPEAX@Z @ 0x18043C6FC (-CertCloseStoreNoParam@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall TryGetCertSubjectName(__int64 a1, const void *a2)
{
  void *v3; // rdx
  char *v4; // rbx
  const char *v5; // r9
  const CERT_CONTEXT *CertificateInStore; // rax
  const CERT_CONTEXT *v7; // rsi
  DWORD NameStringW; // r14d
  void *v9; // rdx
  HCRYPTMSG hCryptMsg; // [rsp+60h] [rbp-A0h] BYREF
  HCERTSTORE hCertStore; // [rsp+68h] [rbp-98h] BYREF
  int v13; // [rsp+70h] [rbp-90h]
  LPWSTR pszNameString; // [rsp+78h] [rbp-88h] BYREF
  char *v15; // [rsp+80h] [rbp-80h]
  const CERT_CONTEXT *v16; // [rsp+88h] [rbp-78h]
  _BYTE pvFindPara[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v18; // [rsp+98h] [rbp-68h]
  __int128 v19; // [rsp+C0h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]
  DWORD pcbData; // [rsp+1A0h] [rbp+A0h] BYREF
  int pvTypePara; // [rsp+1A8h] [rbp+A8h] BYREF

  v13 = 0;
  hCryptMsg = 0LL;
  hCertStore = 0LL;
  if ( CryptQueryObject(1u, a2, 0x400u, 2u, 0, 0LL, 0LL, 0LL, &hCertStore, &hCryptMsg, 0LL)
    && CryptMsgGetParam(hCryptMsg, 6u, 0, 0LL, &pcbData) )
  {
    v4 = (char *)LocalAlloc(0x40u, pcbData);
    v15 = v4;
    if ( !v4 )
    {
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        27LL,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
        v5);
      __debugbreak();
    }
    if ( CryptMsgGetParam(hCryptMsg, 6u, 0, v4, &pcbData) )
    {
      memset_0(pvFindPara, 0, 0xD0uLL);
      v19 = *(_OWORD *)(v4 + 8);
      v18 = *(_OWORD *)(v4 + 24);
      CertificateInStore = CertFindCertificateInStore(hCertStore, 0x10001u, 0, 0xB0000u, pvFindPara, 0LL);
      v7 = CertificateInStore;
      v16 = CertificateInStore;
      if ( CertificateInStore )
      {
        pvTypePara = 33554435;
        NameStringW = CertGetNameStringW(CertificateInStore, 2u, 0, &pvTypePara, 0LL, 0);
        if ( NameStringW )
        {
          wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&pszNameString);
          if ( CertGetNameStringW(v7, 2u, 0, &pvTypePara, pszNameString, NameStringW) )
          {
            std::wstring::wstring(a1, pszNameString);
            v13 = 1;
            if ( pszNameString )
              LocalFree(pszNameString);
            CertFreeCertificateContext(v7);
            v15 = 0LL;
            LocalFree(v4);
            if ( hCryptMsg )
              CryptMsgClose(hCryptMsg);
            if ( hCertStore )
              wil::details::CertCloseStoreNoParam((wil::details *)hCertStore, v9);
            return a1;
          }
          if ( pszNameString )
            LocalFree(pszNameString);
        }
      }
      if ( v7 )
        CertFreeCertificateContext(v7);
    }
    v15 = 0LL;
    LocalFree(v4);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v13 = 1;
  if ( hCryptMsg )
    CryptMsgClose(hCryptMsg);
  if ( hCertStore )
    wil::details::CertCloseStoreNoParam((wil::details *)hCertStore, v3);
  return a1;
}
