/*
 * XREFs of ?vPlgWrite8@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x246293
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z @ 0x24473E (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z.c)
 */

void __stdcall vPlgWrite8(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _PLGRUN *v4; // ebx
  struct SURFACE *v5; // edx
  int v6; // eax
  struct _PLGRUN *v7; // eax
  struct SURFACE *v8; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  bool v12; // zf
  int v13; // esi
  int v14; // eax
  _BYTE *v15; // esi
  int v16; // edi
  struct _PLGRUN *v17; // eax
  LONG v18; // esi
  LONG v19; // ecx
  int v20; // edi
  int v21; // esi
  bool i; // zf
  LONG v23; // edi
  _BYTE *v24; // ebx
  int v25; // edx
  struct _PLGRUN *v26; // esi
  struct SURFACE *v27; // eax
  LONG v28; // edx
  LONG v29; // ecx
  int v30; // ecx
  bool v31; // zf
  LONG top; // edi
  LONG v33; // edi
  unsigned int v34; // edx
  LONG left; // ebx
  _BYTE *v36; // edx
  int v37; // ecx
  LONG right; // eax
  int v39; // [esp+Ch] [ebp-34h]
  _BYTE *v40; // [esp+Ch] [ebp-34h]
  struct _PLGRUN *v41; // [esp+10h] [ebp-30h]
  char v42; // [esp+10h] [ebp-30h]
  int v43; // [esp+10h] [ebp-30h]
  int v44; // [esp+14h] [ebp-2Ch]
  LONG v45; // [esp+14h] [ebp-2Ch]
  LONG v46; // [esp+14h] [ebp-2Ch]
  int v47; // [esp+18h] [ebp-28h]
  int v48; // [esp+18h] [ebp-28h]
  int v49; // [esp+1Ch] [ebp-24h]
  struct _PLGRUN *v50; // [esp+20h] [ebp-20h]
  char v51; // [esp+20h] [ebp-20h]
  unsigned int v52[2]; // [esp+28h] [ebp-18h] BYREF
  struct _RECTL rclBounds; // [esp+30h] [ebp-10h] BYREF

  v4 = a2;
  if ( a2 )
  {
    v5 = a3;
    v6 = *((_DWORD *)a3 + 10);
    v52[0] = *((_DWORD *)a3 + 11);
    v52[1] = v52[0] - 1 + v6;
    if ( a4 )
    {
      v12 = a4->iDComplexity == 1;
      memset(&rclBounds, 0, sizeof(rclBounds));
      if ( v12 )
      {
        v17 = a1;
        rclBounds = a4->rclBounds;
        while ( v17 < v4 )
        {
          v18 = *(_DWORD *)v17;
          v19 = *((_DWORD *)v17 + 1);
          v20 = *((_DWORD *)v17 + 2);
          v17 = (struct _PLGRUN *)((char *)v17 + 12);
          v42 = v18;
          v21 = *((_DWORD *)v5 + 12) + v19 * *((_DWORD *)v5 + 13);
          for ( i = v20 == 0; ; i = v20 == 0 )
          {
            v39 = v20;
            v45 = v19;
            if ( i )
              break;
            v50 = (struct _PLGRUN *)((char *)v17 + 8);
            v5 = a3;
            if ( (struct _PLGRUN *)((char *)v17 + 8) > v4 )
              break;
            if ( v19 >= rclBounds.top && v19 < rclBounds.bottom )
            {
              v23 = *(_DWORD *)v17;
              if ( *((_DWORD *)v17 + 1) )
              {
                v24 = (_BYTE *)(v23 + v21);
                do
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v52, (unsigned int)v24) )
                    break;
                  if ( v23 >= rclBounds.left && v23 < rclBounds.right )
                    *v24 = v42;
                  ++v23;
                  ++v24;
                }
                while ( v25 != 1 );
                v4 = a2;
                v5 = a3;
                v19 = v45;
              }
              v20 = v39;
            }
            v21 += *((_DWORD *)v5 + 13);
            ++v19;
            v17 = v50;
            --v20;
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v26 = a1;
        rclBounds.left = 0x7FFFFFFF;
        rclBounds.top = 0x7FFFFFFF;
        rclBounds.right = 0x80000000;
        rclBounds.bottom = 0x80000000;
        if ( a1 < a2 )
        {
          v27 = a3;
          do
          {
            v28 = *((_DWORD *)v26 + 1);
            v48 = *((_DWORD *)v26 + 2);
            v29 = *(_DWORD *)v26;
            v26 = (struct _PLGRUN *)((char *)v26 + 12);
            v51 = v29;
            v30 = *((_DWORD *)v27 + 12) + v28 * *((_DWORD *)v27 + 13);
            v31 = v48 == 0;
            while ( 1 )
            {
              v43 = v30;
              v46 = v28;
              if ( v31 )
                break;
              top = rclBounds.top;
              if ( (struct _PLGRUN *)((char *)v26 + 8) > v4 )
                break;
              if ( v28 < rclBounds.top || v28 >= rclBounds.bottom )
              {
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v28);
                v27 = a3;
                v28 = v46;
                top = rclBounds.top;
              }
              if ( v28 >= top && v28 < rclBounds.bottom )
              {
                v33 = *(_DWORD *)v26;
                v49 = *((_DWORD *)v26 + 1);
                v40 = (_BYTE *)(*(_DWORD *)v26 + v43);
                if ( v49 )
                {
                  v34 = v33 + v43;
                  left = rclBounds.left;
                  do
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v52, v34) )
                      break;
                    if ( v33 >= left )
                    {
                      right = rclBounds.right;
                      if ( v33 < rclBounds.right )
                        continue;
                    }
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v33, v37);
                    left = rclBounds.left;
                    right = rclBounds.right;
                    v36 = v40;
                    if ( v33 >= left && v33 < right )
                      *v36 = v51;
                    ++v33;
                    v34 = (unsigned int)(v36 + 1);
                    --v49;
                    v40 = (_BYTE *)v34;
                  }
                  while ( v49 );
                  v4 = a2;
                  v27 = a3;
                  v28 = v46;
                }
              }
              v30 = *((_DWORD *)v27 + 13) + v43;
              ++v28;
              v31 = v48-- == 1;
              v26 = (struct _PLGRUN *)((char *)v26 + 8);
            }
          }
          while ( v26 < v4 );
        }
      }
    }
    else
    {
      v7 = a1;
      if ( a1 < a2 )
      {
        v8 = a3;
        do
        {
          v9 = *((_DWORD *)v8 + 13) * *((_DWORD *)v7 + 1);
          v44 = *(_DWORD *)v7;
          v10 = *((_DWORD *)v7 + 2);
          v7 = (struct _PLGRUN *)((char *)v7 + 12);
          v11 = *((_DWORD *)v8 + 12) + v9;
          v12 = v10 == 0;
          while ( 1 )
          {
            v47 = v10;
            if ( v12 )
              break;
            v41 = (struct _PLGRUN *)((char *)v7 + 8);
            if ( (struct _PLGRUN *)((char *)v7 + 8) > v4 )
              break;
            v13 = *(_DWORD *)v7;
            v14 = *((_DWORD *)v7 + 1);
            v15 = (_BYTE *)(v11 + v13);
            if ( v14 )
            {
              v16 = v14;
              do
              {
                if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v52, (unsigned int)v15) )
                  break;
                *v15++ = v44;
                --v16;
              }
              while ( v16 );
              v4 = a2;
              v8 = a3;
              v10 = v47;
            }
            v11 += *((_DWORD *)v8 + 13);
            v12 = --v10 == 0;
            v7 = v41;
          }
        }
        while ( v7 < v4 );
      }
    }
  }
}
