/*
 * XREFs of ?pxrlStrRead08@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0142DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead08(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  _DWORD *v9; // r10
  unsigned __int8 *v10; // r8
  int v11; // esi
  __int64 v12; // rsi
  unsigned int *v13; // rdi
  __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // rdx
  _DWORD *v17; // r11
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  int v21; // ebp
  unsigned __int8 *v22; // r15
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r12
  _DWORD *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r15
  int v29; // eax
  _DWORD *v30; // rdi
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rdi
  int v34; // ecx
  unsigned __int8 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+40h] [rbp+10h]
  unsigned __int8 *v38; // [rsp+48h] [rbp+18h]
  int v39; // [rsp+60h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = &a3[a6];
  v11 = *(_DWORD *)a1;
  if ( a4 )
  {
    v21 = a8 & 0x1F;
    v22 = &a4[4 * ((__int64)a8 >> 5)];
    v23 = 0;
    v38 = v22;
    v39 = *(_DWORD *)v22;
    if ( v8 < a7 )
    {
      v24 = 0LL;
      v25 = a8 & 0x1F;
      v37 = 0LL;
      v26 = (_DWORD *)((char *)a1 + 32);
      while ( 1 )
      {
        v27 = *v10++;
        if ( a5 )
          LODWORD(v27) = a5->pulXlate[v27];
        if ( (dword_1C02EE5E0[v25] & v39) != 0 )
        {
          v28 = (unsigned int)*v26;
          if ( (_DWORD)v28 )
          {
            v29 = v27;
            v30 = &v9[v24 + 2];
            v31 = (unsigned int)v28;
            v23 += v28;
            v37 += v28;
            while ( v31 )
            {
              *v30++ = v29;
              --v31;
            }
          }
          v22 = v38;
        }
        else
        {
          if ( v23 > 0 )
          {
            v36 = v23;
            *v9 = v11;
            v11 += v23;
            v9[1] = v23;
            v23 = 0;
            v9 += v36 + 2;
            v37 = 0LL;
          }
          v11 += *v26;
        }
        ++v8;
        v32 = v21 + 1;
        ++v26;
        v33 = v25 + 1;
        if ( v8 >= a7 )
          break;
        v34 = v32 & 0x20;
        if ( (v32 & 0x20) != 0 )
          v39 = *((_DWORD *)v22 + 1);
        v35 = v22 + 4;
        if ( (v32 & 0x20) == 0 )
          v35 = v22;
        v21 = 0;
        v38 = v35;
        v22 = v35;
        if ( (v32 & 0x20) == 0 )
          v21 = v32;
        v24 = v37;
        v25 = 0LL;
        if ( !v34 )
          v25 = v33;
      }
      if ( v23 > 0 )
      {
        *v9 = v11;
        v9[1] = v23;
        v9 += v23 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( a6 != a7 )
    {
      v12 = 0LL;
      v13 = (unsigned int *)((char *)a1 + 32);
      v14 = (unsigned int)(a7 - a6);
      if ( a5 )
      {
        v15 = (unsigned int)v14;
        do
        {
          v16 = *v13++;
          if ( (_DWORD)v16 )
          {
            LODWORD(a4) = v16 + (_DWORD)a4;
            v17 = &v9[v12 + 2];
            v12 += v16;
            do
            {
              *v17++ = a5->pulXlate[*v10];
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
          }
          ++v10;
          --v15;
        }
        while ( v15 );
      }
      else
      {
        do
        {
          v19 = *v13++;
          if ( (_DWORD)v19 )
          {
            LODWORD(a4) = v19 + (_DWORD)a4;
            v20 = &v9[v12 + 2];
            v12 += v19;
            do
            {
              *v20++ = *v10;
              LODWORD(v19) = v19 - 1;
            }
            while ( (_DWORD)v19 );
          }
          ++v10;
          --v14;
        }
        while ( v14 );
      }
    }
    return (struct _XRUNLEN *)&v9[(int)a4 + 2];
  }
}
