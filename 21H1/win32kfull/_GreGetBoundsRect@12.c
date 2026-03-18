/*
 * XREFs of _GreGetBoundsRect@12 @ 0xAD1EA
 * Callers:
 *     _NtGdiGetBoundsRect@12 @ 0xAD184 (_NtGdiGetBoundsRect@12.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  int v4; // ebx
  DC *v5; // edx
  DC *v7; // ecx
  struct REGION *v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  LONG v12; // esi
  LONG v13; // edi
  int v14; // eax
  LONG v15; // ecx
  _DWORD *v16; // eax
  LONG v17; // ecx
  struct _POINTL *v18; // esi
  LONG v19; // ecx
  LONG v20; // edx
  LONG v21; // ecx
  LONG v22; // eax
  LONG *v23; // ecx
  ERECTL *v24; // ecx
  LONG *p_y; // edi
  LONG *v26; // esi
  struct _POINTL *v27; // esi
  LONG v28; // eax
  LONG v29; // edi
  LONG v30; // ecx
  LONG v31; // edx
  LONG v32; // edi
  LONG v33; // edi
  LONG v34; // edi
  LONG v35; // edi
  LONG v36; // edi
  LONG v37; // edi
  LONG v38; // ecx
  LONG v39; // eax
  LONG v40; // edi
  LONG v41; // edx
  LONG v42; // edi
  LONG v43; // edi
  LONG v44; // edi
  LONG v45; // edi
  LONG v46; // edi
  LONG v47; // edi
  DC *v48[3]; // [esp+10h] [ebp-80h] BYREF
  struct _POINTL *v49; // [esp+1Ch] [ebp-74h]
  LONG *v50; // [esp+20h] [ebp-70h]
  int v51; // [esp+24h] [ebp-6Ch] BYREF
  int v52; // [esp+28h] [ebp-68h]
  int v53; // [esp+2Ch] [ebp-64h]
  int v54; // [esp+30h] [ebp-60h]
  LONG v55; // [esp+34h] [ebp-5Ch]
  LONG v56; // [esp+38h] [ebp-58h]
  _BYTE v57[20]; // [esp+3Ch] [ebp-54h] BYREF
  _DWORD v58[3]; // [esp+50h] [ebp-40h] BYREF
  __int16 v59; // [esp+5Ch] [ebp-34h]
  struct _POINTL v60; // [esp+6Ch] [ebp-24h] BYREF
  LONG v61; // [esp+74h] [ebp-1Ch]
  LONG v62; // [esp+78h] [ebp-18h]
  LONG x; // [esp+7Ch] [ebp-14h]
  LONG y; // [esp+80h] [ebp-10h]
  LONG v65; // [esp+84h] [ebp-Ch]
  LONG v66; // [esp+88h] [ebp-8h]

  memset(v48, 0, sizeof(v48));
  v49 = a2;
  XDCOBJ::vLock((XDCOBJ *)v48, a1);
  v4 = 3;
  if ( !v48[0] )
    return 0;
  v50 = 0;
  if ( a3 < 0 )
  {
    v24 = (DC *)((char *)v48[0] + 1096);
LABEL_33:
    if ( ERECTL::bWrapped(v24) )
      goto LABEL_5;
    a2->x = *v23;
    p_y = &a2->y;
    *p_y++ = v23[1];
    *p_y = v23[2];
    p_y[1] = v23[3];
LABEL_27:
    if ( (a3 & 1) != 0 )
    {
      v23[1] = 0x7FFFFFFF;
      *v23 = 0x7FFFFFFF;
      v23[3] = 0x80000000;
      v23[2] = 0x80000000;
      v5 = v48[0];
    }
    goto LABEL_6;
  }
  if ( (a3 & 0x4000) != 0 )
  {
    v24 = (DC *)((char *)v48[0] + 1112);
    goto LABEL_33;
  }
  if ( !ERECTL::bWrapped((DC *)((char *)v48[0] + 1128)) )
  {
    v59 = 256;
    memset(v58, 0, sizeof(v58));
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, (struct XDCOBJ *)v48, 0);
    if ( (v57[12] & 1) == 0 )
    {
      v4 = XDCOBJ::bFullScreen(v48) != 0;
      goto LABEL_23;
    }
    if ( DC::prgnRao(v48[0]) )
      v8 = DC::prgnRao(v7);
    else
      v8 = DC::prgnVisSnap(v7);
    v51 = *((_DWORD *)v8 + 16);
    v52 = *((_DWORD *)v8 + 17);
    v53 = *((_DWORD *)v8 + 18);
    v54 = *((_DWORD *)v8 + 19);
    v10 = *(_DWORD *)(v9 + 28) & 1;
    v11 = *((_DWORD *)v48[0] + 2 * v10 + 262);
    v12 = v51 - v11;
    v13 = v53 - v11;
    v14 = *((_DWORD *)v48[0] + 2 * v10 + 263);
    v55 = v52 - v14;
    v15 = v54 - v14;
    v16 = (_DWORD *)((char *)v48[0] + 1128);
    v56 = v15;
    v17 = *((_DWORD *)v48[0] + 282);
    v50 = (LONG *)((char *)v48[0] + 1128);
    if ( v17 <= v12 )
      v17 = v12;
    v18 = v49;
    v49->x = v17;
    v19 = v16[2];
    if ( v19 >= v13 )
      v19 = v13;
    v20 = v55;
    v18[1].x = v19;
    v21 = v16[1];
    if ( v21 <= v20 )
      v21 = v20;
    v18->y = v21;
    v22 = v16[3];
    if ( v22 >= v56 )
      v22 = v56;
    v18[1].y = v22;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v51, (struct XDCOBJ *)v48, 1026);
    if ( v51 )
    {
      if ( (*(_BYTE *)(v51 + 56) & 1) != 0 )
      {
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)&v51, v18, 2u) )
        {
LABEL_23:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v57);
          if ( v58[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v58);
          v5 = v48[0];
          if ( v4 != 3 )
            goto LABEL_6;
          v23 = v50;
          goto LABEL_27;
        }
      }
      else
      {
        v60.x = v18->x;
        v26 = &v18->y;
        v60.y = *v26++;
        v61 = *v26;
        v62 = v26[1];
        v27 = v49;
        x = v49->x;
        y = v49[1].y;
        v65 = v49[1].x;
        v66 = v49->y;
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)&v51, &v60, 4u) )
        {
          v28 = v60.x;
          v29 = v60.x;
          v30 = v61;
          if ( v60.x >= v61 )
            v29 = v61;
          v31 = x;
          if ( v29 >= x )
          {
            v32 = x;
          }
          else if ( v60.x >= v61 )
          {
            v32 = v61;
          }
          else
          {
            v32 = v60.x;
          }
          if ( v32 >= v65 )
          {
            v34 = v65;
          }
          else
          {
            v33 = v60.x;
            if ( v60.x >= v61 )
              v33 = v61;
            if ( v33 >= x )
            {
              v34 = x;
            }
            else if ( v60.x >= v61 )
            {
              v34 = v61;
            }
            else
            {
              v34 = v60.x;
            }
          }
          v27->x = v34;
          v35 = v28;
          if ( v28 <= v30 )
            v35 = v30;
          if ( v35 <= v31 )
          {
            v36 = v31;
          }
          else if ( v28 <= v30 )
          {
            v36 = v30;
          }
          else
          {
            v36 = v28;
          }
          if ( v36 <= v65 )
          {
            v28 = v65;
          }
          else
          {
            v37 = v28;
            if ( v28 <= v30 )
              v37 = v30;
            if ( v37 <= v31 )
            {
              v28 = v31;
            }
            else if ( v28 <= v30 )
            {
              v28 = v30;
            }
          }
          v38 = v62;
          v27[1].x = v28;
          v39 = v60.y;
          v40 = v60.y;
          if ( v60.y >= v38 )
            v40 = v38;
          v41 = y;
          if ( v40 >= y )
          {
            v42 = y;
          }
          else if ( v60.y >= v38 )
          {
            v42 = v38;
          }
          else
          {
            v42 = v60.y;
          }
          if ( v42 >= v66 )
          {
            v44 = v66;
          }
          else
          {
            v43 = v60.y;
            if ( v60.y >= v38 )
              v43 = v38;
            if ( v43 >= y )
            {
              v44 = y;
            }
            else if ( v60.y >= v38 )
            {
              v44 = v38;
            }
            else
            {
              v44 = v60.y;
            }
          }
          v27->y = v44;
          v45 = v39;
          if ( v39 <= v38 )
            v45 = v38;
          if ( v45 <= v41 )
          {
            v46 = v41;
          }
          else if ( v39 <= v38 )
          {
            v46 = v38;
          }
          else
          {
            v46 = v39;
          }
          if ( v46 <= v66 )
          {
            v39 = v66;
          }
          else
          {
            v47 = v39;
            if ( v39 <= v38 )
              v47 = v38;
            if ( v47 <= v41 )
            {
              v39 = v41;
            }
            else if ( v39 <= v38 )
            {
              v39 = v38;
            }
          }
          v27[1].y = v39;
          goto LABEL_23;
        }
      }
    }
    v4 = 0;
    goto LABEL_23;
  }
LABEL_5:
  v4 = 1;
LABEL_6:
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v48);
  return v4;
}
