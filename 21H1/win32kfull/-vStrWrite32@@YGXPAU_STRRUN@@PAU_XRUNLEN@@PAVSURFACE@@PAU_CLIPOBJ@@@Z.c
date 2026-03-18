/*
 * XREFs of ?vStrWrite32@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0xC5B30
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _STRRUN *v4; // edx
  struct _XRUNLEN *v5; // ebx
  int v6; // edi
  char *v7; // esi
  int v8; // edx
  int *v9; // ecx
  int v10; // eax
  char *v11; // ecx
  char *v12; // esi
  bool v13; // zf
  LONG top; // eax
  LONG bottom; // edi
  int v16; // edi
  int v17; // esi
  LONG v18; // eax
  int v19; // ecx
  LONG right; // edx
  LONG left; // ecx
  int v22; // esi
  _DWORD *v23; // edx
  char *v24; // ecx
  int v25; // eax
  int v26; // ebx
  char *v27; // eax
  char *v28; // esi
  XCLIPOBJ *v29; // ecx
  LONG v30; // esi
  int v31; // edi
  int v32; // ecx
  LONG *v33; // eax
  LONG v34; // edi
  LONG v35; // edx
  LONG v36; // esi
  _DWORD *v37; // ecx
  int v38; // [esp+10h] [ebp-30h]
  LONG v39; // [esp+10h] [ebp-30h]
  struct _XRUNLEN *v40; // [esp+14h] [ebp-2Ch]
  int v41; // [esp+14h] [ebp-2Ch]
  signed int MaxCount; // [esp+18h] [ebp-28h]
  _DWORD *MaxCounta; // [esp+18h] [ebp-28h]
  char *Src; // [esp+1Ch] [ebp-24h]
  _DWORD *Srca; // [esp+1Ch] [ebp-24h]
  LONG *Srcb; // [esp+1Ch] [ebp-24h]
  int v47; // [esp+20h] [ebp-20h]
  _DWORD *v48; // [esp+20h] [ebp-20h]
  int v49; // [esp+24h] [ebp-1Ch]
  int v50; // [esp+28h] [ebp-18h]
  int v51; // [esp+2Ch] [ebp-14h]
  struct _RECTL rclBounds; // [esp+30h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = a1;
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v40 = (struct _STRRUN *)((char *)a1 + 8);
    if ( a4 )
    {
      v13 = a4->iDComplexity == 1;
      memset(&rclBounds, 0, sizeof(rclBounds));
      if ( v13 )
      {
        top = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        if ( top < rclBounds.bottom )
        {
          bottom = top + *((_DWORD *)a1 + 1);
          if ( bottom > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( bottom >= rclBounds.bottom )
              bottom = rclBounds.bottom;
            v16 = bottom - top;
            v49 = v16;
            v17 = *((_DWORD *)a3 + 12) + top * *((_DWORD *)a3 + 13);
            v47 = v17;
            while ( v5 != a2 )
            {
              v18 = *(_DWORD *)v5;
              v19 = *((_DWORD *)v5 + 1);
              right = v19 + *(_DWORD *)v5;
              if ( right >= rclBounds.left )
              {
                if ( v18 >= rclBounds.right )
                  return;
                left = *(_DWORD *)v5;
                if ( v18 < rclBounds.left )
                  left = rclBounds.left;
                if ( right >= rclBounds.right )
                  right = rclBounds.right;
                v38 = right - left;
                Srca = (_DWORD *)(v17 + 4 * left);
                v5 = v40;
                if ( left < right )
                {
                  v22 = right - left;
                  v23 = Srca;
                  v24 = (char *)v40 + 4 * (left - v18) + 8;
                  do
                  {
                    v25 = *(_DWORD *)v24;
                    v24 += 4;
                    *v23++ = v25;
                    --v22;
                  }
                  while ( v22 );
                  v17 = v47;
                }
                if ( v16 > 1 )
                {
                  v26 = v16 - 1;
                  v27 = (char *)Srca;
                  do
                  {
                    v28 = &v27[*((_DWORD *)a3 + 13)];
                    memcpy(v28, v27, 4 * v38);
                    v27 = v28;
                    --v26;
                  }
                  while ( v26 );
                  v5 = v40;
                  v16 = v49;
                  v17 = v47;
                }
                v19 = *((_DWORD *)v5 + 1);
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v19 + 8);
              v40 = v5;
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        rclBounds.left = 0x7FFFFFFF;
        rclBounds.top = 0x7FFFFFFF;
        rclBounds.right = 0x80000000;
        rclBounds.bottom = 0x80000000;
        v30 = *(_DWORD *)a1;
        v31 = *((_DWORD *)a1 + 1);
        v39 = *(_DWORD *)a1;
LABEL_61:
        XCLIPOBJ::vFindScan(v29, &rclBounds, v30);
        while ( v31 )
        {
          v51 = --v31;
          if ( v30 >= rclBounds.top && v30 < rclBounds.bottom )
          {
            v32 = *((_DWORD *)a3 + 12) + v30 * *((_DWORD *)a3 + 13);
            v50 = v32;
            if ( v5 != a2 )
            {
              v33 = (LONG *)v5;
              Srcb = (LONG *)v5;
              do
              {
                v34 = *v33;
                v35 = v33[1];
                MaxCounta = (_DWORD *)(v32 + 4 * *v33);
                v36 = v35 + *v33;
                if ( *v33 < v36 )
                {
                  v37 = v33 + 2;
                  v48 = v33 + 2;
                  do
                  {
                    if ( v34 < rclBounds.left || v34 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v34, (int)v37);
                      v37 = v48;
                    }
                    if ( v34 >= rclBounds.left && v34 < rclBounds.right )
                      *MaxCounta = *v37;
                    ++MaxCounta;
                    ++v37;
                    ++v34;
                    v48 = v37;
                  }
                  while ( v34 < v36 );
                  v33 = Srcb;
                  v32 = v50;
                  v35 = Srcb[1];
                }
                v33 += v35 + 2;
                Srcb = v33;
              }
              while ( v33 != (LONG *)a2 );
              v5 = (struct _STRRUN *)((char *)a1 + 8);
              v30 = v39;
              v31 = v51;
            }
          }
          v39 = ++v30;
          if ( v30 < rclBounds.top || v30 >= rclBounds.bottom )
          {
            v29 = (XCLIPOBJ *)a4;
            goto LABEL_61;
          }
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)a3 + 12) + *(_DWORD *)a1 * *((_DWORD *)a3 + 13);
      v41 = v6;
      while ( v5 != a2 )
      {
        v7 = (char *)(v6 + 4 * *(_DWORD *)v5);
        Src = v7;
        if ( *(_DWORD *)v5 < *(_DWORD *)v5 + *((_DWORD *)v5 + 1) )
        {
          v8 = *((_DWORD *)v5 + 1);
          v9 = (int *)((char *)v5 + 8);
          do
          {
            v10 = *v9++;
            *(_DWORD *)v7 = v10;
            v7 += 4;
            --v8;
          }
          while ( v8 );
          v4 = a1;
        }
        MaxCount = 1;
        if ( *((int *)v4 + 1) > 1 )
        {
          v11 = Src;
          do
          {
            v12 = &v11[*((_DWORD *)a3 + 13)];
            memcpy(v12, v11, 4 * *((_DWORD *)v5 + 1));
            v4 = a1;
            v11 = v12;
            ++MaxCount;
          }
          while ( MaxCount < *((_DWORD *)a1 + 1) );
          v6 = v41;
        }
        v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((_DWORD *)v5 + 1) + 8);
      }
    }
  }
}
