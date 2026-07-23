/*
 * XREFs of KeXorAffinityEx @ 0x140513938
 * Callers:
 *     PpmParkReportParkedCores @ 0x140228C20 (PpmParkReportParkedCores.c)
 *     PpmParkComputeDiff @ 0x14057D244 (PpmParkComputeDiff.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KeXorAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  unsigned __int16 *v4; // rsi
  unsigned __int16 v5; // r9
  unsigned __int16 *v6; // r11
  unsigned int v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx

  v3 = *a1;
  v4 = a2;
  v5 = *a2;
  v6 = a1;
  if ( *a1 <= *a2 )
    v6 = a2;
  if ( v3 <= v5 )
    v4 = a1;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( v3 <= v5 )
    v5 = *a1;
  if ( v5 )
  {
    do
    {
      v11 = v10++;
      v12 = *(_QWORD *)&v6[4 * v11 + 4] ^ *(_QWORD *)&v4[4 * v11 + 4];
      *(_QWORD *)&a3[4 * v11 + 4] = v12;
      v9 |= v12;
    }
    while ( v10 < *v4 );
  }
  v13 = *v6;
  *a3 = v13;
  while ( v10 < v13 )
  {
    v14 = v10++;
    *(_QWORD *)&a3[4 * v14 + 4] = *(_QWORD *)&v6[4 * v14 + 4];
    v13 = *a3;
  }
  *((_DWORD *)a3 + 1) = 0;
  a3[1] = 20;
  if ( v10 < 0x14 )
    memset(&a3[4 * v10 + 4], 0, 8LL * (20 - v10));
  LOBYTE(v8) = v9 != 0;
  return v8;
}
