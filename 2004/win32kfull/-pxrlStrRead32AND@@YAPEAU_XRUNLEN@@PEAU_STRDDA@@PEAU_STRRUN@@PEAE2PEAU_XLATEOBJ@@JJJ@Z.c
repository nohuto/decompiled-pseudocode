/*
 * XREFs of ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C012EA00
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00B9BB0 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead32AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7)
{
  char *v7; // rdi
  int v8; // esi
  ULONG *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned int *v13; // rdx
  __int64 v14; // rax
  char *v16; // r10
  __int64 v17; // r12
  unsigned int *v18; // r13
  __int64 v19; // r15
  __int64 v20; // r14
  ULONG v21; // eax
  char *v22; // rcx

  v7 = (char *)a2 + 8;
  v8 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v9 = (ULONG *)&a3[4 * a6];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( a6 != a7 )
  {
    v10 = a7 - a6;
    if ( pxlo )
    {
      v17 = 0LL;
      v18 = (unsigned int *)((char *)a1 + 32);
      v19 = v10;
      do
      {
        v20 = *v18++;
        v21 = XLATEOBJ_iXlate(pxlo, *v9);
        if ( (_DWORD)v20 )
        {
          v8 += v20;
          v22 = &v7[4 * v17 + 8];
          v17 += v20;
          do
          {
            *(_DWORD *)v22 &= v21;
            v22 += 4;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          *(_DWORD *)&v7[4 * v17 + 8] &= v21;
        }
        ++v9;
        --v19;
      }
      while ( v19 );
    }
    else
    {
      v11 = 0LL;
      v12 = v10;
      v13 = (unsigned int *)((char *)a1 + 32);
      do
      {
        v14 = *v13++;
        if ( (_DWORD)v14 )
        {
          v8 += v14;
          v16 = &v7[4 * v11 + 8];
          v11 += v14;
          do
          {
            *(_DWORD *)v16 &= *v9;
            v16 += 4;
            LODWORD(v14) = v14 - 1;
          }
          while ( (_DWORD)v14 );
        }
        else
        {
          *(_DWORD *)&v7[4 * v11 + 8] &= *v9;
        }
        ++v9;
        --v12;
      }
      while ( v12 );
    }
  }
  return (struct _XRUNLEN *)&v7[4 * v8 + 8];
}
