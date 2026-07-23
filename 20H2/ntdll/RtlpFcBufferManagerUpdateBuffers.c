/*
 * XREFs of RtlpFcBufferManagerUpdateBuffers @ 0x18005CA68
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C82C (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     RtlWaitOnAddress @ 0x180063460 (RtlWaitOnAddress.c)
 */

void *__fastcall RtlpFcBufferManagerUpdateBuffers(volatile __int64 *a1, volatile __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r9
  volatile __int64 *v9; // rbp
  char *v10; // rax
  char *v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1 & 1;
  v6 = (unsigned int)v4;
  v7 = 3LL;
  v8 = ((_BYTE)v4 - 1) & 1;
  v9 = &a1[9 * v4];
  v10 = (char *)v9 - a3 + 24;
  v11 = (char *)&a1[8 * v8 + 3 + v8] - a3;
  do
  {
    if ( *(_QWORD *)a3 )
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)a3;
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)(a3 + 16);
      *(_OWORD *)a3 = *(_OWORD *)&v10[a3];
      *(_QWORD *)(a3 + 16) = *(_QWORD *)&v10[a3 + 16];
    }
    else
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)&v10[a3];
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)&v10[a3 + 16];
    }
    a3 += 24LL;
    --v7;
  }
  while ( v7 );
  a1[v8 + 21] = a2;
  v12 = (unsigned __int64)_InterlockedExchange64(a1, v8) >> 1;
  if ( v12 )
  {
    for ( CompareAddress = v12 + _InterlockedExchangeAdd64(a1 + 1, v12);
          CompareAddress;
          CompareAddress = *((_QWORD *)a1 + 1) )
    {
      RtlWaitOnAddress((void *)(a1 + 1), &CompareAddress, 8uLL, 0LL);
    }
  }
  a1[v6 + 21] = 0LL;
  return memset((void *)(v9 + 3), 0, 0x48uLL);
}
