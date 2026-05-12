/*
 * XREFs of RaGetUnitStorageDeviceIdProperty @ 0x1C0074490
 * Callers:
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0074420 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 * Callees:
 *     memmove @ 0x1C001B200 (memmove.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceIdProperty(__int64 a1, int *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v4; // ebp
  __int64 v5; // rsi
  unsigned int *v6; // r13
  unsigned int v8; // ecx
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  int *v11; // r13
  unsigned __int16 v12; // dx
  __int16 v13; // ax
  __int64 result; // rax

  v3 = *a3;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 136);
  v6 = a3;
  if ( *a3 < 8 )
    return 3221225485LL;
  memset(a2, 0, v3);
  *a2 = 16;
  v8 = 12;
  a2[1] = 12;
  v9 = 0;
  v10 = *(unsigned __int8 *)(v5 + 3) | (*(unsigned __int8 *)(v5 + 2) << 8);
  if ( v10 )
  {
    v11 = a2 + 3;
    do
    {
      ++v4;
      v12 = (*(unsigned __int8 *)(v9 + v5 + 7) + 20) & 0xFFFC;
      a2[1] += v12;
      v8 = a2[1];
      if ( v8 <= v3 )
      {
        *v11 = *(_BYTE *)(v9 + v5 + 4) & 0xF;
        v11[1] = *(_BYTE *)(v9 + v5 + 5) & 0xF;
        v11[3] = (*(unsigned __int8 *)(v9 + v5 + 5) >> 4) & 3;
        v13 = *(unsigned __int8 *)(v9 + v5 + 7);
        *((_WORD *)v11 + 5) = v12;
        *((_WORD *)v11 + 4) = v13;
        memmove(v11 + 4, (const void *)(v9 + v5 + 8), *(unsigned __int8 *)(v9 + v5 + 7));
        v8 = a2[1];
        v11 = (int *)((char *)v11 + *((unsigned __int16 *)v11 + 5));
      }
      v9 += *(unsigned __int8 *)(v9 + v5 + 7) + 4;
    }
    while ( v9 < v10 );
    v6 = a3;
  }
  if ( v3 >= 0xC )
    a2[2] = v4;
  if ( v8 >= v3 )
    v8 = v3;
  result = 0LL;
  *v6 = v8;
  return result;
}
