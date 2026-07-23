/*
 * XREFs of MiInitializeNumaGraph @ 0x140A448D8
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A446BC (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 */

__int64 __fastcall MiInitializeNumaGraph(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  unsigned int *v3; // rdx
  unsigned int v4; // r9d
  unsigned int j; // ecx
  __int64 v6; // r8
  unsigned int v7; // eax
  char v8; // dl
  unsigned int v9; // edi
  unsigned int v10; // r9d
  unsigned int v11; // ebp
  unsigned int *v12; // r14
  _QWORD *v13; // rsi
  unsigned int i; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  size_t v18; // rdx
  int *p_Base; // r11
  int v20; // edx
  __int64 v21; // r8
  int Base; // [rsp+20h] [rbp-428h] BYREF
  _QWORD v23[127]; // [rsp+28h] [rbp-420h] BYREF

  result = *(_QWORD *)(a1 + 240);
  v2 = 0;
  v3 = *(unsigned int **)(result + 296);
  if ( v3 )
  {
    v9 = *v3;
    v10 = (unsigned __int16)KeNumberNodes;
    v11 = (unsigned __int16)KeNumberNodes;
    if ( *v3 <= (unsigned __int16)KeNumberNodes )
      v11 = *v3;
    result = v9 + 1;
    v12 = &v3[result];
    if ( v11 > 0x40 )
      v11 = 64;
    if ( v11 )
    {
      v13 = v23;
      do
      {
        for ( i = 0; i < v9; v23[v16] = v15 )
        {
          if ( i >= 0x40 )
            break;
          v15 = *((_WORD *)v12 + v2 * v9 + i);
          if ( !v15 )
            v15 = 1;
          v16 = 2LL * i;
          LODWORD(v23[v16]) = i++;
        }
        if ( i < v10 )
        {
          v17 = &v23[2 * i];
          do
          {
            if ( i >= 0x40 )
              break;
            *v17 = -1LL;
            *((_DWORD *)v17 - 2) = i++;
            v17 += 2;
          }
          while ( i < v10 );
        }
        v18 = (unsigned __int16)KeNumberNodes;
        *v13 = 0LL;
        qsort(&Base, v18, 0x10uLL, MiNodeCostSort);
        v10 = (unsigned __int16)KeNumberNodes;
        result = 0LL;
        if ( KeNumberNodes )
        {
          p_Base = &Base;
          do
          {
            v20 = *p_Base;
            v21 = v2 * v10 + (unsigned int)result;
            p_Base += 4;
            result = (unsigned int)(result + 1);
            *(_DWORD *)(qword_140C4DED8 + 4 * v21) = v20;
          }
          while ( (unsigned int)result < v10 );
        }
        ++v2;
        v13 += 2;
      }
      while ( v2 < v11 );
    }
  }
  v4 = (unsigned __int16)KeNumberNodes;
  while ( v2 < v4 )
  {
    for ( j = v2; j < v4 + v2; *(_DWORD *)(qword_140C4DED8 + 4 * v6) = v8 & 0x3F )
    {
      v6 = v2 * (v4 - 1) + j;
      v7 = j++;
      v8 = v7 % v4;
      result = qword_140C4DED8;
    }
    ++v2;
  }
  return result;
}
