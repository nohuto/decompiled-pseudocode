/*
 * XREFs of ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C2E30
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C008BBC0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C008BC44 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

void __fastcall vStrWrite08(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rbx
  struct SURFACE *v6; // r13
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rdi
  _BYTE *v13; // rdx
  char *v14; // rcx
  char v15; // al
  int v16; // r15d
  __int64 v17; // rax
  bool v18; // zf
  LONG v19; // edx
  unsigned __int64 v20; // xmm0_8
  LONG v21; // r9d
  unsigned __int64 v22; // rdi
  LONG v23; // r8d
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r10
  LONG v27; // ecx
  int v28; // eax
  LONG v29; // r8d
  LONG left; // edx
  LONG v31; // eax
  _BYTE *v32; // rsi
  _BYTE *v33; // r8
  int v34; // r9d
  __int64 v35; // rcx
  __int64 v36; // rdx
  int *v37; // rcx
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // r14
  size_t v41; // r15
  LONG v42; // edi
  int v43; // esi
  __int64 v44; // rcx
  struct _XRUNLEN *v45; // r14
  __int64 v46; // rsi
  int v47; // eax
  _BYTE *v48; // r12
  int v49; // edx
  int *v50; // rcx
  int v51; // [rsp+30h] [rbp-30h]
  int v52; // [rsp+34h] [rbp-2Ch]
  int *v53; // [rsp+38h] [rbp-28h]
  __int64 v54; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  __int64 v57; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      v18 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v18 )
      {
        v19 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v20 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v21 = v20;
        v22 = HIDWORD(v20);
        if ( v19 < SHIDWORD(v20) )
        {
          v23 = v19 + *((_DWORD *)a1 + 1);
          v24 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v23 > rclBounds.top )
          {
            if ( v19 >= rclBounds.top )
              LODWORD(v24) = v19;
            if ( v23 < SHIDWORD(v20) )
              LODWORD(v22) = v23;
            v25 = v22 - v24;
            v26 = *((_QWORD *)v6 + 10) + (int)v24 * *((_DWORD *)v6 + 22);
            v57 = v26;
            while ( v4 != v7 )
            {
              v27 = *(_DWORD *)v4;
              v28 = *((_DWORD *)v4 + 1);
              v29 = v28 + *(_DWORD *)v4;
              if ( v29 >= rclBounds.left )
              {
                if ( v27 >= v21 )
                  return;
                left = rclBounds.left;
                v31 = v21;
                if ( v27 >= rclBounds.left )
                  left = *(_DWORD *)v4;
                if ( v29 < v21 )
                  v31 = v29;
                v32 = (_BYTE *)(v26 + left);
                v33 = v32;
                v34 = v31 - left;
                if ( left < v31 )
                {
                  v35 = left - v27;
                  v36 = v34;
                  v37 = (int *)((char *)v4 + 4 * v35 + 8);
                  do
                  {
                    v38 = *(_BYTE *)v37++;
                    *v33++ = v38;
                    --v36;
                  }
                  while ( v36 );
                }
                if ( v25 > 1 )
                {
                  v39 = *((int *)v6 + 22);
                  v40 = (unsigned int)(v25 - 1);
                  v41 = v34;
                  do
                  {
                    memmove(&v32[v39], v32, v41);
                    v39 = *((int *)v6 + 22);
                    v32 += v39;
                    --v40;
                  }
                  while ( v40 );
                  v26 = v57;
                }
                v28 = *((_DWORD *)v4 + 1);
                v21 = v20;
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v28 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v42 = *(_DWORD *)a1;
        v43 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_57:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
        while ( v43 )
        {
          v52 = --v43;
          if ( v42 >= rclBounds.top && v42 < rclBounds.bottom )
          {
            v44 = *((_QWORD *)v6 + 10) + v42 * *((_DWORD *)v6 + 22);
            v54 = v44;
            if ( v4 != v7 )
            {
              v45 = v4;
              do
              {
                v46 = *(int *)v45;
                v47 = *((_DWORD *)v45 + 1);
                v48 = (_BYTE *)(v44 + v46);
                v49 = v47 + v46;
                v51 = v47 + v46;
                if ( (int)v46 < v47 + (int)v46 )
                {
                  v50 = (int *)((char *)v45 + 8);
                  v53 = (int *)((char *)v45 + 8);
                  do
                  {
                    if ( (int)v46 < rclBounds.left || (int)v46 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v46);
                      v49 = v51;
                      v50 = v53;
                    }
                    if ( (int)v46 >= rclBounds.left && (int)v46 < rclBounds.right )
                      *v48 = *(_BYTE *)v50;
                    ++v50;
                    ++v48;
                    LODWORD(v46) = v46 + 1;
                    v53 = v50;
                  }
                  while ( (int)v46 < v49 );
                  v47 = *((_DWORD *)v45 + 1);
                  v44 = v54;
                }
                v45 = (struct _XRUNLEN *)((char *)v45 + 4 * v47 + 8);
              }
              while ( v45 != a2 );
              v6 = a3;
              v7 = a2;
              v43 = v52;
            }
          }
          if ( ++v42 < rclBounds.top || v42 >= rclBounds.bottom )
            goto LABEL_57;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != v7 )
      {
        v10 = *(int *)v4;
        v11 = *((unsigned int *)v4 + 1);
        v12 = (char *)(v9 + v10);
        v13 = (_BYTE *)(v9 + v10);
        if ( (int)v10 < (int)v11 + (int)v10 )
        {
          v14 = (char *)v4 + 8;
          do
          {
            v15 = *v14;
            v14 += 4;
            *v13++ = v15;
            --v11;
          }
          while ( v11 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          v17 = *((int *)v6 + 22);
          do
          {
            memmove(&v12[v17], v12, *((int *)v4 + 1));
            v17 = *((int *)v6 + 22);
            ++v16;
            v12 += v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
