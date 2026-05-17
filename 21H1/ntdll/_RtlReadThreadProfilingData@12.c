/*
 * XREFs of _RtlReadThreadProfilingData@12 @ 0x4B32CD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlReadThreadProfilingData(int a1, int a2, int a3)
{
  int v3; // edi
  int v5; // ebx
  volatile signed __int64 *v6; // esi
  volatile unsigned __int64 v7; // kr08_8
  signed __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // edi
  unsigned __int64 v13; // rax
  int v14; // ecx
  int v15; // [esp+4h] [ebp-24h]
  int v16; // [esp+8h] [ebp-20h]
  int v17; // [esp+10h] [ebp-18h]
  int v18; // [esp+18h] [ebp-10h]
  int v19; // [esp+1Ch] [ebp-Ch]
  __int64 v20; // [esp+20h] [ebp-8h]
  unsigned int v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]
  int v23; // [esp+34h] [ebp+Ch]

  v3 = a3;
  v19 = 0;
  if ( *(_WORD *)a3 != 288 )
    return -1073741306;
  if ( *(_BYTE *)(a3 + 2) != 1 )
    return -1073741583;
  if ( (a2 & 0xFFFFFFFC) != 0 )
    return -1073741584;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 12) = 0;
  v5 = a1;
  v18 = a2 & 1;
  v23 = a2 & 2;
  do
  {
    v16 = *(_DWORD *)(v5 + 16);
    v15 = *(_DWORD *)(v5 + 20);
    *(_QWORD *)(v3 + 16) = *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 48) + __rdtsc();
    if ( v18 )
    {
      v6 = (volatile signed __int64 *)(v5 + 24);
      *(_DWORD *)(v3 + 4) = *(_DWORD *)(v5 + 8);
      if ( *(_QWORD *)(v5 + 24) )
      {
        do
        {
          HIDWORD(v8) = *(_DWORD *)(v5 + 28);
          LODWORD(v20) = *(_DWORD *)v6;
          v7 = *v6;
          HIDWORD(v20) = HIDWORD(v7);
          LODWORD(v8) = v7;
        }
        while ( _InterlockedCompareExchange64(v6, 0LL, v8) != v20 );
        *(_QWORD *)(v3 + 8) |= v20;
        v5 = a1;
      }
    }
    if ( v23 )
    {
      v17 = *(_DWORD *)(v5 + 32);
      if ( *(_QWORD *)(v5 + 32) )
      {
        v9 = 0;
        v10 = 1;
        v21 = 0;
        v22 = 1;
        if ( *(_DWORD *)(v5 + 12) )
        {
          v11 = v5 + 72;
          v12 = v3 + 36;
          do
          {
            if ( (v17 & v10) != 0 )
            {
              *(_DWORD *)(v12 - 4) = 0;
              *(_DWORD *)v12 = 0;
              v13 = __readpmc(*(_DWORD *)(v11 - 4));
              v9 = v21;
              *(_QWORD *)(v12 + 4) = *(_QWORD *)(v11 + 8) + (unsigned int)(v13 - *(_DWORD *)v11);
            }
            v11 += 24;
            v10 = 2 * v22;
            v12 += 16;
            ++v9;
            v22 *= 2;
            v21 = v9;
          }
          while ( v9 < *(_DWORD *)(v5 + 12) );
          v3 = a3;
        }
      }
      *(_BYTE *)(v3 + 3) = *(_BYTE *)(v5 + 12);
    }
    v14 = ++v19;
  }
  while ( v16 != *(_DWORD *)(v5 + 16) || v15 != *(_DWORD *)(v5 + 20) );
  *(_DWORD *)(v3 + 24) = v14 - 1;
  return 0;
}
