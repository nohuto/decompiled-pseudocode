/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C0077750
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0076BCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0077560 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(float **this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  float *v4; // r10
  float **v5; // r11
  int v6; // ecx
  float v8; // xmm3_4
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = *this;
  v5 = this;
  if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 2) == 0.0 && *((float *)a3 + 1) == 0.0 && *((float *)a3 + 2) == 0.0 )
  {
    *v4 = *(float *)a3 * *(float *)a2;
    v4[3] = *((float *)a3 + 3) * *((float *)a2 + 3);
    v4[1] = 0.0;
    v4[2] = 0.0;
  }
  else
  {
    *v4 = (float)(*((float *)a3 + 2) * *((float *)a2 + 1)) + (float)(*(float *)a3 * *(float *)a2);
    v4[1] = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
    v4[2] = (float)(*((float *)a3 + 2) * *((float *)a2 + 3)) + (float)(*(float *)a3 * *((float *)a2 + 2));
    v4[3] = (float)(*((float *)a3 + 3) * *((float *)a2 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  }
  if ( *((float *)a2 + 4) == 0.0 && EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 20)) )
  {
    v4[4] = *((float *)a3 + 4);
    v4[5] = *((float *)a3 + 5);
    v4[6] = *((float *)a3 + 6);
    v6 = *((_DWORD *)a3 + 7);
  }
  else
  {
    v4[4] = (float)((float)(*((float *)a3 + 2) * *((float *)a2 + 5)) + *((float *)a3 + 4))
          + (float)(*(float *)a3 * *((float *)a2 + 4));
    v8 = (float)((float)(*((float *)a3 + 3) * *((float *)a2 + 5)) + *((float *)a3 + 5))
       + (float)(*((float *)a3 + 1) * *((float *)a2 + 4));
    v4[5] = v8;
    v9 = *((_DWORD *)v4 + 4);
    v10 = (unsigned __int8)(v9 >> 23) - 118;
    if ( v10 > 40 )
      return 0LL;
    v11 = v9 & 0x7FFFFFLL | 0x800000;
    if ( v10 < 0 )
      v12 = v11 >> (118 - (unsigned __int8)(v9 >> 23));
    else
      v12 = v11 << v10;
    v13 = (v12 + 0x80000000LL) >> 32;
    v14 = -((unsigned __int64)(v12 + 0x80000000LL) >> 32);
    if ( v9 >= 0 )
      v14 = v13;
    *((_DWORD *)v4 + 6) = v14;
    v15 = (unsigned __int8)(SLODWORD(v8) >> 23) - 118;
    if ( v15 > 40 )
      return 0LL;
    v16 = LODWORD(v8) & 0x7FFFFFLL | 0x800000;
    if ( v15 < 0 )
      v17 = v16 >> (118 - (unsigned __int8)(SLODWORD(v8) >> 23));
    else
      v17 = v16 << v15;
    v18 = (v17 + 0x80000000LL) >> 32;
    v6 = -(int)v18;
    if ( v8 >= 0.0 )
      v6 = v18;
  }
  *((_DWORD *)v4 + 7) = v6;
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(v5, a4 & 0x38);
  return 1LL;
}
