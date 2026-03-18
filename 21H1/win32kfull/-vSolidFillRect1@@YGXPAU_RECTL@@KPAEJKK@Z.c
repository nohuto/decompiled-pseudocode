/*
 * XREFs of ?vSolidFillRect1@@YGXPAU_RECTL@@KPAEJKK@Z @ 0x55C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidFillRect1(struct _RECTL *a1, unsigned int a2, unsigned __int8 *a3, int a4, ULONG Pattern, char a6)
{
  LONG *p_bottom; // edx
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  LONG v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  unsigned int v16; // edx
  unsigned int *v17; // eax
  struct _RECTL *v18; // eax
  unsigned __int8 *v19; // edx
  ULONG *v20; // edi
  int v21; // ebx
  struct _RECTL *v22; // esi
  ULONG v23; // eax
  struct _RECTL *v24; // edi
  int v25; // esi
  int v26; // eax
  ULONG v27; // esi
  ULONG *i; // ecx
  struct _RECTL *v29; // edi
  ULONG *j; // ecx
  ULONG *v31; // esi
  ULONG v32; // edx
  struct _RECTL *v33; // edi
  char v34; // [esp+4h] [ebp-18h]
  LONG *v35; // [esp+8h] [ebp-14h]
  unsigned int v36; // [esp+Ch] [ebp-10h]
  int v37; // [esp+10h] [ebp-Ch]
  int v38; // [esp+14h] [ebp-8h]
  unsigned __int8 *v39; // [esp+18h] [ebp-4h]
  struct _RECTL *v40; // [esp+24h] [ebp+8h]

  if ( a2 )
  {
    p_bottom = &a1->bottom;
    v7 = a4;
    v34 = 5 - a6;
    v35 = &a1->bottom;
    do
    {
      v8 = *(p_bottom - 2);
      v9 = *(p_bottom - 3);
      v39 = &a3[v7 * v8];
      v10 = *p_bottom;
      v11 = *(p_bottom - 1);
      v40 = (struct _RECTL *)(v10 - v8);
      v12 = v9 << a6;
      v13 = v9 >> v34;
      v38 = v11 >> v34;
      v14 = ((unsigned __int8)(v9 << a6) + (unsigned __int8)((v11 - v9) << a6)) & 0x1F;
      v15 = v38;
      v16 = (unsigned int)(&aulMsk)[v14];
      v36 = v16;
      v17 = (&aulMsk)[v12 & 0x1F];
      if ( v13 == v38 )
      {
        v24 = v40;
        v25 = ~v16 & (unsigned int)v17;
        v26 = ~v25;
        v27 = Pattern & v25;
        for ( i = (ULONG *)&v39[4 * v13]; v24; v24 = (struct _RECTL *)((char *)v24 - 1) )
        {
          *i = v27 | v26 & *i;
          i = (ULONG *)((char *)i + v7);
        }
      }
      else
      {
        if ( v17 == (unsigned int *)-1 )
        {
          v18 = v40;
        }
        else
        {
          v31 = (ULONG *)&v39[4 * v13];
          v32 = Pattern & (unsigned int)v17;
          v37 = ~(unsigned int)v17;
          v18 = v40;
          v33 = v40;
          if ( v40 )
          {
            do
            {
              *v31 = v32 | v37 & *v31;
              v31 = (ULONG *)((char *)v31 + v7);
              v33 = (struct _RECTL *)((char *)v33 - 1);
            }
            while ( v33 );
            v18 = v40;
          }
          v15 = v38;
          ++v13;
        }
        v19 = v39;
        v20 = (ULONG *)&v39[4 * v13];
        v21 = v15 - v13;
        if ( v15 != v13 )
        {
          v22 = v18;
          if ( v18 )
          {
            do
            {
              v22 = (struct _RECTL *)((char *)v22 - 1);
              switch ( v21 )
              {
                case 1:
                  *v20 = Pattern;
                  break;
                case 2:
                  v23 = Pattern;
                  goto LABEL_23;
                case 3:
                  v23 = Pattern;
                  goto LABEL_22;
                case 4:
                  v23 = Pattern;
                  goto LABEL_21;
                case 5:
                  v23 = Pattern;
                  goto LABEL_20;
                case 6:
                  v23 = Pattern;
                  goto LABEL_19;
                case 7:
                  v23 = Pattern;
                  v20[6] = Pattern;
LABEL_19:
                  v20[5] = v23;
LABEL_20:
                  v20[4] = v23;
LABEL_21:
                  v20[3] = v23;
LABEL_22:
                  v20[2] = v23;
LABEL_23:
                  v20[1] = v23;
                  *v20 = v23;
                  break;
                default:
                  RtlFillMemoryUlong(v20, 4 * v21, Pattern);
                  break;
              }
              v20 = (ULONG *)((char *)v20 + a4);
            }
            while ( v22 );
            v19 = v39;
          }
          v15 = v38;
        }
        v7 = a4;
        if ( v36 != -1 )
        {
          v29 = v40;
          for ( j = (ULONG *)&v19[4 * v15]; v29; v29 = (struct _RECTL *)((char *)v29 - 1) )
          {
            *j = Pattern & ~v36 | v36 & *j;
            j = (ULONG *)((char *)j + a4);
          }
        }
      }
      p_bottom = v35 + 4;
      --a2;
      v35 += 4;
    }
    while ( a2 );
  }
}
