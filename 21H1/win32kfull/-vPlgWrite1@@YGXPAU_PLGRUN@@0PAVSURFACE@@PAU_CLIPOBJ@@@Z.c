/*
 * XREFs of ?vPlgWrite1@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x24578D
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z @ 0x24473E (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QAE_NPAUtagRGBTRIPLE@@@Z.c)
 */

void __stdcall vPlgWrite1(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
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
  char *v13; // edx
  bool v14; // ch
  char v15; // bl
  int v16; // eax
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
  char v30; // al
  int v31; // edx
  bool v32; // al
  char v33; // [esp+Dh] [ebp-33h]
  char v34; // [esp+Eh] [ebp-32h]
  unsigned __int8 v35; // [esp+Fh] [ebp-31h]
  int v36; // [esp+10h] [ebp-30h]
  int v37; // [esp+10h] [ebp-30h]
  int v38; // [esp+14h] [ebp-2Ch]
  LONG v39; // [esp+14h] [ebp-2Ch]
  int v40; // [esp+18h] [ebp-28h]
  int v41; // [esp+18h] [ebp-28h]
  int v42; // [esp+1Ch] [ebp-24h]
  struct _PLGRUN *v43; // [esp+20h] [ebp-20h]
  int v44; // [esp+20h] [ebp-20h]
  struct _PLGRUN *v45; // [esp+24h] [ebp-1Ch]
  unsigned int v46[2]; // [esp+28h] [ebp-18h] BYREF
  struct _RECTL v47; // [esp+30h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = a3;
    v5 = *((_DWORD *)a3 + 11) + *((_DWORD *)a3 + 10) - 1;
    v46[0] = *((_DWORD *)a3 + 11);
    v46[1] = v5;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v18 = a1;
      top = 0x7FFFFFFF;
      v47.left = 0x7FFFFFFF;
      bottom = 0x80000000;
      v47.top = 0x7FFFFFFF;
      v47.right = 0x80000000;
      v47.bottom = 0x80000000;
      while ( v18 < a2 )
      {
        v21 = *((_DWORD *)v18 + 1);
        v44 = *(_DWORD *)v18;
        v22 = *((_DWORD *)v18 + 2);
        v18 = (struct _PLGRUN *)((char *)v18 + 12);
        v42 = v22;
        v23 = *((_DWORD *)v4 + 12) + v21 * *((_DWORD *)v4 + 13);
        v24 = v42 == 0;
        while ( 1 )
        {
          v37 = v23;
          v39 = v21;
          if ( v24 )
            break;
          v45 = (struct _PLGRUN *)((char *)v18 + 8);
          v4 = a3;
          if ( (struct _PLGRUN *)((char *)v18 + 8) > a2 )
            break;
          if ( v21 < top || v21 >= bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &v47, v21);
            top = v47.top;
            bottom = v47.bottom;
            v23 = v37;
          }
          if ( v21 >= top && v21 < bottom )
          {
            v25 = *(_DWORD *)v18;
            v41 = *((_DWORD *)v18 + 1);
            v26 = *(_DWORD *)v18 & 7;
            v27 = (char *)(v23 + (*(int *)v18 >> 3));
            v35 = byte_25D744[v26];
            if ( v25 >= 0
              && v25 < *((_DWORD *)a3 + 8)
              && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, v23 + (v25 >> 3)) )
            {
              v34 = 1;
              v33 = *v27;
            }
            else
            {
              v34 = 0;
              v33 = 0;
            }
            if ( v41 )
            {
              do
              {
                if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, (unsigned int)v27) )
                  break;
                left = v47.left;
                if ( v25 >= v47.left )
                {
                  right = v47.right;
                  if ( v25 < v47.right )
                    continue;
                }
                XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &v47, v25, right);
                left = v47.left;
                right = v47.right;
                if ( v25 < left || v25 >= right )
                {
                  v30 = v33;
                }
                else
                {
                  v30 = (v44 == 0 ? 0 : v35) | v33 & ~v35;
                  v33 = v30;
                }
                v31 = v41 - 1;
                ++v25;
                i = v35 >> 1 == 0;
                v35 >>= 1;
                --v41;
                if ( i )
                {
                  if ( v34 )
                    *v27 = v30;
                  ++v27;
                  v35 = byte_25D744[v25 & 7];
                  if ( v25 >= 0
                    && v25 < *((_DWORD *)a3 + 8)
                    && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, (unsigned int)v27) )
                  {
                    v34 = 1;
                    v33 = *v27;
                  }
                  else
                  {
                    v34 = 0;
                    v33 = 0;
                  }
                }
              }
              while ( v31 );
              top = v47.top;
            }
            if ( v34 )
            {
              v32 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, (unsigned int)v27);
              v21 = v39;
              v23 = v37;
              if ( v32 )
                *v27 = v33;
            }
            else
            {
              v21 = v39;
              v23 = v37;
            }
          }
          v23 += *((_DWORD *)a3 + 13);
          ++v21;
          v24 = v42-- == 1;
          v18 = v45;
          bottom = v47.bottom;
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
        v40 = v8;
        v9 = *((_DWORD *)v4 + 12) + v7;
        for ( i = v8 == 0; !i; i = v40-- == 1 )
        {
          v43 = (struct _PLGRUN *)((char *)v6 + 8);
          if ( (struct _PLGRUN *)((char *)v6 + 8) > a2 )
            break;
          v11 = *(_DWORD *)v6;
          v36 = *((_DWORD *)v6 + 1);
          v12 = byte_25D744[*(_DWORD *)v6 & 7];
          v14 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, v9 + (*(int *)v6 >> 3));
          if ( v14 )
            v15 = *v13;
          else
            v15 = 0;
          if ( v36 )
          {
            do
            {
              if ( !v14 )
                break;
              v16 = v36 - 1;
              v15 = v15 & ~v12 | (v38 == 0 ? 0 : v12);
              LOBYTE(v11) = v11 + 1;
              --v36;
              v12 >>= 1;
              if ( !v12 )
              {
                *v13 = v15;
                v14 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, (unsigned int)(v13 + 1));
                if ( v14 )
                  v15 = *v13;
                else
                  v15 = 0;
                v12 = byte_25D744[v11 & 7];
                v16 = v36;
              }
            }
            while ( v16 );
          }
          if ( PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, (unsigned int)v13) )
            *v17 = v15;
          v4 = a3;
          v6 = v43;
          v9 += *((_DWORD *)a3 + 13);
        }
      }
    }
  }
}
