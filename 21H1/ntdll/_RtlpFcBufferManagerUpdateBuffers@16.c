/*
 * XREFs of _RtlpFcBufferManagerUpdateBuffers@16 @ 0x4B2E5386
 * Callers:
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlWaitOnAddress@16 @ 0x4B36A8E0 (_RtlWaitOnAddress@16.c)
 */

void *__fastcall RtlpFcBufferManagerUpdateBuffers(
        volatile __int32 *a1,
        char *a2,
        volatile __int32 a3,
        volatile __int32 a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  char *v7; // edi
  char *v8; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // edi
  _DWORD *v11; // esi
  bool v12; // zf
  unsigned int v13; // ecx
  size_t v15; // [esp-4h] [ebp-24h]
  volatile __int32 *v16; // [esp+Ch] [ebp-14h]
  int v17; // [esp+10h] [ebp-10h]
  int v19; // [esp+18h] [ebp-8h]
  int CompareAddress; // [esp+1Ch] [ebp-4h] BYREF

  v4 = *a1 & 1;
  CompareAddress = 3;
  v17 = v4;
  v19 = ((_BYTE)v4 - 1) & 1;
  v16 = &a1[12 * v4 + 4];
  v5 = (char *)v16 - a2;
  v6 = (char *)&a1[12 * v19 + 4] - a2;
  do
  {
    v7 = &a2[v6];
    v8 = &a2[v5];
    if ( *(_QWORD *)a2 )
    {
      *(_DWORD *)v7 = *(_DWORD *)a2;
      v9 = v7 + 4;
      *v9++ = *((_DWORD *)a2 + 1);
      *v9 = *((_DWORD *)a2 + 2);
      v9[1] = *((_DWORD *)a2 + 3);
      v8 = &a2[v5];
      v7 = a2;
    }
    *(_DWORD *)v7 = *(_DWORD *)v8;
    v11 = v8 + 4;
    v10 = v7 + 4;
    a2 += 16;
    v12 = CompareAddress-- == 1;
    *v10 = *v11++;
    *++v10 = *v11;
    v10[1] = v11[1];
  }
  while ( !v12 );
  a1[2 * v19 + 28] = a3;
  a1[2 * v19 + 29] = a4;
  v13 = (unsigned int)_InterlockedExchange(a1, v19) >> 1;
  if ( v13 )
  {
    for ( CompareAddress = v13 + _InterlockedExchangeAdd(a1 + 1, v13); CompareAddress; CompareAddress = *((_DWORD *)a1 + 1) )
      RtlWaitOnAddress((void *)(a1 + 1), &CompareAddress, 4uLL, (PLARGE_INTEGER)HIDWORD(v15));
  }
  LODWORD(v15) = 48;
  a1[2 * v17 + 28] = 0;
  a1[2 * v17 + 29] = 0;
  return memset((void *)v16, 0, v15);
}
