/*
 * XREFs of AVrfpChainDuplicateVerificationLayers @ 0x1800DA618
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D9908 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DABC4 (AVrfpFindClosestThunkDuplicate.c)
 */

__int64 *AVrfpChainDuplicateVerificationLayers()
{
  __int64 *v0; // rbx
  __int64 *v1; // r13
  int v2; // r15d
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 ClosestThunkDuplicate; // rax
  __int64 *result; // rax
  __int64 v12; // [rsp+50h] [rbp+8h]

  v0 = (__int64 *)AVrfpVerifierProvidersList;
LABEL_14:
  result = &AVrfpVerifierProvidersList;
  while ( v0 != &AVrfpVerifierProvidersList )
  {
    v1 = v0;
    v2 = 0;
    v0 = (__int64 *)*v0;
    v3 = (_QWORD *)v1[5];
    if ( *v3 )
    {
      v4 = (_QWORD *)v1[5];
      do
      {
        v5 = (_QWORD *)v4[3];
        LODWORD(v6) = 0;
        if ( *v5 )
        {
          v7 = (_QWORD *)v4[3];
          v8 = 0LL;
          do
          {
            if ( (AVrfpDebug & 0x20) != 0 )
              DbgPrint("AVRF: Checking %ws for duplicate (%ws: %s) \n", v1[3], *v4, *v7);
            v9 = 3 * v8;
            ClosestThunkDuplicate = AVrfpFindClosestThunkDuplicate(v1, *v4, v5[v9]);
            v12 = ClosestThunkDuplicate;
            if ( ClosestThunkDuplicate )
            {
              if ( (AVrfpDebug & 0x10) != 0 )
              {
                DbgPrint("AVRF: Chaining (%ws: %s) to %ws\n", *v4, v5[v9], v1[3]);
                ClosestThunkDuplicate = v12;
              }
              v5[v9 + 1] = ClosestThunkDuplicate;
            }
            v6 = (unsigned int)(v6 + 1);
            v8 = (unsigned int)v6;
            v7 = &v5[3 * v6];
          }
          while ( *v7 );
        }
        v4 = &v3[4 * (unsigned int)++v2];
      }
      while ( *v4 );
      goto LABEL_14;
    }
  }
  return result;
}
