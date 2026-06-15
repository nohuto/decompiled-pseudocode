/*
 * XREFs of sub_1801330A8 @ 0x1801330A8
 * Callers:
 *     sub_1801236F8 @ 0x1801236F8 (sub_1801236F8.c)
 * Callees:
 *     sub_180133498 @ 0x180133498 (sub_180133498.c)
 */

__int64 __fastcall sub_1801330A8(_WORD *a1, _WORD *a2, _DWORD *a3, __int64 a4, int *a5)
{
  unsigned int v5; // ebx
  const char *v7; // r8
  __int64 v8; // r10
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  __int16 v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned __int16 v21; // ax
  int v22; // edx
  char v23; // si
  char v24; // r12
  char v25; // r13
  unsigned __int16 v26; // di
  __int16 *v27; // r8
  unsigned __int16 v28; // ax
  __int16 v29; // bp
  __int16 v30; // r14
  __int16 v31; // r15
  _WORD *v32; // r9
  __int64 v33; // rcx
  __int16 v34; // ax
  int v35; // ecx
  __int64 v37; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( !a1 )
  {
    v7 = "209";
LABEL_3:
    v5 = -2147024809;
    sub_180133498(a1, "IsValidMicArrayGeometry", v7);
    return v5;
  }
  if ( !a5 )
  {
    v7 = "210";
    goto LABEL_3;
  }
  v8 = (unsigned __int16)a1[8];
  v9 = 4096;
  if ( (_WORD)v8 )
    v9 = 0;
  v10 = v9;
  if ( a2 && *a2 != (_WORD)v8 )
    v10 = v9 | 1;
  if ( a3 && (int)v8 > *a3 )
    v10 |= 2u;
  v11 = v10 | 8;
  if ( *a1 == 256 )
    v11 = v10;
  v12 = v11 | 0x10;
  if ( a1[1] <= 2u )
    v12 = v11;
  v13 = v12 | 0x100;
  v14 = a1[3];
  if ( a1[4] >= 0x8548u || a1[4] == 0 )
    v13 = v12;
  v15 = v13 | 0x200;
  if ( a1[5] <= 0x7AB8u )
    v15 = v13;
  v16 = v15 | 0x20;
  if ( (unsigned __int16)(a1[2] + 15708) <= 0x7AB8u )
    v16 = v15;
  v17 = v16 | 0x40;
  if ( (unsigned __int16)(v14 + 15708) <= 0x7AB8u )
    v17 = v16;
  if ( (__int16)a1[4] > 0 || (v18 = 1, (__int16)a1[5] < 0) )
    v18 = 0;
  v19 = v17 | 0x400;
  if ( v18 )
    v19 = v17;
  v20 = v19 | 0x80;
  if ( (__int16)a1[2] <= v14 )
    v20 = v19;
  v21 = a1[6];
  v22 = v20 | 0x800;
  if ( v21 < a1[7] )
    v22 = v20;
  if ( a1[7] < 0x14u || v21 > 0x4E20u )
    v22 |= 0x20000u;
  v23 = 0;
  v24 = 1;
  v25 = 1;
  if ( !(_WORD)v8 )
    goto LABEL_73;
  v26 = 1;
  v37 = v8;
  v27 = a1 + 14;
  do
  {
    v28 = *(v27 - 5);
    if ( v28 > 5u )
    {
      if ( (v28 & 0xF) == 0xF )
        v22 |= 4u;
      else
        v22 |= 0x2000u;
    }
    v29 = *v27;
    v30 = *(v27 - 1);
    if ( (unsigned __int16)(*v27 + 31416) > 0xF570u )
      v22 |= 0x8000u;
    if ( (unsigned __int16)(v30 + 15708) > 0x7AB8u )
      v22 |= 0x4000u;
    if ( (v30 == -15708 || v30 == 15708) && v29 )
      v22 |= 0x100000u;
    if ( (unsigned __int16)(v29 + 15707) <= 0x7AB6u )
      v23 = 1;
    if ( v29 || v30 )
      v24 = 0;
    v31 = *(v27 - 3);
    if ( v31 || *(v27 - 2) )
      v25 = 0;
    if ( v26 < (unsigned __int16)v8 )
    {
      v32 = &a1[6 * v26 + 11];
      v33 = (unsigned __int16)(v8 - v26);
      v34 = *(v27 - 4);
      do
      {
        if ( v34 == *(v32 - 1) && v31 == *v32 )
        {
          if ( *(v27 - 2) == v32[1] && v29 == v32[3] )
          {
            v34 = *(v27 - 4);
            if ( v30 == v32[2] )
              v22 |= 0x10000u;
          }
          else
          {
            v34 = *(v27 - 4);
          }
        }
        v32 += 6;
        --v33;
      }
      while ( v33 );
    }
    v27 += 6;
    ++v26;
    --v37;
  }
  while ( v37 );
  if ( v25 && v24 )
LABEL_73:
    v22 |= 0x40000u;
  v35 = v22 | 0x80000;
  if ( v23 )
    v35 = v22;
  *a5 = v35;
  return v5;
}
