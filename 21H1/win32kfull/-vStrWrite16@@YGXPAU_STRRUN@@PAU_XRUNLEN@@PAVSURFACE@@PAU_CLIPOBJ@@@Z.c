/*
 * XREFs of ?vStrWrite16@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22B106
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vStrWrite16(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _STRRUN *v4; // edx
  struct _XRUNLEN *v5; // ebx
  int v6; // edi
  char *v7; // esi
  int v8; // edx
  __int16 *v9; // ecx
  __int16 v10; // ax
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
  _WORD *v23; // edx
  char *v24; // ecx
  __int16 v25; // ax
  int v26; // ebx
  size_t v27; // ecx
  char *v28; // eax
  char *v29; // esi
  XCLIPOBJ *v30; // ecx
  LONG v31; // esi
  int v32; // edi
  int v33; // ecx
  struct _XRUNLEN *v34; // eax
  LONG v35; // edi
  int v36; // edx
  LONG v37; // esi
  _WORD *v38; // ecx
  int v39; // [esp+10h] [ebp-30h]
  LONG v40; // [esp+10h] [ebp-30h]
  struct _XRUNLEN *v41; // [esp+14h] [ebp-2Ch]
  int v42; // [esp+14h] [ebp-2Ch]
  int v43; // [esp+18h] [ebp-28h]
  _WORD *v44; // [esp+18h] [ebp-28h]
  char *Src; // [esp+1Ch] [ebp-24h]
  _WORD *Srca; // [esp+1Ch] [ebp-24h]
  struct _XRUNLEN *Srcb; // [esp+1Ch] [ebp-24h]
  int v48; // [esp+20h] [ebp-20h]
  _WORD *v49; // [esp+20h] [ebp-20h]
  int v50; // [esp+24h] [ebp-1Ch]
  int v51; // [esp+28h] [ebp-18h]
  int v52; // [esp+2Ch] [ebp-14h]
  struct _RECTL rclBounds; // [esp+30h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = a1;
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v41 = (struct _STRRUN *)((char *)a1 + 8);
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
            v50 = v16;
            v17 = *((_DWORD *)a3 + 12) + top * *((_DWORD *)a3 + 13);
            v48 = v17;
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
                v39 = right - left;
                Srca = (_WORD *)(v17 + 2 * left);
                v5 = v41;
                if ( left < right )
                {
                  v22 = right - left;
                  v23 = Srca;
                  v24 = (char *)v41 + 4 * (left - v18) + 8;
                  do
                  {
                    v25 = *(_WORD *)v24;
                    v24 += 4;
                    *v23++ = v25;
                    --v22;
                  }
                  while ( v22 );
                  v17 = v48;
                }
                if ( v16 > 1 )
                {
                  v26 = v16 - 1;
                  v27 = 2 * v39;
                  v28 = (char *)Srca;
                  do
                  {
                    v29 = &v28[*((_DWORD *)a3 + 13)];
                    memcpy(v29, v28, v27);
                    v27 = 2 * v39;
                    v28 = v29;
                    --v26;
                  }
                  while ( v26 );
                  v5 = v41;
                  v16 = v50;
                  v17 = v48;
                }
                v19 = *((_DWORD *)v5 + 1);
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v19 + 8);
              v41 = v5;
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
        v31 = *(_DWORD *)a1;
        v32 = *((_DWORD *)a1 + 1);
        v40 = *(_DWORD *)a1;
LABEL_61:
        XCLIPOBJ::vFindScan(v30, &rclBounds, v31);
        while ( v32 )
        {
          v52 = --v32;
          if ( v31 >= rclBounds.top && v31 < rclBounds.bottom )
          {
            v33 = *((_DWORD *)a3 + 12) + v31 * *((_DWORD *)a3 + 13);
            v51 = v33;
            if ( v5 != a2 )
            {
              v34 = v5;
              Srcb = v5;
              do
              {
                v35 = *(_DWORD *)v34;
                v36 = *((_DWORD *)v34 + 1);
                v44 = (_WORD *)(v33 + 2 * *(_DWORD *)v34);
                v37 = v36 + *(_DWORD *)v34;
                if ( *(_DWORD *)v34 < v37 )
                {
                  v38 = (_WORD *)((char *)v34 + 8);
                  v49 = (_WORD *)((char *)v34 + 8);
                  do
                  {
                    if ( v35 < rclBounds.left || v35 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v35, (int)v38);
                      v38 = v49;
                    }
                    if ( v35 >= rclBounds.left && v35 < rclBounds.right )
                      *v44 = *v38;
                    ++v44;
                    v38 += 2;
                    ++v35;
                    v49 = v38;
                  }
                  while ( v35 < v37 );
                  v34 = Srcb;
                  v33 = v51;
                  v36 = *((_DWORD *)Srcb + 1);
                }
                v34 = (struct _XRUNLEN *)((char *)v34 + 4 * v36 + 8);
                Srcb = v34;
              }
              while ( v34 != a2 );
              v5 = (struct _STRRUN *)((char *)a1 + 8);
              v31 = v40;
              v32 = v52;
            }
          }
          v40 = ++v31;
          if ( v31 < rclBounds.top || v31 >= rclBounds.bottom )
          {
            v30 = (XCLIPOBJ *)a4;
            goto LABEL_61;
          }
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)a3 + 12) + *(_DWORD *)a1 * *((_DWORD *)a3 + 13);
      v42 = v6;
      while ( v5 != a2 )
      {
        v7 = (char *)(v6 + 2 * *(_DWORD *)v5);
        Src = v7;
        if ( *(_DWORD *)v5 < *(_DWORD *)v5 + *((_DWORD *)v5 + 1) )
        {
          v8 = *((_DWORD *)v5 + 1);
          v9 = (__int16 *)((char *)v5 + 8);
          do
          {
            v10 = *v9;
            v9 += 2;
            *(_WORD *)v7 = v10;
            v7 += 2;
            --v8;
          }
          while ( v8 );
          v4 = a1;
        }
        v43 = 1;
        if ( *((int *)v4 + 1) > 1 )
        {
          v11 = Src;
          do
          {
            v12 = &v11[*((_DWORD *)a3 + 13)];
            memcpy(v12, v11, 2 * *((_DWORD *)v5 + 1));
            v4 = a1;
            v11 = v12;
            ++v43;
          }
          while ( v43 < *((_DWORD *)a1 + 1) );
          v6 = v42;
        }
        v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((_DWORD *)v5 + 1) + 8);
      }
    }
  }
}
