/*
 * XREFs of MinCryptVerifySignedHash2 @ 0x140659E70
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A32064 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ?MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z @ 0x140652804 (-MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z.c)
 *     MinAsn1ParseECCSignature @ 0x1406528B4 (MinAsn1ParseECCSignature.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A31D80 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x140A32E08 (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x140A32E50 (MinAsn1ParseRSAPublicKey.c)
 *     HashpVerifyEcdsaSignature @ 0x140A374B0 (HashpVerifyEcdsaSignature.c)
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 */

__int64 __fastcall MinCryptVerifySignedHash2(int a1, int a2, int a3, unsigned int *a4, __int64 a5)
{
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // r14d
  int v15; // eax
  _BYTE v17[32]; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h]
  unsigned __int8 *Src; // [rsp+78h] [rbp-88h]
  size_t v20; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v24; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v25; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v26[96]; // [rsp+D0h] [rbp-30h] BYREF

  if ( (int)MinAsn1ParsePublicKeyInfo(a5, v22) < 0 )
    return (unsigned int)-1073740760;
  v10 = MinCryptDecodeSignatureAlgorithmIdentifier(v23);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073740760;
  if ( v10 == 9216 )
  {
    if ( (int)MinAsn1ParseRSAPublicKey(&v24, v17) >= 0 )
    {
      v15 = HashpVerifyPkcs1Signature(
              a1,
              a2,
              a3,
              (_DWORD)v21,
              (unsigned int)v20,
              (__int64)Src,
              (unsigned int)Size,
              *((_QWORD *)a4 + 1),
              *a4,
              0);
      if ( v15 < 0 )
        return (unsigned int)-1073740760;
      return (unsigned int)v15;
    }
    return (unsigned int)-1073740760;
  }
  if ( (unsigned int)(v10 - 11777) > 1 )
    return (unsigned int)-1073740760;
  v12 = v10 - 11777;
  if ( v11 == 11777 )
  {
    v13 = 32;
    goto LABEL_10;
  }
  if ( v12 != 1 )
    return (unsigned int)-1073740760;
  v13 = 48;
LABEL_10:
  if ( (int)MinAsn1ParseECCSignature((__int64)a4, (__int64)v17) < 0 )
    return (unsigned int)-1073740760;
  if ( v24 != 2 * v13 + 1 )
    return (unsigned int)-1073740760;
  v14 = (int)v25;
  if ( *v25 != 4 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(Src, (unsigned int)Size, v26, v13) < 0 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(v21, (unsigned int)v20, &v26[v13], v13) < 0 )
    return (unsigned int)-1073740760;
  v9 = HashpVerifyEcdsaSignature(v11, v14 + 1, 2 * v13, a2, a3, (__int64)v26, 2 * v13);
  if ( v9 < 0 )
    return (unsigned int)-1073740760;
  return (unsigned int)v9;
}
