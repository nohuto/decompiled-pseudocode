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
  volatile __int32 *v15; // [esp+Ch] [ebp-14h]
  int v16; // [esp+10h] [ebp-10h]
  int v18; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h] BYREF

  v4 = *a1 & 1;
  i = 3;
  v16 = v4;
  v18 = ((_BYTE)v4 - 1) & 1;
  v15 = &a1[12 * v4 + 4];
  v5 = (char *)v15 - a2;
  v6 = (char *)&a1[12 * v18 + 4] - a2;
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
    v12 = i-- == 1;
    *v10 = *v11++;
    *++v10 = *v11;
    v10[1] = v11[1];
  }
  while ( !v12 );
  a1[2 * v18 + 28] = a3;
  a1[2 * v18 + 29] = a4;
  v13 = (unsigned int)_InterlockedExchange(a1, v18) >> 1;
  if ( v13 )
  {
    for ( i = v13 + _InterlockedExchangeAdd(a1 + 1, v13); i; i = *((_DWORD *)a1 + 1) )
      RtlWaitOnAddress(a1 + 1, &i, 4, 0);
  }
  a1[2 * v16 + 28] = 0;
  a1[2 * v16 + 29] = 0;
  return memset((void *)v15, 0, 0x30u);
}
