/*
 * XREFs of ?vPlgWrite32@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x245D07
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z @ 0x24473E (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z.c)
 */

void __stdcall vPlgWrite32(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _PLGRUN *v4; // esi
  struct SURFACE *v5; // ebx
  int v6; // eax
  struct _PLGRUN *v7; // ecx
  int v8; // edx
  int v9; // eax
  int i; // edx
  int v11; // ebx
  _DWORD *v12; // edi
  struct _PLGRUN *v13; // edi
  LONG top; // eax
  LONG bottom; // ecx
  LONG v16; // edx
  LONG v17; // esi
  bool v18; // zf
  LONG v19; // ebx
  LONG *v20; // edi
  LONG left; // esi
  int v22; // ecx
  LONG right; // eax
  int v24; // [esp+10h] [ebp-30h]
  struct _PLGRUN *v25; // [esp+14h] [ebp-2Ch]
  int v26; // [esp+14h] [ebp-2Ch]
  int v27; // [esp+18h] [ebp-28h]
  LONG v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+1Ch] [ebp-24h]
  LONG v31; // [esp+20h] [ebp-20h]
  struct _PLGRUN *v32; // [esp+24h] [ebp-1Ch]
  unsigned int v33[2]; // [esp+28h] [ebp-18h] BYREF
  struct _RECTL v34; // [esp+30h] [ebp-10h] BYREF

  v4 = a2;
  if ( a2 )
  {
    v5 = a3;
    v6 = *((_DWORD *)a3 + 11) + *((_DWORD *)a3 + 10) - 4;
    v33[0] = *((_DWORD *)a3 + 11);
    v33[1] = v6;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v13 = a1;
      top = 0x7FFFFFFF;
      bottom = 0x80000000;
      v34.left = 0x7FFFFFFF;
      v34.top = 0x7FFFFFFF;
      v34.right = 0x80000000;
      v34.bottom = 0x80000000;
      while ( v13 < v4 )
      {
        v16 = *((_DWORD *)v13 + 1);
        v30 = *((_DWORD *)v13 + 2);
        v17 = *(_DWORD *)v13;
        v13 = (struct _PLGRUN *)((char *)v13 + 12);
        v31 = v17;
        v18 = v30 == 0;
        v26 = *((_DWORD *)v5 + 12) + v16 * *((_DWORD *)v5 + 13);
        v4 = a2;
        while ( 1 )
        {
          v28 = v16;
          if ( v18 )
            break;
          v32 = (struct _PLGRUN *)((char *)v13 + 8);
          v5 = a3;
          if ( (struct _PLGRUN *)((char *)v13 + 8) > v4 )
            break;
          if ( v16 < top || v16 >= bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &v34, v16);
            bottom = v34.bottom;
            top = v34.top;
            v16 = v28;
          }
          if ( v16 >= top && v16 < bottom )
          {
            v19 = *(_DWORD *)v13;
            v24 = *((_DWORD *)v13 + 1);
            v20 = (LONG *)(v26 + 4 * *(_DWORD *)v13);
            if ( v24 )
            {
              left = v34.left;
              do
              {
                if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v33, (unsigned int)v20) )
                  break;
                if ( v19 >= left )
                {
                  right = v34.right;
                  if ( v19 < v34.right )
                    continue;
                }
                XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &v34, v19, v22);
                left = v34.left;
                right = v34.right;
                if ( v19 >= left && v19 < right )
                  *v20 = v31;
                ++v20;
                ++v19;
                --v24;
              }
              while ( v24 );
              bottom = v34.bottom;
              top = v34.top;
              v4 = a2;
              v16 = v28;
            }
            v5 = a3;
          }
          ++v16;
          v18 = v30-- == 1;
          v26 += *((_DWORD *)v5 + 13);
          v13 = v32;
        }
      }
    }
    else
    {
      v7 = a1;
      while ( v7 < v4 )
      {
        v8 = *((_DWORD *)v5 + 13) * *((_DWORD *)v7 + 1);
        v27 = *(_DWORD *)v7;
        v9 = *((_DWORD *)v7 + 2);
        v7 = (struct _PLGRUN *)((char *)v7 + 12);
        v29 = v9;
        for ( i = *((_DWORD *)v5 + 12) + v8; v29; --v29 )
        {
          v25 = (struct _PLGRUN *)((char *)v7 + 8);
          if ( (struct _PLGRUN *)((char *)v7 + 8) > v4 )
            break;
          v11 = *((_DWORD *)v7 + 1);
          v12 = (_DWORD *)(i + 4 * *(_DWORD *)v7);
          if ( v11 )
          {
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v33, (unsigned int)v12) )
                break;
              *v12++ = v27;
              --v11;
            }
            while ( v11 );
            v4 = a2;
          }
          v5 = a3;
          v7 = v25;
          i += *((_DWORD *)a3 + 13);
        }
      }
    }
  }
}
