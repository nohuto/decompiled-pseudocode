/*
 * XREFs of ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801FFB94
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x1800EBD5F (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::Equals(__int64 this)
{
  unsigned int v1; // r8d
  char v2; // di
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  bool v15; // zf
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-38h]
  __m128i v20; // [rsp+30h] [rbp-28h]
  __m128i v21; // [rsp+40h] [rbp-18h]

  v1 = *(_DWORD *)(this + 16);
  v2 = 0;
  v3 = this;
  if ( v1 >= 2 )
  {
    v4 = 0;
    v5 = *(_QWORD *)(this + 24) + 80LL * (v1 - 2);
    v6 = *(_QWORD *)(this + 24) + 80LL * (v1 - 1);
    this = *(unsigned int *)(v5 + 72);
    if ( (_DWORD)this != *(_DWORD *)(v6 + 72) )
    {
      v19 = 1524;
      goto LABEL_3;
    }
    v7 = this - 17;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v15 = *(float *)v5 == *(float *)v6;
        goto LABEL_23;
      }
      v9 = v8 - 17;
      if ( v9 )
      {
        v10 = v9 - 17;
        if ( v10 )
        {
          v11 = v10 - 17;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( !v12 )
            {
              v20 = _mm_loadu_si128((const __m128i *)v5);
              v21 = _mm_loadu_si128((const __m128i *)v6);
              if ( *(float *)v20.m128i_i32 != *(float *)v21.m128i_i32
                || *(float *)&v20.m128i_i32[1] != *(float *)&v21.m128i_i32[1]
                || *(float *)&v20.m128i_i32[2] != *(float *)&v21.m128i_i32[2] )
              {
                goto LABEL_39;
              }
              v15 = *(float *)&v20.m128i_i32[3] == *(float *)&v21.m128i_i32[3];
              goto LABEL_23;
            }
            v13 = v12 - 1;
            if ( v13 )
            {
              this = (unsigned int)(v13 - 33);
              if ( (_DWORD)this )
              {
                if ( (_DWORD)this != 161 )
                {
                  v19 = 1586;
                  goto LABEL_3;
                }
                v14 = memcmp_0((const void *)v5, (const void *)v6, 0x40uLL) == 0;
                goto LABEL_38;
              }
              if ( *(float *)v5 != *(float *)v6
                || *(float *)(v5 + 4) != *(float *)(v6 + 4)
                || *(float *)(v5 + 8) != *(float *)(v6 + 8)
                || *(float *)(v5 + 12) != *(float *)(v6 + 12)
                || *(float *)(v5 + 16) != *(float *)(v6 + 16) )
              {
                goto LABEL_39;
              }
              v15 = *(float *)(v5 + 20) == *(float *)(v6 + 20);
LABEL_23:
              if ( v15 )
                v2 = 1;
              goto LABEL_39;
            }
          }
          v16 = *(_QWORD *)v5 - *(_QWORD *)v6;
          if ( *(_QWORD *)v5 == *(_QWORD *)v6 )
            v16 = *(_QWORD *)(v5 + 8) - *(_QWORD *)(v6 + 8);
          v14 = v16 == 0;
        }
        else
        {
          v17 = *(_QWORD *)v5 - *(_QWORD *)v6;
          if ( *(_QWORD *)v5 == *(_QWORD *)v6 )
            v17 = *(unsigned int *)(v5 + 8) - (unsigned __int64)*(unsigned int *)(v6 + 8);
          v14 = v17 == 0;
        }
      }
      else
      {
        v14 = *(_QWORD *)v5 == *(_QWORD *)v6;
      }
    }
    else
    {
      v14 = *(_BYTE *)v5 == *(_BYTE *)v6;
    }
LABEL_38:
    v2 = v14;
LABEL_39:
    *(_DWORD *)(v5 + 72) = 17;
    *(_BYTE *)(v5 + 76) = 1;
    *(_BYTE *)v5 = v2;
    --*(_DWORD *)(v3 + 16);
    return v4;
  }
  v19 = 1496;
LABEL_3:
  v4 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v19,
    0LL);
  return v4;
}
