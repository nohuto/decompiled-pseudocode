/*
 * XREFs of ?bCalcMeshExtent@@YGHPAU_TRIVERTEX@@KPAXKKPAU_RECTL@@@Z @ 0xBD544
 * Callers:
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge bCalcMeshExtent@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct _TRIVERTEX *a3,
        unsigned int a4,
        void *a5,
        int *a6,
        unsigned int a7,
        struct _RECTL *a8)
{
  int v8; // ebx
  int v9; // ecx
  int *v10; // esi
  int v11; // edi
  int v12; // edx
  struct _TRIVERTEX *p_Red; // eax
  unsigned int x; // eax
  int v15; // eax
  int v16; // esi
  int result; // eax
  struct _TRIVERTEX *p_Blue; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [esp+Ch] [ebp-38h]
  int v24; // [esp+10h] [ebp-34h]
  unsigned int y; // [esp+14h] [ebp-30h]
  int v26; // [esp+14h] [ebp-30h]
  unsigned int v28; // [esp+1Ch] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-28h]
  signed int v31; // [esp+24h] [ebp-20h]
  unsigned int v32; // [esp+24h] [ebp-20h]
  struct _TRIVERTEX *v33; // [esp+2Ch] [ebp-18h]
  int v34; // [esp+2Ch] [ebp-18h]
  int v35; // [esp+30h] [ebp-14h]
  struct _TRIVERTEX *v36; // [esp+30h] [ebp-14h]
  _DWORD v37[3]; // [esp+34h] [ebp-10h]

  v8 = 0x7FFFFFFF;
  v9 = 0x7FFFFFFF;
  v10 = a6;
  v11 = 0x80000000;
  v12 = 0x80000000;
  v31 = 0x80000000;
  if ( (unsigned int)a5 > 1 )
  {
    if ( a5 == (void *)2 )
    {
      v32 = 0;
      p_Blue = a3;
      v36 = a3;
      if ( a4 )
      {
LABEL_35:
        v37[0] = p_Blue->x;
        v37[1] = v36->y;
        v37[2] = *(_DWORD *)&v36->Red;
        v19 = 0;
        v29 = 0;
        while ( 1 )
        {
          v20 = v37[v19];
          if ( v20 >= a1 )
            break;
          v21 = 2 * v20;
          v34 = *(_DWORD *)(a2 + 8 * v21);
          v22 = *(_DWORD *)(a2 + 8 * v21 + 4);
          v10 = a6;
          if ( v34 < v8 )
            v8 = v34;
          if ( v34 > v11 )
            v11 = v34;
          if ( v22 < v9 )
            v9 = v22;
          if ( v22 > v12 )
            v12 = v22;
          v19 = v29 + 1;
          v29 = v19;
          if ( v19 >= 3 )
          {
            p_Blue = (struct _TRIVERTEX *)&v36->Blue;
            ++v32;
            v10 = a6;
            v36 = (struct _TRIVERTEX *)((char *)v36 + 12);
            if ( v32 < a4 )
              goto LABEL_35;
LABEL_22:
            if ( v8 >= -134217728
              && v8 <= 0x8000000
              && v11 >= -134217728
              && v11 <= 0x8000000
              && v9 >= -134217728
              && v9 <= 0x8000000
              && v12 >= -134217728
              && v12 <= 0x8000000 )
            {
              *v10 = v8;
              v10[2] = v11;
              result = 1;
              v10[1] = v9;
              v10[3] = v12;
              return result;
            }
            break;
          }
        }
      }
    }
  }
  else
  {
    v28 = 0;
    p_Red = a3;
    v33 = a3;
    if ( a4 )
    {
      while ( 1 )
      {
        x = p_Red->x;
        if ( x > a1 )
          break;
        y = v33->y;
        v10 = a6;
        if ( y > a1 )
          break;
        v15 = 2 * x;
        v35 = *(_DWORD *)(a2 + 8 * v15);
        v24 = *(_DWORD *)(a2 + 8 * v15 + 4);
        v16 = 2 * y;
        v26 = *(_DWORD *)(a2 + 16 * y);
        v12 = v31;
        v23 = *(_DWORD *)(a2 + 8 * v16 + 4);
        if ( v35 < v8 )
          v8 = *(_DWORD *)(a2 + 8 * v15);
        if ( v35 > v11 )
          v11 = *(_DWORD *)(a2 + 8 * v15);
        if ( v24 < v9 )
          v9 = *(_DWORD *)(a2 + 8 * v15 + 4);
        if ( v24 > v31 )
        {
          v12 = *(_DWORD *)(a2 + 8 * v15 + 4);
          v31 = v12;
        }
        if ( v26 < v8 )
          v8 = v26;
        if ( v26 > v11 )
          v11 = v26;
        if ( v23 < v9 )
          v9 = *(_DWORD *)(a2 + 8 * v16 + 4);
        if ( v23 > v12 )
        {
          v12 = *(_DWORD *)(a2 + 8 * v16 + 4);
          v31 = v12;
        }
        p_Red = (struct _TRIVERTEX *)&v33->Red;
        ++v28;
        v10 = a6;
        v33 = (struct _TRIVERTEX *)((char *)v33 + 8);
        if ( v28 >= a4 )
          goto LABEL_22;
      }
    }
  }
  result = 0;
  *v10 = 0;
  v10[2] = 0;
  v10[1] = 0;
  v10[3] = 0;
  return result;
}
