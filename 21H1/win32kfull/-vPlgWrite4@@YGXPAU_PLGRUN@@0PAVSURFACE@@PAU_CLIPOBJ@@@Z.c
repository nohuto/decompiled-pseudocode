/*
 * XREFs of ?vPlgWrite4@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x245EFB
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z @ 0x24473E (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z.c)
 */

void __stdcall vPlgWrite4(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _PLGRUN *v4; // ebx
  struct SURFACE *v5; // esi
  int v6; // eax
  struct _PLGRUN *v7; // ecx
  int v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // edi
  bool i; // zf
  _BYTE *v13; // esi
  int v14; // edi
  char v15; // bl
  char v16; // cl
  struct _PLGRUN *v17; // ecx
  int v18; // eax
  int v19; // esi
  LONG v20; // edx
  int v21; // edi
  int v22; // eax
  bool v23; // zf
  struct _PLGRUN *v24; // esi
  LONG v25; // edi
  _BYTE *v26; // esi
  int v27; // ebx
  char v28; // dl
  struct _PLGRUN *v29; // esi
  LONG top; // edx
  int v31; // eax
  int v32; // ecx
  LONG v33; // eax
  bool v34; // zf
  LONG bottom; // edi
  LONG v36; // edi
  _BYTE *v37; // ebx
  char v38; // dl
  LONG right; // ecx
  LONG left; // eax
  int v41; // eax
  char v42; // [esp+13h] [ebp-35h]
  struct _PLGRUN *v43; // [esp+14h] [ebp-34h]
  struct _PLGRUN *v44; // [esp+14h] [ebp-34h]
  int v45; // [esp+14h] [ebp-34h]
  int v46; // [esp+18h] [ebp-30h]
  int v47; // [esp+18h] [ebp-30h]
  int v48; // [esp+18h] [ebp-30h]
  int v49; // [esp+1Ch] [ebp-2Ch]
  int v50; // [esp+1Ch] [ebp-2Ch]
  char v51; // [esp+20h] [ebp-28h]
  int v52; // [esp+20h] [ebp-28h]
  char v53; // [esp+20h] [ebp-28h]
  LONG v54; // [esp+24h] [ebp-24h]
  int v55; // [esp+24h] [ebp-24h]
  char v56; // [esp+28h] [ebp-20h]
  unsigned int v57[2]; // [esp+30h] [ebp-18h] BYREF
  struct _RECTL rclBounds; // [esp+38h] [ebp-10h] BYREF

  v4 = a2;
  if ( a2 )
  {
    v5 = a3;
    v6 = *((_DWORD *)a3 + 10);
    v57[0] = *((_DWORD *)a3 + 11);
    v57[1] = v57[0] - 1 + v6;
    if ( a4 )
    {
      i = a4->iDComplexity == 1;
      memset(&rclBounds, 0, sizeof(rclBounds));
      if ( i )
      {
        v17 = a1;
        rclBounds = a4->rclBounds;
        while ( v17 < v4 )
        {
          v18 = *(_DWORD *)v17;
          v19 = *(_DWORD *)v17;
          v20 = *((_DWORD *)v17 + 1);
          v21 = *((_DWORD *)v17 + 2);
          v17 = (struct _PLGRUN *)((char *)v17 + 12);
          v56 = v18 | (16 * v19);
          v22 = *((_DWORD *)a3 + 12) + v20 * *((_DWORD *)a3 + 13);
          v23 = v21 == 0;
          while ( 1 )
          {
            v52 = v22;
            v47 = v21;
            v54 = v20;
            if ( v23 )
              break;
            v24 = (struct _PLGRUN *)((char *)v17 + 8);
            v44 = (struct _PLGRUN *)((char *)v17 + 8);
            if ( (struct _PLGRUN *)((char *)v17 + 8) > v4 )
              break;
            if ( v20 >= rclBounds.top && v20 < rclBounds.bottom )
            {
              v25 = *(_DWORD *)v17;
              v26 = (_BYTE *)(v22 + (*(int *)v17 >> 1));
              if ( *((_DWORD *)v17 + 1) )
              {
                v27 = *((_DWORD *)v17 + 1);
                do
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v57, (unsigned int)v26) )
                    break;
                  if ( v25 >= rclBounds.left && v25 < rclBounds.right )
                    *v26 = v28 & v56 | *v26 & ~v28;
                  --v27;
                  ++v25;
                  if ( ~v28 == 0xF0 )
                    ++v26;
                }
                while ( v27 );
                v4 = a2;
                v22 = v52;
                v20 = v54;
              }
              v21 = v47;
              v24 = v44;
            }
            v22 += *((_DWORD *)a3 + 13);
            ++v20;
            v23 = --v21 == 0;
            v17 = v24;
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v29 = a1;
        top = 0x7FFFFFFF;
        rclBounds.left = 0x7FFFFFFF;
        rclBounds.top = 0x7FFFFFFF;
        rclBounds.right = 0x80000000;
        rclBounds.bottom = 0x80000000;
        while ( v29 < v4 )
        {
          v48 = *((_DWORD *)v29 + 1);
          v50 = *((_DWORD *)v29 + 2);
          v31 = *(_DWORD *)v29;
          v32 = 16 * *(_DWORD *)v29;
          v29 = (struct _PLGRUN *)((char *)v29 + 12);
          v53 = v31 | v32;
          v33 = v48;
          v34 = v50 == 0;
          v45 = *((_DWORD *)a3 + 12) + v48 * *((_DWORD *)a3 + 13);
          while ( 1 )
          {
            bottom = rclBounds.bottom;
            if ( v34 || (struct _PLGRUN *)((char *)v29 + 8) > v4 )
              break;
            if ( v33 < top || v33 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v33);
              top = rclBounds.top;
              bottom = rclBounds.bottom;
              v33 = v48;
            }
            if ( v33 >= top && v33 < bottom )
            {
              v36 = *(_DWORD *)v29;
              v55 = *((_DWORD *)v29 + 1);
              if ( v55 )
              {
                v37 = (_BYTE *)(v45 + (*(int *)v29 >> 1));
                v42 = (*(_DWORD *)v29 & 1) != 0 ? 15 : -16;
                do
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v57, (unsigned int)v37) )
                    break;
                  left = rclBounds.left;
                  if ( v36 >= rclBounds.left )
                  {
                    right = rclBounds.right;
                    if ( v36 < rclBounds.right )
                      continue;
                  }
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v36, right);
                  v38 = v42;
                  left = rclBounds.left;
                  right = rclBounds.right;
                  if ( v36 >= left && v36 < right )
                    *v37 = v38 & v53 | *v37 & ~v38;
                  v41 = v55 - 1;
                  v42 = ~v38;
                  ++v36;
                  --v55;
                  if ( ~v38 == 0xF0 )
                    ++v37;
                }
                while ( v41 );
                top = rclBounds.top;
                v4 = a2;
                v33 = v48;
              }
            }
            ++v33;
            v34 = v50-- == 1;
            v45 += *((_DWORD *)a3 + 13);
            v29 = (struct _PLGRUN *)((char *)v29 + 8);
            v48 = v33;
          }
        }
      }
    }
    else
    {
      v7 = a1;
      while ( v7 < v4 )
      {
        v8 = *((_DWORD *)v5 + 13) * *((_DWORD *)v7 + 1);
        v9 = *(_DWORD *)v7 | (16 * *(_DWORD *)v7);
        v10 = *((_DWORD *)v7 + 2);
        v7 = (struct _PLGRUN *)((char *)v7 + 12);
        v51 = v9;
        v46 = v10;
        v11 = *((_DWORD *)v5 + 12) + v8;
        for ( i = v10 == 0; ; i = v46-- == 1 )
        {
          v49 = v11;
          if ( i )
            break;
          v43 = (struct _PLGRUN *)((char *)v7 + 8);
          if ( (struct _PLGRUN *)((char *)v7 + 8) > v4 )
            break;
          v13 = (_BYTE *)(v11 + (*(int *)v7 >> 1));
          if ( *((_DWORD *)v7 + 1) )
          {
            v14 = *((_DWORD *)v7 + 1);
            v15 = (*(_DWORD *)v7 & 1) != 0 ? 15 : -16;
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v57, (unsigned int)v13) )
                break;
              v16 = v15 & v51 | ~v15 & *v13;
              v15 = ~v15;
              *v13 = v16;
              if ( v15 == -16 )
                ++v13;
              --v14;
            }
            while ( v14 );
            v11 = v49;
            v4 = a2;
          }
          v5 = a3;
          v7 = v43;
          v11 += *((_DWORD *)a3 + 13);
        }
      }
    }
  }
}
