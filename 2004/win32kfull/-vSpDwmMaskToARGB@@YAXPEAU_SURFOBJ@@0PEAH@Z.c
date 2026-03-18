/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C026FB88
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026F604 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *lDelta, int *a3)
{
  __int64 cx; // rcx
  struct _SURFOBJ *v5; // rbx
  _BYTE *v6; // r8
  char *pvScan0; // r11
  LONG v8; // r9d
  char *v9; // r10
  int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // r15
  __int32 *v13; // rdx
  __int64 v14; // r12
  __int32 *v15; // rax
  __int32 v16; // ecx
  char *v17; // r11
  unsigned int *v18; // rdx
  _BYTE *v19; // r10
  __int64 v20; // r12
  unsigned int *v21; // r8
  signed __int64 v22; // r9
  __int64 v23; // r15
  unsigned int *v24; // rax
  __int32 v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 i; // rax
  __m128i si128; // [rsp+8h] [rbp-50h]

  cx = a1->sizlBitmap.cx;
  v5 = lDelta;
  v6 = 0LL;
  LODWORD(lDelta) = a1->lDelta;
  pvScan0 = (char *)a1->pvScan0;
  v8 = a1->sizlBitmap.cy >> 1;
  v9 = &pvScan0[v8 * (int)lDelta];
  if ( v5 )
    v6 = v5->pvScan0;
  v10 = 0;
  v11 = cx;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  if ( v8 <= 0 )
    goto LABEL_15;
  v12 = (unsigned int)v8;
  do
  {
    if ( v11 > 0 )
    {
      v13 = (__int32 *)v9;
      v14 = v11;
      do
      {
        if ( v6 )
          v15 = (__int32 *)((char *)v13 + v6 - v9);
        else
          v15 = v13;
        v16 = si128.m128i_i32[2 * (*(__int32 *)((char *)v13 + pvScan0 - v9) & 1) + (*v15 & 1)];
        *v13++ = v16;
        v10 |= v16 == -1;
        --v14;
      }
      while ( v14 );
    }
    if ( v6 )
      v6 += v5->lDelta;
    lDelta = (struct _SURFOBJ *)a1->lDelta;
    pvScan0 = &pvScan0[(_QWORD)lDelta];
    v9 = &v9[(_QWORD)lDelta];
    --v12;
  }
  while ( v12 );
  if ( !v10 )
  {
LABEL_15:
    v17 = (char *)a1->pvScan0;
    v18 = (unsigned int *)&v17[v8 * (int)lDelta];
    if ( v5 )
    {
      v19 = v5->pvScan0;
      if ( v8 > 0 )
      {
        v20 = (unsigned int)v8;
        while ( v11 <= 0 )
        {
LABEL_27:
          v19 += v5->lDelta;
          v26 = a1->lDelta;
          v17 += v26;
          v18 = (unsigned int *)((char *)v18 + v26);
          if ( !--v20 )
            goto LABEL_37;
        }
        v21 = v18;
        v22 = v19 - (_BYTE *)v18;
        v23 = v11;
        while ( 1 )
        {
          v24 = (unsigned int *)((char *)v21 + v22);
          if ( !v19 )
            v24 = v21;
          v25 = si128.m128i_i32[2 * (*(_DWORD *)&v17[(char *)v21 - (char *)v18] & 1) + (*v24 & 1)];
          switch ( v25 )
          {
            case -16777216:
              goto LABEL_25;
            case 0:
              *v21 = 0;
              break;
            case 16777215:
LABEL_25:
              *v21 = *(unsigned int *)((char *)v21 + v22) | 0xFF000000;
              break;
          }
          ++v21;
          if ( !--v23 )
            goto LABEL_27;
        }
      }
    }
    else if ( v8 > 0 )
    {
      v27 = (unsigned int)v8;
      do
      {
        for ( i = 0LL; i < v11; ++i )
        {
          if ( v18[i] == 0xFFFFFF )
            v18[i] = -1;
        }
        v18 = (unsigned int *)((char *)v18 + a1->lDelta);
        --v27;
      }
      while ( v27 );
    }
  }
LABEL_37:
  *a3 = v10;
}
