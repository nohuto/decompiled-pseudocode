/*
 * XREFs of ?vPlgWriteOR@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x2468B7
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z @ 0x24473E (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z.c)
 */

void __stdcall vPlgWriteOR(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct SURFACE *v4; // ebx
  int v5; // eax
  struct _PLGRUN *v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // esi
  bool i; // zf
  int v11; // edi
  unsigned __int8 v12; // bh
  bool v13; // al
  char *v14; // edx
  char v15; // bl
  int j; // ecx
  _BYTE *v17; // edx
  struct _PLGRUN *v18; // esi
  LONG top; // edx
  LONG bottom; // eax
  LONG v21; // edi
  int v22; // ecx
  int v23; // ecx
  bool v24; // zf
  LONG v25; // edi
  int v26; // eax
  char *v27; // esi
  LONG right; // ecx
  LONG left; // eax
  bool v30; // cc
  char v31; // cl
  int v32; // edx
  bool v33; // al
  char v34; // [esp+Dh] [ebp-33h]
  char v35; // [esp+Eh] [ebp-32h]
  bool v36; // [esp+Fh] [ebp-31h]
  unsigned __int8 v37; // [esp+Fh] [ebp-31h]
  int v38; // [esp+10h] [ebp-30h]
  int v39; // [esp+10h] [ebp-30h]
  int v40; // [esp+14h] [ebp-2Ch]
  int v41; // [esp+14h] [ebp-2Ch]
  LONG v42; // [esp+14h] [ebp-2Ch]
  int v43; // [esp+18h] [ebp-28h]
  int v44; // [esp+18h] [ebp-28h]
  int v45; // [esp+1Ch] [ebp-24h]
  struct _PLGRUN *v46; // [esp+20h] [ebp-20h]
  int v47; // [esp+20h] [ebp-20h]
  struct _PLGRUN *v48; // [esp+24h] [ebp-1Ch]
  unsigned int v49[2]; // [esp+28h] [ebp-18h] BYREF
  struct _RECTL v50; // [esp+30h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = a3;
    v5 = *((_DWORD *)a3 + 11) + *((_DWORD *)a3 + 10) - 1;
    v49[0] = *((_DWORD *)a3 + 11);
    v49[1] = v5;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v18 = a1;
      top = 0x7FFFFFFF;
      v50.left = 0x7FFFFFFF;
      bottom = 0x80000000;
      v50.top = 0x7FFFFFFF;
      v50.right = 0x80000000;
      v50.bottom = 0x80000000;
      while ( v18 < a2 )
      {
        v21 = *((_DWORD *)v18 + 1);
        v47 = *(_DWORD *)v18;
        v22 = *((_DWORD *)v18 + 2);
        v18 = (struct _PLGRUN *)((char *)v18 + 12);
        v45 = v22;
        v23 = *((_DWORD *)v4 + 12) + v21 * *((_DWORD *)v4 + 13);
        v24 = v45 == 0;
        while ( 1 )
        {
          v39 = v23;
          v42 = v21;
          if ( v24 )
            break;
          v48 = (struct _PLGRUN *)((char *)v18 + 8);
          v4 = a3;
          if ( (struct _PLGRUN *)((char *)v18 + 8) > a2 )
            break;
          if ( v21 < top || v21 >= bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &v50, v21);
            top = v50.top;
            bottom = v50.bottom;
            v23 = v39;
          }
          if ( v21 >= top && v21 < bottom )
          {
            v25 = *(_DWORD *)v18;
            v44 = *((_DWORD *)v18 + 1);
            v26 = *(_DWORD *)v18 & 7;
            v27 = (char *)(v23 + (*(int *)v18 >> 3));
            v37 = byte_25D744[v26];
            if ( v25 >= 0
              && v25 < *((_DWORD *)a3 + 8)
              && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v49, v23 + (v25 >> 3)) )
            {
              v35 = 1;
              v34 = *v27;
            }
            else
            {
              v35 = 0;
              v34 = 0;
            }
            if ( v44 >= 0 )
            {
              do
              {
                if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v49, (unsigned int)v27) )
                  break;
                left = v50.left;
                if ( v25 >= v50.left )
                {
                  right = v50.right;
                  if ( v25 < v50.right )
                    continue;
                }
                XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &v50, v25, right);
                left = v50.left;
                right = v50.right;
                if ( v25 < left )
                {
                  v31 = v34;
                }
                else
                {
                  v30 = v25 < right;
                  v31 = v34;
                  if ( v30 )
                  {
                    v31 = (v47 == 0 ? 0 : v37) | v34;
                    v34 = v31;
                  }
                }
                v32 = v44 - 1;
                ++v25;
                i = v37 >> 1 == 0;
                v37 >>= 1;
                --v44;
                if ( i )
                {
                  if ( v35 )
                    *v27 = v31;
                  ++v27;
                  v37 = byte_25D744[v25 & 7];
                  if ( v25 >= 0
                    && v25 < *((_DWORD *)a3 + 8)
                    && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v49, (unsigned int)v27) )
                  {
                    v35 = 1;
                    v34 = *v27;
                  }
                  else
                  {
                    v35 = 0;
                    v34 = 0;
                  }
                }
              }
              while ( v32 >= 0 );
              top = v50.top;
            }
            if ( v35 )
            {
              v33 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v49, (unsigned int)v27);
              v21 = v42;
              v23 = v39;
              if ( v33 )
                *v27 = v34;
            }
            else
            {
              v21 = v42;
              v23 = v39;
            }
          }
          v23 += *((_DWORD *)a3 + 13);
          ++v21;
          v24 = v45-- == 1;
          v18 = v48;
          bottom = v50.bottom;
        }
      }
    }
    else
    {
      v6 = a1;
      while ( v6 < a2 )
      {
        v7 = *((_DWORD *)v4 + 13) * *((_DWORD *)v6 + 1);
        v38 = *(_DWORD *)v6;
        v8 = *((_DWORD *)v6 + 2);
        v6 = (struct _PLGRUN *)((char *)v6 + 12);
        v43 = v8;
        v9 = *((_DWORD *)v4 + 12) + v7;
        for ( i = v8 == 0; !i; i = v43-- == 1 )
        {
          v46 = (struct _PLGRUN *)((char *)v6 + 8);
          if ( (struct _PLGRUN *)((char *)v6 + 8) > a2 )
            break;
          v11 = *(_DWORD *)v6;
          v40 = *((_DWORD *)v6 + 1);
          v12 = byte_25D744[*(_DWORD *)v6 & 7];
          v13 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v49, v9 + (*(int *)v6 >> 3));
          v36 = v13;
          if ( v13 )
            v15 = *v14;
          else
            v15 = 0;
          for ( j = v40; j >= 0; v13 = v36 )
          {
            if ( !v13 )
              break;
            v15 |= v38 == 0 ? 0 : v12;
            --j;
            LOBYTE(v11) = v11 + 1;
            v41 = j;
            v12 >>= 1;
            if ( !v12 )
            {
              *v14 = v15;
              v36 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v49, (unsigned int)(v14 + 1));
              if ( v36 )
                v15 = *v14;
              else
                v15 = 0;
              j = v41;
              v12 = byte_25D744[v11 & 7];
            }
          }
          if ( PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v49, (unsigned int)v14) )
            *v17 = v15;
          v4 = a3;
          v6 = v46;
          v9 += *((_DWORD *)a3 + 13);
        }
      }
    }
  }
}
