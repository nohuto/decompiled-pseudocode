/*
 * XREFs of ?ComputeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x1800BFD68
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800BFF00 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

signed int __fastcall SipcSectionId::ComputeFromData(PUCHAR pbOutput, ULONG cbInput, PUCHAR pbInput)
{
  int v6; // ebx
  signed int result; // eax
  BCRYPT_ALG_HANDLE hAlgorithm; // [rsp+40h] [rbp-18h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+78h] [rbp+20h] BYREF

  v6 = BCryptOpenAlgorithmProvider(&hAlgorithm, L"SHA256", 0LL, 0);
  if ( v6 >= 0 )
  {
    v6 = BCryptCreateHash(hAlgorithm, &phHash, 0LL, 0, 0LL, 0, 0);
    if ( v6 >= 0 )
    {
      v6 = BCryptHashData(phHash, pbInput, cbInput, 0);
      if ( v6 >= 0 )
        v6 = BCryptFinishHash(phHash, pbOutput, 0x20u, 0);
      BCryptDestroyHash(phHash);
    }
    BCryptCloseAlgorithmProvider(hAlgorithm, 0);
    if ( v6 >= 0 )
      return 0;
  }
  result = RtlNtStatusToDosError(v6);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
