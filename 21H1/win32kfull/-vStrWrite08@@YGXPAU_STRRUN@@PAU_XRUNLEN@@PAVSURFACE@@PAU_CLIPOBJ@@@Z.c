/*
 * XREFs of ?vStrWrite08@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22ADDE
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vStrWrite08(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _STRRUN *v4; // edx
  struct _XRUNLEN *v5; // ebx
  int v6; // esi
  _BYTE *v7; // edx
  char *v8; // ecx
  int v9; // esi
  char v10; // al
  int v11; // ecx
  char *v12; // esi
  bool v13; // zf
  LONG top; // eax
  LONG bottom; // esi
  int v16; // edi
  LONG v17; // eax
  int v18; // ecx
  LONG right; // edx
  LONG left; // ecx
  int v21; // edi
  char *v22; // edx
  char *v23; // ecx
  char v24; // al
  int v25; // ebx
  char *v26; // edi
  int v27; // eax
  XCLIPOBJ *v28; // ecx
  LONG v29; // esi
  int v30; // edi
  int v31; // ecx
  struct _XRUNLEN *v32; // eax
  LONG v33; // edi
  int v34; // edx
  LONG v35; // esi
  _BYTE *v36; // ecx
  signed int MaxCount; // [esp+10h] [ebp-30h]
  size_t MaxCounta; // [esp+10h] [ebp-30h]
  _BYTE *MaxCountb; // [esp+10h] [ebp-30h]
  struct _XRUNLEN *Src; // [esp+14h] [ebp-2Ch]
  char *Srca; // [esp+14h] [ebp-2Ch]
  void *v42; // [esp+18h] [ebp-28h]
  char *v43; // [esp+18h] [ebp-28h]
  void *v44; // [esp+18h] [ebp-28h]
  int v45; // [esp+1Ch] [ebp-24h]
  struct _XRUNLEN *v46; // [esp+1Ch] [ebp-24h]
  int v47; // [esp+20h] [ebp-20h]
  _BYTE *v48; // [esp+20h] [ebp-20h]
  int v49; // [esp+28h] [ebp-18h]
  int v50; // [esp+2Ch] [ebp-14h]
  struct _RECTL rclBounds; // [esp+30h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = a1;
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    Src = (struct _STRRUN *)((char *)a1 + 8);
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
            v45 = bottom - top;
            v16 = *((_DWORD *)a3 + 12) + top * *((_DWORD *)a3 + 13);
            v47 = v16;
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
                MaxCounta = right - left;
                v43 = (char *)(left + v16);
                if ( left < right )
                {
                  v21 = right - left;
                  v22 = v43;
                  v23 = (char *)v5 + 4 * (left - v17) + 8;
                  do
                  {
                    v24 = *v23;
                    v23 += 4;
                    *v22++ = v24;
                    --v21;
                  }
                  while ( v21 );
                  v16 = v47;
                }
                if ( v45 > 1 )
                {
                  v25 = v45 - 1;
                  v26 = v43;
                  v27 = *((_DWORD *)a3 + 13);
                  do
                  {
                    memcpy(&v26[v27], v26, MaxCounta);
                    v27 = *((_DWORD *)a3 + 13);
                    v26 += v27;
                    --v25;
                  }
                  while ( v25 );
                  v5 = Src;
                  v16 = v47;
                }
                v18 = *((_DWORD *)v5 + 1);
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v18 + 8);
              Src = v5;
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
        v44 = *(void **)a1;
LABEL_61:
        XCLIPOBJ::vFindScan(v28, &rclBounds, v29);
        while ( v30 )
        {
          v50 = --v30;
          if ( v29 >= rclBounds.top && v29 < rclBounds.bottom )
          {
            v31 = *((_DWORD *)a3 + 12) + v29 * *((_DWORD *)a3 + 13);
            v49 = v31;
            if ( v5 != a2 )
            {
              v32 = v5;
              v46 = v5;
              do
              {
                v33 = *(_DWORD *)v32;
                v34 = *((_DWORD *)v32 + 1);
                MaxCountb = (_BYTE *)(*(_DWORD *)v32 + v31);
                v35 = v34 + *(_DWORD *)v32;
                if ( *(_DWORD *)v32 < v35 )
                {
                  v36 = (char *)v32 + 8;
                  v48 = (char *)v32 + 8;
                  do
                  {
                    if ( v33 < rclBounds.left || v33 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v33, (int)v36);
                      v36 = v48;
                    }
                    if ( v33 >= rclBounds.left && v33 < rclBounds.right )
                      *MaxCountb = *v36;
                    ++MaxCountb;
                    v36 += 4;
                    ++v33;
                    v48 = v36;
                  }
                  while ( v33 < v35 );
                  v32 = v46;
                  v31 = v49;
                  v34 = *((_DWORD *)v46 + 1);
                }
                v32 = (struct _XRUNLEN *)((char *)v32 + 4 * v34 + 8);
                v46 = v32;
              }
              while ( v32 != a2 );
              v5 = (struct _STRRUN *)((char *)a1 + 8);
              v29 = (LONG)v44;
              v30 = v50;
            }
          }
          v44 = (void *)++v29;
          if ( v29 < rclBounds.top || v29 >= rclBounds.bottom )
          {
            v28 = (XCLIPOBJ *)a4;
            goto LABEL_61;
          }
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)a3 + 12) + *(_DWORD *)a1 * *((_DWORD *)a3 + 13);
      v42 = (void *)v6;
      while ( v5 != a2 )
      {
        Srca = (char *)(*(_DWORD *)v5 + v6);
        if ( *(_DWORD *)v5 < *(_DWORD *)v5 + *((_DWORD *)v5 + 1) )
        {
          v7 = (_BYTE *)(*(_DWORD *)v5 + v6);
          v8 = (char *)v5 + 8;
          v9 = *((_DWORD *)v5 + 1);
          do
          {
            v10 = *v8;
            v8 += 4;
            *v7++ = v10;
            --v9;
          }
          while ( v9 );
          v4 = a1;
          v6 = (int)v42;
        }
        MaxCount = 1;
        if ( *((int *)v4 + 1) > 1 )
        {
          v11 = *((_DWORD *)a3 + 13);
          v12 = Srca;
          do
          {
            memcpy(&v12[v11], v12, *((_DWORD *)v5 + 1));
            v4 = a1;
            v11 = *((_DWORD *)a3 + 13);
            v12 += v11;
            ++MaxCount;
          }
          while ( MaxCount < *((_DWORD *)a1 + 1) );
          v6 = (int)v42;
        }
        v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((_DWORD *)v5 + 1) + 8);
      }
    }
  }
}
