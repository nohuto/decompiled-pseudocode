/*
 * XREFs of MincrypK_ParseCertificateChainWithPolicy @ 0x140A32934
 * Callers:
 *     SecureDump_ValidateAmeCertChain @ 0x14055EF20 (SecureDump_ValidateAmeCertChain.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A32064 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptBuildErrorPolicy @ 0x140A330BC (I_MinCryptBuildErrorPolicy.c)
 *     MinAsn1ExtractParsedCertificatesFromSignedData @ 0x140A33DD0 (MinAsn1ExtractParsedCertificatesFromSignedData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall MincrypK_ParseCertificateChainWithPolicy(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 Pool2; // rax
  char *v7; // rdi
  int v8; // ebx
  __int64 v9; // rsi
  int v10; // ebx
  unsigned int v11; // r14d
  bool v12; // zf
  unsigned int v13; // r12d
  char *v14; // r13
  unsigned int v15; // eax
  __int64 v17; // [rsp+58h] [rbp-30h]
  unsigned int v19; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v19 = 10;
  Pool2 = ExAllocatePool2(258LL, 2400LL, 1919109443LL);
  v7 = (char *)Pool2;
  if ( Pool2 )
  {
    if ( (int)MinAsn1ExtractParsedCertificatesFromSignedData(a1, a2, &v19, Pool2) >= 0 && v19 )
    {
      v9 = (__int64)v7;
      v10 = (-1 << v19) | 1;
      do
      {
        v11 = ~v10;
        v17 = v9;
        while ( 1 )
        {
          v12 = !_BitScanForward(&v13, v11);
          if ( v12 || v13 >= v19 )
            break;
          v11 &= ~(1 << v13);
          v14 = &v7[240 * v13];
          v15 = *((_DWORD *)v14 + 28);
          if ( *(_DWORD *)(v9 + 160) == v15 && !memcmp(*(const void **)(v9 + 168), *((const void **)v14 + 15), v15) )
          {
            v9 = (__int64)&v7[240 * v13];
            v10 |= 1 << v13;
            break;
          }
        }
      }
      while ( v17 != v9 );
      v8 = MinCryptVerifyCertificateWithPolicy2(v9, v19, (__int64)v7, 0LL, a3);
      v3 = a3;
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v8 < 0 )
    v8 = I_MinCryptBuildErrorPolicy((unsigned int)v8, v3, 0x10000LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72634943u);
  return (unsigned int)v8;
}
