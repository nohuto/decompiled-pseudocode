/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C16A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r10d
  int v11; // ecx
  int v12; // esi
  int v13; // ebp
  unsigned __int8 *v14; // r11
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int *v18; // r15
  unsigned int v19; // ebx
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  char v22; // dl
  __int64 v23; // rbx
  unsigned __int8 *v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  ULONG v27; // edi
  __int64 iUniq; // rcx
  _DWORD *v29; // rdx
  char v30; // dl
  __int64 v31; // rdi
  unsigned __int8 *v32; // rax
  int v33; // eax
  struct _XLATEOBJ *v35; // [rsp+40h] [rbp+28h]

  v7 = a6;
  v11 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = v11;
  v12 = a6 & 7;
  v13 = 0;
  v14 = &a3[4 * ((__int64)a6 >> 3)];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v11;
  if ( a6 < a7 )
  {
    v15 = *(_DWORD *)v14;
    v16 = 0LL;
    if ( a5 )
    {
      v26 = a6 & 7;
      v35 = (struct _XLATEOBJ *)((char *)a1 + 32);
      while ( 1 )
      {
        v27 = a5->pulXlate[(unsigned __int64)(v15 & (unsigned int)dword_1C02EDA38[v26]) >> LOBYTE(dword_1C02EDA58[v26])];
        iUniq = v35->iUniq;
        v35 = (struct _XLATEOBJ *)((char *)v35 + 4);
        if ( (_DWORD)iUniq )
        {
          v13 += iUniq;
          v29 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += iUniq;
          do
          {
            *v29++ |= v27;
            LODWORD(iUniq) = iUniq - 1;
          }
          while ( (_DWORD)iUniq );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v27;
        }
        ++v7;
        v30 = v12 + 1;
        v31 = v26 + 1;
        if ( v7 >= a7 )
          break;
        if ( (v30 & 8) != 0 )
          v15 = *((_DWORD *)v14 + 1);
        v32 = v14 + 4;
        if ( (v30 & 8) == 0 )
          v32 = v14;
        v14 = v32;
        v33 = 0;
        if ( (v30 & 8) == 0 )
          v33 = v12 + 1;
        v26 = 0LL;
        v12 = v33;
        if ( (v30 & 8) == 0 )
          v26 = v31;
      }
    }
    else
    {
      v17 = a6 & 7;
      v18 = (unsigned int *)((char *)a1 + 32);
      while ( 1 )
      {
        v19 = (v15 & (unsigned int)dword_1C02EDA38[v17]) >> dword_1C02EDA58[v17];
        v20 = *v18++;
        if ( (_DWORD)v20 )
        {
          v13 += v20;
          v21 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v20;
          do
          {
            *v21++ |= v19;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v19;
        }
        ++v7;
        v22 = v12 + 1;
        v23 = v17 + 1;
        if ( v7 >= a7 )
          break;
        if ( (v22 & 8) != 0 )
          v15 = *((_DWORD *)v14 + 1);
        v24 = v14 + 4;
        if ( (v22 & 8) == 0 )
          v24 = v14;
        v14 = v24;
        v25 = 0;
        if ( (v22 & 8) == 0 )
          v25 = v12 + 1;
        v17 = 0LL;
        v12 = v25;
        if ( (v22 & 8) == 0 )
          v17 = v23;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v13 + 16);
}
