/*
 * XREFs of _lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator() @ 0x1C02EB79C
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C004CA90 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 * Callees:
 *     _lambda_6c91b3c659723331424fe42952e4f114_::operator() @ 0x1C02EB914 (_lambda_6c91b3c659723331424fe42952e4f114_--operator().c)
 */

__int64 __fastcall lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator()(unsigned int ***a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned int **v4; // rdx
  unsigned int v6; // esi
  unsigned int **v7; // r11
  unsigned int *v8; // r8
  unsigned int *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int *v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // rcx

  v3 = 0;
  v4 = *a1;
  v6 = 0;
  v7 = *a1;
  v8 = **a1;
  *(_DWORD *)(a2 + 64) = *v8;
  *(_QWORD *)(a2 + 68) = 672LL;
  *(_DWORD *)(a2 + 76) = 0;
  if ( *v8 )
  {
    v9 = v8;
    do
    {
      v10 = 0;
      v11 = 17LL * v6;
      do
      {
        v12 = 17LL * v10;
        if ( v9[v11 + 4] == v9[v12 + 4] && v9[v11 + 5] == v9[v12 + 5] )
          break;
        ++v10;
      }
      while ( v10 <= v6 );
      lambda_6c91b3c659723331424fe42952e4f114_::operator()(
        (_DWORD)v9,
        v6,
        216 * v6 + a2 + 80,
        (_DWORD)v8 + 4 + v11 * 4,
        v10 | 0xFE5C0000);
      v4 = *a1;
      ++v6;
      v7 = *a1;
      v8 = **a1;
      v9 = v8;
    }
    while ( v6 < *v8 );
  }
  v13 = *v8;
  if ( *v8 )
  {
    do
    {
      v14 = 216LL * v3;
      v15 = *(_QWORD *)(v14 + a2 + 80);
      if ( (v15 & 0x4000000000000LL) == 0 )
      {
        v16 = *v4;
        v17 = v3 + 1;
        *(_DWORD *)(v14 + a2 + 236) = v3;
        *(_QWORD *)(v14 + a2 + 80) = v15 | 0x4000000000000LL;
        v13 = *v16;
        if ( v3 + 1 < *v16 )
        {
          do
          {
            v18 = 216LL * v17;
            if ( (*(_QWORD *)(v14 + a2 + 80) & 0x4000000000000LL) == 0
              && *(_DWORD *)(v18 + a2 + 196) == *(_DWORD *)(v14 + a2 + 196)
              && *(_DWORD *)(v18 + a2 + 200) == *(_DWORD *)(v14 + a2 + 200) )
            {
              *(_QWORD *)(v18 + a2 + 80) |= 0x4000000000000uLL;
              *(_DWORD *)(v18 + a2 + 236) = *(_DWORD *)(v14 + a2 + 236);
            }
            v13 = *v16;
            ++v17;
          }
          while ( v17 < *v16 );
          v4 = v7;
        }
      }
      ++v3;
    }
    while ( v3 < v13 );
  }
  return 0LL;
}
