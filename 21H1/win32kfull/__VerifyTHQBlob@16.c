/*
 * XREFs of __VerifyTHQBlob@16 @ 0x1449FD
 * Callers:
 *     ?CoreSignatureVerify@@YGHGGPAEPAK@Z @ 0x156D0B (-CoreSignatureVerify@@YGHGGPAEPAK@Z.c)
 * Callees:
 *     ?_HashTHQAText@@YGHPAEKPAPAEPAK@Z @ 0x144013 (-_HashTHQAText@@YGHPAEKPAPAEPAK@Z.c)
 */

BOOL __fastcall _VerifyTHQBlob(__int16 a1, __int16 a2, UCHAR *pbSignature, UCHAR *pbInput)
{
  BOOL v4; // edi
  unsigned __int8 **v6; // [esp+0h] [ebp-20h]
  unsigned int *v7; // [esp+4h] [ebp-1Ch]
  const WCHAR *pPaddingInfo; // [esp+8h] [ebp-18h] BYREF
  ULONG cbHash; // [esp+Ch] [ebp-14h] BYREF
  PUCHAR pbHash; // [esp+10h] [ebp-10h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [esp+14h] [ebp-Ch] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [esp+18h] [ebp-8h] BYREF
  _WORD v13[2]; // [esp+1Ch] [ebp-4h] BYREF

  v13[1] = a1;
  v13[0] = a2;
  v4 = 0;
  phAlgorithm = 0;
  phKey = 0;
  pbHash = 0;
  cbHash = 0;
  pPaddingInfo = 0;
  if ( _HashTHQAText((UCHAR *)v13, (unsigned __int8 *)&pbHash, &cbHash, v6, v7)
    && BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", L"Microsoft Primitive Provider", 0) >= 0
    && BCryptImportKeyPair(phAlgorithm, 0, L"RSAPUBLICBLOB", &phKey, pbInput, 0x11Bu, 0) >= 0 )
  {
    pPaddingInfo = L"SHA256";
    v4 = BCryptVerifySignature(phKey, &pPaddingInfo, pbHash, cbHash, pbSignature, 0x100u, 2u) >= 0;
  }
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( pbHash )
    Win32FreePool(pbHash);
  return v4;
}
