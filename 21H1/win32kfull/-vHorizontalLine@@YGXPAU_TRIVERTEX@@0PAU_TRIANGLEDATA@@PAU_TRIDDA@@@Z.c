/*
 * XREFs of ?vHorizontalLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@PAU_TRIDDA@@@Z @ 0x1EAEAE
 * Callers:
 *     ?vCalculateLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@@Z @ 0x1EA921 (-vCalculateLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge vHorizontalLine(
        int a1@<edx>,
        int a2@<ecx>,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIANGLEDATA *a5,
        struct _TRIDDA *a6)
{
  LONG y; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  LONG v16; // eax
  int v17; // eax
  struct _TRIVERTEX *v19; // [esp+1Ch] [ebp+8h]
  struct _TRIVERTEX *v20; // [esp+20h] [ebp+Ch]

  y = a4->y;
  v10 = y - a3[7].x;
  if ( y >= a3->y && y < *(_DWORD *)&a3->Blue )
  {
    v19 = *(struct _TRIVERTEX **)a2;
    v11 = 40 * v10;
    v20 = (struct _TRIVERTEX *)(40 * (v10 + 4));
    if ( (int)v19 > *(_DWORD *)a1 )
    {
      *(LONG *)((char *)&a3->x + (_DWORD)v20) = *(_DWORD *)a1;
      *(_DWORD *)((char *)&a3[10].Blue + v11) = *(unsigned __int16 *)(a1 + 8) << 16;
      *(_DWORD *)((char *)&a3[10].Red + v11) = 0;
      *(LONG *)((char *)&a3[11].y + v11) = *(unsigned __int16 *)(a1 + 10) << 16;
      *(LONG *)((char *)&a3[11].x + v11) = 0;
      *(_DWORD *)((char *)&a3[11].Blue + v11) = *(unsigned __int16 *)(a1 + 12) << 16;
      *(_DWORD *)((char *)&a3[11].Red + v11) = 0;
      v17 = *(unsigned __int16 *)(a1 + 14);
      *(LONG *)((char *)&a3[12].x + v11) = 0;
      *(LONG *)((char *)&a3[12].y + v11) = v17 << 16;
      v16 = *(_DWORD *)a2;
    }
    else
    {
      *(LONG *)((char *)&a3->x + (_DWORD)v20) = (LONG)v19;
      v12 = *(unsigned __int16 *)(a2 + 8);
      *(_DWORD *)((char *)&a3[10].Red + v11) = 0;
      *(_DWORD *)((char *)&a3[10].Blue + v11) = v12 << 16;
      v13 = *(unsigned __int16 *)(a2 + 10);
      *(LONG *)((char *)&a3[11].x + v11) = 0;
      *(LONG *)((char *)&a3[11].y + v11) = v13 << 16;
      v14 = *(unsigned __int16 *)(a2 + 12);
      *(_DWORD *)((char *)&a3[11].Red + v11) = 0;
      *(_DWORD *)((char *)&a3[11].Blue + v11) = v14 << 16;
      v15 = *(unsigned __int16 *)(a2 + 14);
      *(LONG *)((char *)&a3[12].x + v11) = 0;
      *(LONG *)((char *)&a3[12].y + v11) = v15 << 16;
      v16 = *(_DWORD *)a1;
    }
    *(LONG *)((char *)&a3[10].y + v11) = v16;
  }
}
