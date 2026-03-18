/*
 * XREFs of ?vSolidXorRect1@@YGXPAU_RECTL@@KPAEJKK@Z @ 0x94B42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidXorRect1(
        struct _RECTL *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        char a6)
{
  unsigned int v6; // edi
  char v7; // bl
  LONG *p_bottom; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned __int8 *v16; // eax
  int v17; // edx
  unsigned __int8 *v18; // ecx
  int v19; // ebx
  int v20; // edi
  int v21; // eax
  unsigned int v22; // eax
  unsigned __int8 *v23; // ecx
  int v24; // edx
  unsigned __int8 *j; // eax
  int v26; // [esp+4h] [ebp-18h]
  int v27; // [esp+4h] [ebp-18h]
  unsigned int v28; // [esp+8h] [ebp-14h]
  char v29; // [esp+Ch] [ebp-10h]
  LONG *i; // [esp+10h] [ebp-Ch]
  unsigned __int8 *v31; // [esp+14h] [ebp-8h]
  int v32; // [esp+18h] [ebp-4h]
  int v33; // [esp+24h] [ebp+8h]

  v6 = a2;
  if ( a2 )
  {
    v7 = 5 - a6;
    p_bottom = &a1->bottom;
    v29 = 5 - a6;
    for ( i = &a1->bottom; ; i += 4 )
    {
      v9 = *p_bottom - *(p_bottom - 2);
      v10 = *(p_bottom - 3);
      v31 = &a3[a4 * *(p_bottom - 2)];
      v11 = v10 >> v7;
      v26 = v11;
      v12 = *(i - 1);
      v33 = v12 >> v29;
      v13 = (v10 << a6) & 0x1F;
      v32 = ((unsigned __int8)(v10 << a6) + (unsigned __int8)((v12 - v10) << a6)) & 0x1F;
      v14 = (unsigned int)(&aulMsk)[v13];
      v28 = ~(unsigned int)(&aulMsk)[v32];
      if ( v11 == v12 >> v29 )
        break;
      if ( v13 )
        goto LABEL_18;
      v15 = v12 >> v29;
LABEL_6:
      v16 = v31;
      v17 = v15 - v11;
      v27 = v15 - v11;
      if ( v15 != v11 )
      {
        v18 = &v31[4 * v11];
        if ( v9 )
        {
          v19 = v9;
          v20 = 4 * v17;
          do
          {
            v21 = v17;
            do
            {
              *(_DWORD *)v18 ^= a5;
              v18 += 4;
              --v21;
            }
            while ( v21 );
            v17 = v27;
            v18 += a4 - v20;
            --v19;
          }
          while ( v19 );
          v6 = a2;
          v16 = v31;
        }
        v15 = v33;
      }
      if ( v32 )
      {
        for ( j = &v16[4 * v15]; v9; --v9 )
        {
          *(_DWORD *)j ^= a5 & v28;
          j += a4;
        }
      }
LABEL_15:
      --v6;
      v7 = 5 - a6;
      p_bottom = i + 4;
      a2 = v6;
      if ( !v6 )
        return;
    }
    v14 &= ~(unsigned int)(&aulMsk)[v32];
LABEL_18:
    v22 = a5 & v14;
    v23 = &v31[4 * v11];
    if ( v9 )
    {
      v24 = v9;
      do
      {
        *(_DWORD *)v23 ^= v22;
        v23 += a4;
        --v24;
      }
      while ( v24 );
    }
    v15 = v33;
    ++v11;
    if ( v26 == v33 )
      goto LABEL_15;
    goto LABEL_6;
  }
}
