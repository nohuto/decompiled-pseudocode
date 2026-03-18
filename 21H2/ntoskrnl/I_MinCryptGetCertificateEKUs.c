/*
 * XREFs of I_MinCryptGetCertificateEKUs @ 0x140A31F7C
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A32064 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     MinAsn1ParseOIDSequence @ 0x140A32D28 (MinAsn1ParseOIDSequence.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A32F88 (MinAsn1ParseSingleExtensionValue.c)
 */

__int64 __fastcall I_MinCryptGetCertificateEKUs(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  _OWORD v8[2]; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v9 = 0;
  v8[0] = 0LL;
  if ( *a1 && (int)MinAsn1ParseSingleExtensionValue(&qword_140A389F0, a1, &v9, v8) > 0 )
  {
    if ( v9 )
    {
      if ( (int)MinAsn1ParseOIDSequence(v8, a2, a3) <= 0 )
        return (unsigned int)-1073740760;
    }
    else
    {
      *a2 = 0;
    }
    return v5;
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
