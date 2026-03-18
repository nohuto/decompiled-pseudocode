/*
 * XREFs of _lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator() @ 0x1C025A88C
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C0042DD0 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 * Callees:
 *     _lambda_e8d6b062d7ef6c7cf76be9537a85b4fa_::operator() @ 0x1C025AB04 (_lambda_e8d6b062d7ef6c7cf76be9537a85b4fa_--operator().c)
 */

__int64 __fastcall lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator()(unsigned int ***a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // esi
  unsigned int *v6; // r8
  unsigned int *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned int **v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int i; // r8d
  __int64 v15; // rdx

  v2 = 0;
  v5 = 0;
  *(_DWORD *)(a2 + 64) = ***a1;
  *(_QWORD *)(a2 + 68) = 672LL;
  *(_DWORD *)(a2 + 76) = 0;
  v6 = **a1;
  if ( *v6 )
  {
    v7 = **a1;
    do
    {
      v8 = 0;
      v9 = 17LL * v5;
      do
      {
        v10 = 17LL * v8;
        if ( v7[v9 + 4] == v7[v10 + 4] && v7[v9 + 5] == v7[v10 + 5] )
          break;
        ++v8;
      }
      while ( v8 <= v5 );
      lambda_e8d6b062d7ef6c7cf76be9537a85b4fa_::operator()(
        (_DWORD)v7,
        v5,
        200 * v5 + a2 + 80,
        (_DWORD)v6 + 4 + v9 * 4,
        v8 | 0xFE5C0000);
      v11 = *a1;
      ++v5;
      v6 = **a1;
      v7 = v6;
    }
    while ( v5 < *v6 );
    if ( *v6 )
    {
      do
      {
        v12 = 200LL * v2;
        v13 = *(_QWORD *)(v12 + a2 + 80);
        if ( (v13 & 0x4000000000000LL) == 0 )
        {
          *(_DWORD *)(v12 + a2 + 236) = v2;
          *(_QWORD *)(v12 + a2 + 80) = v13 | 0x4000000000000LL;
          for ( i = v2 + 1; ; ++i )
          {
            v11 = *a1;
            if ( i >= ***a1 )
              break;
            v15 = 200LL * i;
            if ( (*(_QWORD *)(v12 + a2 + 80) & 0x4000000000000LL) == 0
              && *(_DWORD *)(v15 + a2 + 196) == *(_DWORD *)(v12 + a2 + 196)
              && *(_DWORD *)(v15 + a2 + 200) == *(_DWORD *)(v12 + a2 + 200) )
            {
              *(_QWORD *)(v15 + a2 + 80) |= 0x4000000000000uLL;
              *(_DWORD *)(v15 + a2 + 236) = *(_DWORD *)(v12 + a2 + 236);
            }
          }
        }
        ++v2;
      }
      while ( v2 < **v11 );
    }
  }
  return 0LL;
}
