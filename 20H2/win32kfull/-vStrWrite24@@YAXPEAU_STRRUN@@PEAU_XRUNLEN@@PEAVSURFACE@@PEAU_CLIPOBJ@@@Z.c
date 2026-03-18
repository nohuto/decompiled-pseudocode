/*
 * XREFs of ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C012F800
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C008BBC0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C008BC44 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

void __fastcall vStrWrite24(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct SURFACE *v5; // rbx
  struct _XRUNLEN *v6; // r15
  struct _XRUNLEN *v7; // rdi
  __int64 v9; // r14
  __int64 v11; // rdx
  unsigned int v12; // r10d
  _WORD *v13; // r9
  _WORD *v14; // r8
  _WORD *v15; // rcx
  __int64 v16; // rdx
  __int16 v17; // ax
  int v18; // edi
  char *v19; // rbx
  bool v20; // zf
  LONG v21; // edx
  unsigned __int64 v22; // xmm0_8
  unsigned __int64 v23; // rbp
  LONG left; // r12d
  LONG v25; // r8d
  __int64 v26; // rcx
  int v27; // ebp
  __int64 i; // r13
  int v29; // r8d
  int v30; // eax
  int v31; // edx
  LONG v32; // r10d
  LONG v33; // ecx
  int v34; // r11d
  _WORD *v35; // r9
  _WORD *v36; // rdx
  int v37; // r10d
  __int64 v38; // r8
  int *v39; // rcx
  __int16 v40; // ax
  size_t v41; // rsi
  __int64 v42; // rdi
  char *v43; // rbx
  LONG v44; // r13d
  int v45; // esi
  LONG right; // ecx
  LONG v47; // edx
  struct _XRUNLEN *v48; // r14
  __int64 v49; // r15
  __int64 v50; // rbx
  int v51; // r8d
  __int64 v52; // rdi
  int v53; // ebp
  int *v54; // rsi
  LONG v55; // [rsp+30h] [rbp-68h]
  __int64 j; // [rsp+38h] [rbp-60h]
  int v57; // [rsp+38h] [rbp-60h]
  struct _XRUNLEN *v58; // [rsp+48h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = a3;
    v6 = (struct _STRRUN *)((char *)a1 + 8);
    v58 = (struct _STRRUN *)((char *)a1 + 8);
    v7 = a2;
    if ( a4 )
    {
      v20 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v20 )
      {
        v21 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v22 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v23 = HIDWORD(v22);
        if ( v21 < SHIDWORD(v22) )
        {
          left = rclBounds.left;
          v25 = v21 + *((_DWORD *)a1 + 1);
          v26 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v25 > rclBounds.top )
          {
            if ( v21 >= rclBounds.top )
              LODWORD(v26) = v21;
            if ( v25 < SHIDWORD(v22) )
              LODWORD(v23) = v25;
            v27 = v23 - v26;
            for ( i = *((_QWORD *)v5 + 10) + (int)v26 * *((_DWORD *)v5 + 22);
                  v6 != v7;
                  v6 = (struct _XRUNLEN *)((char *)v6 + 4 * v30 + 8) )
            {
              v29 = *(_DWORD *)v6;
              v30 = *((_DWORD *)v6 + 1);
              v31 = v30 + *(_DWORD *)v6;
              if ( v31 >= left )
              {
                if ( v29 >= (int)v22 )
                  return;
                v32 = left;
                v33 = v22;
                if ( v29 >= left )
                  v32 = *(_DWORD *)v6;
                if ( v31 < (int)v22 )
                  v33 = v30 + *(_DWORD *)v6;
                v34 = v33 - v32;
                v35 = (_WORD *)(i + 2LL * v32 + v32);
                v36 = v35;
                if ( v32 < v33 )
                {
                  v37 = v32 - v29;
                  v38 = v34;
                  v39 = (int *)((char *)v6 + 4 * v37 + 8);
                  do
                  {
                    v40 = *(_WORD *)v39++;
                    *v36 = v40;
                    v36 = (_WORD *)((char *)v36 + 3);
                    *((_BYTE *)v36 - 1) = *((_BYTE *)v39 - 2);
                    --v38;
                  }
                  while ( v38 );
                }
                if ( v27 > 1 )
                {
                  v41 = 3 * v34;
                  v42 = (unsigned int)(v27 - 1);
                  do
                  {
                    v43 = (char *)v35 + *((int *)a3 + 22);
                    memmove(v43, v35, v41);
                    v35 = v43;
                    --v42;
                  }
                  while ( v42 );
                  left = rclBounds.left;
                  v7 = a2;
                }
                v30 = *((_DWORD *)v6 + 1);
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v44 = *(_DWORD *)a1;
        v45 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        v55 = v44;
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v44);
        if ( v45 )
        {
          right = rclBounds.right;
          v47 = rclBounds.left;
          do
          {
            v57 = --v45;
            if ( v44 >= rclBounds.top && v44 < rclBounds.bottom && v6 != v7 )
            {
              v48 = v6;
              v49 = *((_QWORD *)v5 + 10) + v44 * *((_DWORD *)v5 + 22);
              do
              {
                v50 = *(int *)v48;
                v51 = *((_DWORD *)v48 + 1);
                v52 = v50 + v49 + 2 * v50;
                v53 = v51 + v50;
                if ( (int)v50 < v51 + (int)v50 )
                {
                  v54 = (int *)((char *)v48 + 8);
                  do
                  {
                    if ( (int)v50 < v47 || (int)v50 >= right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v50);
                      v47 = rclBounds.left;
                      right = rclBounds.right;
                    }
                    if ( (int)v50 >= v47 && (int)v50 < right )
                    {
                      *(_WORD *)v52 = *(_WORD *)v54;
                      *(_BYTE *)(v52 + 2) = *((_BYTE *)v54 + 2);
                    }
                    v52 += 3LL;
                    ++v54;
                    LODWORD(v50) = v50 + 1;
                  }
                  while ( (int)v50 < v53 );
                  v51 = *((_DWORD *)v48 + 1);
                }
                v48 = (struct _XRUNLEN *)((char *)v48 + 4 * v51 + 8);
              }
              while ( v48 != a2 );
              v6 = v58;
              v44 = v55;
              v5 = a3;
              v7 = a2;
              v45 = v57;
            }
            v55 = ++v44;
            if ( v44 < rclBounds.top || v44 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v44);
              right = rclBounds.right;
              v47 = rclBounds.left;
            }
          }
          while ( v45 );
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( j = v9; v6 != a2; v6 = (struct _XRUNLEN *)((char *)v6 + 4 * *((int *)v6 + 1) + 8) )
      {
        v11 = *(int *)v6;
        v12 = *((_DWORD *)v6 + 1);
        v13 = (_WORD *)(v11 + v9 + 2 * v11);
        v14 = v13;
        if ( (int)v11 < (int)(v12 + v11) )
        {
          v15 = (_WORD *)((char *)v6 + 8);
          v16 = v12;
          do
          {
            v17 = *v15;
            v15 += 2;
            *v14 = v17;
            v14 = (_WORD *)((char *)v14 + 3);
            *((_BYTE *)v14 - 1) = *((_BYTE *)v15 - 2);
            --v16;
          }
          while ( v16 );
        }
        v18 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v19 = (char *)v13 + *((int *)a3 + 22);
            memmove(v19, v13, 3 * *((_DWORD *)v6 + 1));
            ++v18;
            v13 = v19;
          }
          while ( v18 < *((_DWORD *)a1 + 1) );
          v9 = j;
        }
      }
    }
  }
}
