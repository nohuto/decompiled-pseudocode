/*
 * XREFs of ?_HashTHQAText@@YGHPAEKPAPAEPAK@Z @ 0x144013
 * Callers:
 *     __VerifyTHQBlob@16 @ 0x1449FD (__VerifyTHQBlob@16.c)
 * Callees:
 *     <none>
 */

int __userpurge _HashTHQAText@<eax>(
        UCHAR *a1@<ecx>,
        unsigned __int8 *a2,
        _DWORD *a3,
        unsigned __int8 **a4,
        unsigned int *a5)
{
  UCHAR *v5; // edi
  int v6; // eax
  int v9; // [esp+10h] [ebp-18h]
  ULONG pcbResult; // [esp+14h] [ebp-14h] BYREF
  UCHAR pbOutput[4]; // [esp+18h] [ebp-10h] BYREF
  UCHAR v12[4]; // [esp+1Ch] [ebp-Ch] BYREF
  BCRYPT_HASH_HANDLE phHash; // [esp+20h] [ebp-8h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [esp+24h] [ebp-4h] BYREF

  pcbResult = 0;
  v5 = 0;
  *(_DWORD *)v12 = 0;
  *(_DWORD *)pbOutput = 0;
  v9 = 0;
  phAlgorithm = 0;
  phHash = 0;
  *(_DWORD *)a2 = 0;
  *a3 = 0;
  if ( BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0, 0) >= 0
    && BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, 4u, &pcbResult, 0) >= 0 )
  {
    v5 = (UCHAR *)Win32AllocPoolZInit(*(_DWORD *)pbOutput, 1668313941);
    if ( v5 )
    {
      if ( BCryptGetProperty(phAlgorithm, L"HashDigestLength", v12, 4u, &pcbResult, 0) >= 0 )
      {
        v6 = Win32AllocPoolZInit(*(_DWORD *)v12, 1668313941);
        *(_DWORD *)a2 = v6;
        if ( v6 )
        {
          if ( BCryptCreateHash(phAlgorithm, &phHash, v5, *(ULONG *)pbOutput, 0, 0, 0) >= 0
            && BCryptHashData(phHash, a1, 4u, 0) >= 0
            && BCryptFinishHash(phHash, *(PUCHAR *)a2, *(ULONG *)v12, 0) >= 0 )
          {
            v9 = 1;
            *a3 = *(_DWORD *)v12;
          }
        }
      }
    }
  }
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v5 )
    Win32FreePool(v5);
  if ( !v9 && *(_DWORD *)a2 )
  {
    Win32FreePool(*(_DWORD *)a2);
    *(_DWORD *)a2 = 0;
  }
  return v9;
}
