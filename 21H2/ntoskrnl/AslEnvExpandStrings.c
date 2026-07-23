/*
 * XREFs of AslEnvExpandStrings @ 0x1407541AC
 * Callers:
 *     AslEnvExpandStrings2 @ 0x140753DF0 (AslEnvExpandStrings2.c)
 * Callees:
 *     AslEnvVarQuery @ 0x14075433C (AslEnvVarQuery.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvExpandStrings(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4, unsigned __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v10; // r10
  unsigned int v11; // ebp
  __int64 v12; // r14
  _WORD *v13; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  int v17; // eax
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v6 = a5;
  v7 = a3;
  v19 = 0LL;
  v10 = a1;
  v11 = 0;
  v12 = 0LL;
  if ( !a3 )
  {
LABEL_9:
    if ( v6 )
      *a4 = 0;
    else
      v11 = -1073741789;
    goto LABEL_11;
  }
  do
  {
    if ( *a2 == 37 )
    {
      v15 = v7 - 1;
      v16 = 0LL;
      v13 = a2 + 1;
      if ( v7 != 1 )
      {
        do
        {
          if ( *v13 == 37 )
            break;
          ++v13;
          ++v16;
        }
        while ( v16 < v15 );
        if ( v16 && v16 < v15 )
        {
          v17 = AslEnvVarQuery(v10, a2 + 1, v16, a4, v6, &v19);
          if ( v17 == -1073741789 )
          {
            v12 += v19 - 1;
            v7 += -2LL - v16;
          }
          else
          {
            if ( v17 < 0 )
            {
              if ( v17 != -1073741568 )
                AslLogCallPrintf(
                  1,
                  (unsigned int)"AslEnvExpandStrings",
                  639,
                  (unsigned int)"AslEnvVarQuery failed [%x]");
              --v7;
              ++v12;
              v13 = a2;
              goto LABEL_23;
            }
            v12 += v19;
            v7 += -2LL - v16;
            if ( v6 > v19 )
            {
              v6 -= v19;
              a4 += v19;
LABEL_23:
              v10 = a1;
              goto LABEL_7;
            }
          }
          v11 = -1073741789;
          goto LABEL_23;
        }
      }
    }
    if ( v11 != -1073741789 )
    {
      if ( v6 <= 1 )
      {
        v11 = -1073741789;
      }
      else
      {
        --v6;
        *a4++ = *a2;
      }
    }
    ++v12;
    v13 = a2;
    --v7;
LABEL_7:
    a2 = v13 + 1;
  }
  while ( v7 );
  if ( v11 != -1073741789 )
    goto LABEL_9;
LABEL_11:
  if ( a6 )
    *a6 = v12 + 1;
  return v11;
}
