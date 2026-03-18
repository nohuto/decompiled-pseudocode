/*
 * XREFs of _GreGetAppClipBox@8 @ 0x796EA
 * Callers:
 *     _NtGdiGetAppClipBox@8 @ 0x79688 (_NtGdiGetAppClipBox@8.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GreGetAppClipBox(HDC a1, _DWORD *a2)
{
  int v2; // ebx
  DC *v4; // ecx
  struct REGION *v5; // eax
  DC *v6; // ecx
  _DWORD *v7; // edi
  struct ERECTL *v8; // esi
  DC *v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // edx
  LONG v14; // edi
  struct ERECTL *v15; // ecx
  LONG x; // ecx
  LONG v18; // eax
  LONG v19; // edi
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  struct ERECTL *v23; // edx
  LONG y; // eax
  LONG v25; // ebx
  LONG v26; // edx
  LONG v27; // edx
  LONG v28; // edx
  LONG v29; // edx
  LONG v30; // edi
  LONG v31; // edi
  LONG v32; // edi
  int v33; // eax
  int v34; // ecx
  LONG v35; // [esp+10h] [ebp-78h] BYREF
  struct ERECTL *v36; // [esp+14h] [ebp-74h]
  DC *v37[3]; // [esp+18h] [ebp-70h] BYREF
  LONG v38; // [esp+24h] [ebp-64h]
  _DWORD v39[3]; // [esp+28h] [ebp-60h] BYREF
  _BYTE v40[20]; // [esp+34h] [ebp-54h] BYREF
  _DWORD v41[3]; // [esp+48h] [ebp-40h] BYREF
  __int16 v42; // [esp+54h] [ebp-34h]
  struct _POINTL v43; // [esp+64h] [ebp-24h] BYREF
  LONG v44; // [esp+6Ch] [ebp-1Ch]
  struct ERECTL *v45; // [esp+70h] [ebp-18h]
  LONG v46; // [esp+74h] [ebp-14h]
  struct ERECTL *v47; // [esp+78h] [ebp-10h]
  LONG v48; // [esp+7Ch] [ebp-Ch]
  struct ERECTL *v49; // [esp+80h] [ebp-8h]

  v2 = 0;
  v36 = (struct ERECTL *)a2;
  memset(v37, 0, sizeof(v37));
  XDCOBJ::vLock((XDCOBJ *)v37, a1);
  if ( !v37[0] )
  {
    EngSetLastError(6u);
    goto LABEL_16;
  }
  memset(v41, 0, sizeof(v41));
  v42 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v40, (struct XDCOBJ *)v37, 1);
  if ( (v40[12] & 1) == 0 )
  {
    if ( XDCOBJ::bFullScreen(v37) )
    {
      *a2 = 0;
      a2[2] = 0;
      a2[1] = 0;
      a2[3] = 0;
      v2 = 3;
    }
    goto LABEL_14;
  }
  if ( DC::prgnRao(v37[0]) )
    v5 = DC::prgnRao(v4);
  else
    v5 = DC::prgnVisSnap(v4);
  v35 = (LONG)v5;
  *a2 = *((_DWORD *)v5 + 16);
  v7 = a2 + 1;
  *v7++ = *((_DWORD *)v5 + 17);
  *v7 = *((_DWORD *)v5 + 18);
  v7[1] = *((_DWORD *)v5 + 19);
  v8 = v36;
  if ( *(_DWORD *)v36 >= *((_DWORD *)v36 + 2) || *((_DWORD *)v36 + 1) >= *((_DWORD *)v36 + 3) )
  {
    *(_DWORD *)v36 = 0;
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 1) = 0;
    *((_DWORD *)v8 + 3) = 0;
    v2 = 1;
    goto LABEL_12;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v37, 0x80000402);
  if ( v39[0] )
  {
    v9 = v37[0];
    v10 = *((_DWORD *)v36 + 1);
    v11 = *((_DWORD *)v37[0] + 7) & 1;
    v12 = *(_DWORD *)v36 - *((_DWORD *)v37[0] + 2 * v11 + 262);
    *(_DWORD *)v36 = v12;
    v38 = v12;
    v13 = *((_DWORD *)v8 + 2) - *((_DWORD *)v9 + 2 * v11 + 262);
    *((_DWORD *)v8 + 2) = v13;
    v14 = v10 - *((_DWORD *)v9 + 2 * v11 + 263);
    *((_DWORD *)v8 + 1) = v14;
    *((_DWORD *)v8 + 3) -= *((_DWORD *)v9 + 2 * v11 + 263);
    v15 = (struct ERECTL *)*((_DWORD *)v8 + 3);
    if ( (*(_BYTE *)(v39[0] + 56) & 1) != 0 )
    {
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v39, v8) )
        v2 = RGNOBJ::iComplexity((RGNOBJ *)&v35);
LABEL_11:
      v6 = v37[0];
LABEL_12:
      if ( v2 )
      {
        if ( (*(_BYTE *)(*((_DWORD *)v6 + 255) + 148) & 1) != 0 )
        {
          v33 = *(_DWORD *)v8;
          v34 = *((_DWORD *)v8 + 2);
          if ( *(_DWORD *)v8 > v34 )
          {
            *(_DWORD *)v8 = v34;
            *((_DWORD *)v8 + 2) = v33;
          }
        }
      }
      goto LABEL_14;
    }
    v43.x = v38;
    v46 = v38;
    v47 = v15;
    v49 = v15;
    v43.y = v14;
    v44 = v13;
    v45 = (struct ERECTL *)v14;
    v48 = v13;
    EXFORMOBJ::bXform((EXFORMOBJ *)v39, &v43, 4u);
    x = v43.x;
    v18 = v43.x;
    v19 = v44;
    if ( v43.x >= v44 )
      v18 = v44;
    if ( v18 >= v46 )
    {
      v20 = v46;
    }
    else if ( v43.x >= v44 )
    {
      v20 = v44;
    }
    else
    {
      v20 = v43.x;
    }
    if ( v20 >= v48 )
    {
      v22 = v48;
    }
    else
    {
      v21 = v43.x;
      if ( v43.x >= v44 )
        v21 = v44;
      if ( v21 >= v46 )
      {
        v22 = v46;
      }
      else if ( v43.x >= v44 )
      {
        v22 = v44;
      }
      else
      {
        v22 = v43.x;
      }
    }
    v23 = v45;
    *(_DWORD *)v8 = v22;
    y = v43.y;
    if ( v43.y >= (int)v23 )
    {
      v35 = (LONG)v23;
    }
    else
    {
      v19 = v44;
      v35 = v43.y;
    }
    v8 = v36;
    if ( v35 >= (int)v47 )
    {
      v35 = (LONG)v47;
    }
    else if ( v43.y >= (int)v23 )
    {
      v19 = v44;
      v35 = (LONG)v23;
    }
    else
    {
      v35 = v43.y;
    }
    v25 = v46;
    if ( v35 >= (int)v49 )
    {
      v23 = v49;
    }
    else
    {
      if ( v43.y >= (int)v23 )
      {
        v19 = v44;
        v35 = (LONG)v23;
      }
      else
      {
        v35 = v43.y;
      }
      v8 = v36;
      if ( v35 >= (int)v47 )
      {
        v23 = v47;
      }
      else
      {
        if ( v43.y < (int)v23 )
        {
          v25 = v46;
          v36 = (struct ERECTL *)v43.y;
LABEL_58:
          *((_DWORD *)v8 + 1) = v36;
          v26 = x;
          if ( x <= v19 )
            v26 = v19;
          if ( v26 <= v25 )
          {
            v27 = v25;
          }
          else if ( x <= v19 )
          {
            v27 = v19;
          }
          else
          {
            v27 = x;
          }
          if ( v27 <= v48 )
          {
            x = v48;
          }
          else
          {
            v28 = x;
            if ( x <= v19 )
              v28 = v19;
            if ( v28 <= v25 )
            {
              x = v25;
            }
            else if ( x <= v19 )
            {
              x = v19;
            }
          }
          v29 = (LONG)v45;
          v30 = y;
          *((_DWORD *)v8 + 2) = x;
          if ( y <= v29 )
            v30 = v29;
          if ( v30 <= (int)v47 )
          {
            v31 = (LONG)v47;
          }
          else if ( y <= v29 )
          {
            v31 = v29;
          }
          else
          {
            v31 = y;
          }
          if ( v31 <= (int)v49 )
          {
            y = (LONG)v49;
          }
          else
          {
            v32 = y;
            if ( y <= v29 )
              v32 = v29;
            if ( v32 <= (int)v47 )
            {
              y = (LONG)v47;
            }
            else if ( y <= v29 )
            {
              y = v29;
            }
          }
          *((_DWORD *)v8 + 3) = y;
          v2 = 3;
          goto LABEL_11;
        }
        v19 = v44;
      }
    }
    v36 = v23;
    goto LABEL_58;
  }
LABEL_14:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v40);
  if ( v41[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v41);
LABEL_16:
  if ( v37[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
  return v2;
}
