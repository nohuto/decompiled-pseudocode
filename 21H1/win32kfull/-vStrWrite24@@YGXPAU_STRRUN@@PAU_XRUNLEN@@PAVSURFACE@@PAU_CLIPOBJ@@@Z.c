/*
 * XREFs of ?vStrWrite24@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22B437
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vStrWrite24(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _STRRUN *v4; // edx
  struct _XRUNLEN *v5; // ebx
  int v6; // edi
  _WORD *v7; // esi
  int v8; // edx
  _WORD *v9; // ecx
  __int16 v10; // ax
  char *v11; // ecx
  char *v12; // esi
  bool v13; // zf
  LONG top; // eax
  LONG bottom; // edi
  int v16; // edx
  LONG v17; // eax
  int v18; // ecx
  LONG right; // esi
  LONG left; // ecx
  int v21; // edx
  _WORD *v22; // esi
  char *v23; // ecx
  __int16 v24; // ax
  char *v25; // eax
  int v26; // edi
  char *v27; // esi
  XCLIPOBJ *v28; // ecx
  LONG v29; // esi
  int v30; // edi
  int v31; // ecx
  LONG *v32; // eax
  LONG v33; // edi
  int v34; // edx
  int v35; // ecx
  LONG v36; // edx
  struct _XRUNLEN *v37; // [esp+Ch] [ebp-2Ch]
  int v38; // [esp+Ch] [ebp-2Ch]
  int v39; // [esp+10h] [ebp-28h]
  LONG *v40; // [esp+10h] [ebp-28h]
  void *v41; // [esp+14h] [ebp-24h]
  _WORD *v42; // [esp+14h] [ebp-24h]
  char *v43; // [esp+14h] [ebp-24h]
  char *Src; // [esp+18h] [ebp-20h]
  int Srca; // [esp+18h] [ebp-20h]
  char *Srcc; // [esp+18h] [ebp-20h]
  void *Srcb; // [esp+18h] [ebp-20h]
  int v48; // [esp+1Ch] [ebp-1Ch]
  int v49; // [esp+1Ch] [ebp-1Ch]
  int v50; // [esp+20h] [ebp-18h]
  int v51; // [esp+24h] [ebp-14h]
  struct _RECTL rclBounds; // [esp+28h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = a1;
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v37 = (struct _STRRUN *)((char *)a1 + 8);
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
            Srca = bottom - top;
            v16 = *((_DWORD *)a3 + 12) + top * *((_DWORD *)a3 + 13);
            v48 = v16;
            while ( v5 != a2 )
            {
              v17 = *(_DWORD *)v5;
              v18 = *((_DWORD *)v5 + 1);
              right = v18 + *(_DWORD *)v5;
              if ( right >= rclBounds.left )
              {
                if ( v17 >= rclBounds.right )
                  return;
                left = *(_DWORD *)v5;
                if ( v17 < rclBounds.left )
                  left = rclBounds.left;
                if ( right >= rclBounds.right )
                  right = rclBounds.right;
                v39 = right - left;
                v42 = (_WORD *)(v16 + 3 * left);
                if ( left < right )
                {
                  v21 = right - left;
                  v22 = v42;
                  v23 = (char *)v5 + 4 * (left - v17) + 8;
                  do
                  {
                    v24 = *(_WORD *)v23;
                    v23 += 4;
                    *v22 = v24;
                    v22 = (_WORD *)((char *)v22 + 3);
                    *((_BYTE *)v22 - 1) = *(v23 - 2);
                    --v21;
                  }
                  while ( v21 );
                  v16 = v48;
                }
                if ( Srca > 1 )
                {
                  v25 = (char *)v42;
                  v26 = Srca - 1;
                  do
                  {
                    v27 = &v25[*((_DWORD *)a3 + 13)];
                    memcpy(v27, v25, 3 * v39);
                    v25 = v27;
                    --v26;
                  }
                  while ( v26 );
                  v5 = v37;
                  v16 = v48;
                }
                v18 = *((_DWORD *)v5 + 1);
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v18 + 8);
              v37 = v5;
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
        v29 = *(_DWORD *)a1;
        v30 = *((_DWORD *)a1 + 1);
LABEL_62:
        XCLIPOBJ::vFindScan(v28, &rclBounds, v29);
        while ( v30 )
        {
          v51 = --v30;
          if ( v29 >= rclBounds.top && v29 < rclBounds.bottom )
          {
            v31 = *((_DWORD *)a3 + 12) + v29 * *((_DWORD *)a3 + 13);
            v50 = v31;
            if ( v5 != a2 )
            {
              v32 = (LONG *)v5;
              v40 = (LONG *)v5;
              do
              {
                v33 = *v32;
                Srcc = (char *)v32[1];
                v43 = &Srcc[*v32];
                v34 = v31 + 3 * *v32;
                v49 = v34;
                if ( v33 >= (int)&Srcc[v33] )
                {
                  v36 = v32[1];
                }
                else
                {
                  v35 = (int)(v32 + 2);
                  Srcb = v32 + 2;
                  do
                  {
                    if ( v33 < rclBounds.left || v33 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v33, v35);
                      v34 = v49;
                      v35 = (int)Srcb;
                    }
                    if ( v33 >= rclBounds.left && v33 < rclBounds.right )
                    {
                      *(_WORD *)v34 = *(_WORD *)v35;
                      *(_BYTE *)(v34 + 2) = *(_BYTE *)(v35 + 2);
                    }
                    v34 += 3;
                    v35 += 4;
                    ++v33;
                    v49 = v34;
                    Srcb = (void *)v35;
                  }
                  while ( v33 < (int)v43 );
                  v32 = v40;
                  v31 = v50;
                  v36 = v40[1];
                }
                v32 += v36 + 2;
                v40 = v32;
              }
              while ( v32 != (LONG *)a2 );
              v5 = (struct _STRRUN *)((char *)a1 + 8);
              v30 = v51;
            }
          }
          if ( ++v29 < rclBounds.top || v29 >= rclBounds.bottom )
          {
            v28 = (XCLIPOBJ *)a4;
            goto LABEL_62;
          }
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)a3 + 12) + *(_DWORD *)a1 * *((_DWORD *)a3 + 13);
      v41 = (void *)v6;
      while ( v5 != a2 )
      {
        v7 = (_WORD *)(v6 + 3 * *(_DWORD *)v5);
        Src = (char *)v7;
        if ( *(_DWORD *)v5 < *(_DWORD *)v5 + *((_DWORD *)v5 + 1) )
        {
          v8 = *((_DWORD *)v5 + 1);
          v9 = (_WORD *)((char *)v5 + 8);
          do
          {
            v10 = *v9;
            v9 += 2;
            *v7 = v10;
            v7 = (_WORD *)((char *)v7 + 3);
            *((_BYTE *)v7 - 1) = *((_BYTE *)v9 - 2);
            --v8;
          }
          while ( v8 );
          v4 = a1;
        }
        v38 = 1;
        if ( *((int *)v4 + 1) > 1 )
        {
          v11 = Src;
          do
          {
            v12 = &v11[*((_DWORD *)a3 + 13)];
            memcpy(v12, v11, 3 * *((_DWORD *)v5 + 1));
            v4 = a1;
            v11 = v12;
            ++v38;
          }
          while ( v38 < *((_DWORD *)a1 + 1) );
          v6 = (int)v41;
        }
        v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((_DWORD *)v5 + 1) + 8);
      }
    }
  }
}
