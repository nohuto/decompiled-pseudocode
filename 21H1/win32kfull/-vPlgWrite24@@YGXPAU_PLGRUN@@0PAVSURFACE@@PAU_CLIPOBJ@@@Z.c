/*
 * XREFs of ?vPlgWrite24@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x245ADB
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z @ 0x24473E (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z.c)
 */

void __stdcall vPlgWrite24(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _PLGRUN *v4; // edi
  struct SURFACE *v5; // ebx
  int v6; // eax
  struct _PLGRUN *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  bool v11; // zf
  int v12; // esi
  int v13; // eax
  unsigned int v14; // esi
  int v15; // ebx
  char v16; // dl
  struct _PLGRUN *v17; // esi
  LONG top; // ecx
  LONG v19; // edx
  LONG v20; // eax
  bool v21; // zf
  LONG bottom; // eax
  LONG v23; // eax
  unsigned int v24; // esi
  LONG left; // edi
  LONG v26; // ebx
  int v27; // ecx
  LONG right; // eax
  char v29; // [esp+12h] [ebp-36h]
  int v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+14h] [ebp-34h]
  int v32; // [esp+18h] [ebp-30h]
  int v33; // [esp+1Ch] [ebp-2Ch]
  LONG v34; // [esp+1Ch] [ebp-2Ch]
  int v35; // [esp+20h] [ebp-28h]
  int v36; // [esp+20h] [ebp-28h]
  struct _PLGRUN *v37; // [esp+24h] [ebp-24h]
  __int16 v38; // [esp+28h] [ebp-20h]
  struct _PLGRUN *v39; // [esp+2Ch] [ebp-1Ch]
  unsigned int v40[2]; // [esp+30h] [ebp-18h] BYREF
  struct _RECTL v41; // [esp+38h] [ebp-10h] BYREF

  v4 = a2;
  if ( a2 )
  {
    v5 = a3;
    v6 = *((_DWORD *)a3 + 11) + *((_DWORD *)a3 + 10) - 3;
    v40[0] = *((_DWORD *)a3 + 11);
    v40[1] = v6;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v17 = a1;
      top = 0x7FFFFFFF;
      v41.left = 0x7FFFFFFF;
      v41.top = 0x7FFFFFFF;
      v41.right = 0x80000000;
      v41.bottom = 0x80000000;
      while ( v17 < v4 )
      {
        v19 = *((_DWORD *)v17 + 1);
        v36 = *((_DWORD *)v17 + 2);
        v20 = *(_DWORD *)v17;
        v17 = (struct _PLGRUN *)((char *)v17 + 12);
        v38 = v20;
        v29 = BYTE2(v20);
        v21 = v36 == 0;
        v32 = *((_DWORD *)v5 + 12) + v19 * *((_DWORD *)v5 + 13);
        while ( 1 )
        {
          bottom = v41.bottom;
          v34 = v19;
          if ( v21 )
            break;
          v39 = (struct _PLGRUN *)((char *)v17 + 8);
          v5 = a3;
          if ( (struct _PLGRUN *)((char *)v17 + 8) > v4 )
            break;
          if ( v19 < top || v19 >= v41.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &v41, v19);
            top = v41.top;
            v19 = v34;
            bottom = v41.bottom;
          }
          if ( v19 >= top && v19 < bottom )
          {
            v23 = *(_DWORD *)v17;
            v31 = *((_DWORD *)v17 + 1);
            v24 = v32 + 3 * *(_DWORD *)v17;
            if ( v31 )
            {
              left = v41.left;
              v26 = v23;
              do
              {
                if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v40, v24) )
                  break;
                if ( v26 >= left )
                {
                  right = v41.right;
                  if ( v26 < v41.right )
                    continue;
                }
                XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &v41, v26, v27);
                left = v41.left;
                right = v41.right;
                if ( v26 >= left && v26 < right )
                {
                  *(_WORD *)v24 = v38;
                  *(_BYTE *)(v24 + 2) = v29;
                }
                v24 += 3;
                ++v26;
                --v31;
              }
              while ( v31 );
              top = v41.top;
              v4 = a2;
              v5 = a3;
              v19 = v34;
            }
          }
          ++v19;
          v21 = v36-- == 1;
          v32 += *((_DWORD *)v5 + 13);
          v17 = v39;
        }
      }
    }
    else
    {
      v7 = a1;
      while ( v7 < v4 )
      {
        v8 = *((_DWORD *)v5 + 13) * *((_DWORD *)v7 + 1);
        v30 = *(_DWORD *)v7;
        v9 = *((_DWORD *)v7 + 2);
        v7 = (struct _PLGRUN *)((char *)v7 + 12);
        v10 = *((_DWORD *)v5 + 12) + v8;
        v11 = v9 == 0;
        while ( 1 )
        {
          v35 = v10;
          v33 = v9;
          if ( v11 )
            break;
          v37 = (struct _PLGRUN *)((char *)v7 + 8);
          if ( (struct _PLGRUN *)((char *)v7 + 8) > v4 )
            break;
          v12 = 3 * *(_DWORD *)v7;
          v13 = *((_DWORD *)v7 + 1);
          v14 = v10 + v12;
          if ( v13 )
          {
            v15 = v13;
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v40, v14) )
                break;
              *(_WORD *)v14 = v30;
              *(_BYTE *)(v14 + 2) = v16;
              v14 += 3;
              --v15;
            }
            while ( v15 );
            v10 = v35;
            v4 = a2;
            v5 = a3;
            v9 = v33;
          }
          v10 += *((_DWORD *)v5 + 13);
          v11 = --v9 == 0;
          v7 = v37;
        }
      }
    }
  }
}
