/*
 * XREFs of sub_1800217BC @ 0x1800217BC
 * Callers:
 *     sub_1800218AC @ 0x1800218AC (sub_1800218AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800217BC(volatile signed __int32 *a1, int a2, int a3, _DWORD *a4)
{
  signed __int32 v4; // r10d
  BOOL v8; // edi
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  v8 = a2 == 4;
  while ( 1 )
  {
    a4[1] = 0;
    v9 = v4 | 1;
    if ( (((v4 | 1u) >> 14) & 1) != v8 )
    {
      if ( ((v9 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v9 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v9 = v4 & 0xFFFFC01E | 1;
      }
      v10 = 0;
      if ( a2 == 4 )
        v10 = 0x4000;
      v9 = v9 & 0xFFFFBFFF | v10;
    }
    v11 = (v9 >> 5) & 0x1FF;
    v12 = (unsigned int)(v11 + a3);
    if ( v12 > 0x1FF || v12 < (((unsigned __int64)v9 >> 5) & 0x1FF) )
    {
      LOWORD(v12) = a3;
      a4[2] = a2;
      a4[1] = v11;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v12)) & 0x3FE0 ^ v9,
                             v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}
