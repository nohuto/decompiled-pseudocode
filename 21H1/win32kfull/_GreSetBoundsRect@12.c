/*
 * XREFs of _GreSetBoundsRect@12 @ 0xAC258
 * Callers:
 *     _NtGdiSetBoundsRect@12 @ 0xAC204 (_NtGdiSetBoundsRect@12.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GreSetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  int v3; // ebx
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // edi
  BOOL v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // eax
  LONG v15; // eax
  LONG v16; // esi
  LONG v17; // ecx
  LONG v18; // edx
  LONG v19; // esi
  LONG v20; // esi
  LONG v21; // esi
  LONG v22; // esi
  LONG v23; // esi
  LONG v24; // esi
  LONG v25; // eax
  LONG v26; // esi
  LONG v27; // ecx
  LONG v28; // edx
  LONG v29; // esi
  LONG v30; // esi
  LONG v31; // esi
  LONG v32; // esi
  LONG v33; // esi
  LONG v34; // esi
  int v35; // [esp-Ch] [ebp-60h]
  _DWORD v36[3]; // [esp+4h] [ebp-50h] BYREF
  int v37; // [esp+10h] [ebp-44h]
  _DWORD v38[3]; // [esp+14h] [ebp-40h] BYREF
  int v39; // [esp+20h] [ebp-34h]
  int v40; // [esp+24h] [ebp-30h]
  _DWORD *v41; // [esp+28h] [ebp-2Ch]
  struct _POINTL *v42; // [esp+2Ch] [ebp-28h]
  struct _POINTL v43; // [esp+30h] [ebp-24h] BYREF
  struct _POINTL v44; // [esp+38h] [ebp-1Ch]
  LONG x; // [esp+40h] [ebp-14h]
  LONG y; // [esp+44h] [ebp-10h]
  LONG v47; // [esp+48h] [ebp-Ch]
  LONG v48; // [esp+4Ch] [ebp-8h]

  v3 = 0;
  v42 = a2;
  memset(v38, 0, sizeof(v38));
  XDCOBJ::vLock((XDCOBJ *)v38, a1);
  if ( !v38[0] )
    return v3;
  v39 = 0;
  if ( a3 < 0 )
  {
    v4 = (_DWORD *)(v38[0] + 1096);
    v35 = 32;
  }
  else
  {
    if ( (a3 & 0x4000) == 0 )
    {
      v4 = (_DWORD *)(v38[0] + 1128);
      v5 = 128;
      goto LABEL_5;
    }
    v4 = (_DWORD *)(v38[0] + 1112);
    v35 = 64;
  }
  v5 = v35;
LABEL_5:
  v6 = v5 & *(_DWORD *)(v38[0] + 24);
  v41 = v4;
  v7 = a3 & 0xC000;
  v40 = v5;
  v8 = !ERECTL::bWrapped((ERECTL *)v4);
  if ( v6 )
    v10 = 2 * v8 + 5;
  else
    v10 = 2 * v8 + 9;
  v11 = v10 | v7;
  v37 = v10 | v7;
  if ( (a3 & 1) != 0 )
  {
    v12 = v41;
    v41[1] = 0x7FFFFFFF;
    *v12 = 0x7FFFFFFF;
    v12[3] = 0x80000000;
    v12[2] = 0x80000000;
    v9 = v38[0];
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_10;
  if ( (a3 & 0xC000) != 0 )
    goto LABEL_90;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v36, (struct XDCOBJ *)v38, 516);
  if ( (*(_BYTE *)(v36[0] + 56) & 1) != 0 )
  {
    if ( EXFORMOBJ::bXform((EXFORMOBJ *)v36, v42, 2u) )
      goto LABEL_90;
    goto LABEL_25;
  }
  v43 = *v42;
  v44 = v42[1];
  x = v43.x;
  y = v42[1].y;
  v47 = v42[1].x;
  v48 = v42->y;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v36, &v43, 4u) )
  {
LABEL_25:
    v39 = 1;
    goto LABEL_90;
  }
  v15 = v43.x;
  v16 = v43.x;
  v17 = v44.x;
  if ( v43.x >= v44.x )
    v16 = v44.x;
  v18 = x;
  if ( v16 >= x )
  {
    v19 = x;
  }
  else if ( v43.x >= v44.x )
  {
    v19 = v44.x;
  }
  else
  {
    v19 = v43.x;
  }
  if ( v19 >= v47 )
  {
    v21 = v47;
  }
  else
  {
    v20 = v43.x;
    if ( v43.x >= v44.x )
      v20 = v44.x;
    if ( v20 >= x )
    {
      v21 = x;
    }
    else if ( v43.x >= v44.x )
    {
      v21 = v44.x;
    }
    else
    {
      v21 = v43.x;
    }
  }
  v42->x = v21;
  v22 = v15;
  if ( v15 <= v17 )
    v22 = v17;
  if ( v22 <= v18 )
  {
    v23 = v18;
  }
  else if ( v15 <= v17 )
  {
    v23 = v17;
  }
  else
  {
    v23 = v15;
  }
  if ( v23 <= v47 )
  {
    v15 = v47;
  }
  else
  {
    v24 = v15;
    if ( v15 <= v17 )
      v24 = v17;
    if ( v24 <= v18 )
    {
      v15 = v18;
    }
    else if ( v15 <= v17 )
    {
      v15 = v17;
    }
  }
  v42[1].x = v15;
  v25 = v43.y;
  v26 = v43.y;
  v27 = v44.y;
  if ( v43.y >= v44.y )
    v26 = v44.y;
  v28 = y;
  if ( v26 >= y )
  {
    v29 = y;
  }
  else if ( v43.y >= v44.y )
  {
    v29 = v44.y;
  }
  else
  {
    v29 = v43.y;
  }
  if ( v29 >= v48 )
  {
    v31 = v48;
  }
  else
  {
    v30 = v43.y;
    if ( v43.y >= v44.y )
      v30 = v44.y;
    if ( v30 >= y )
    {
      v31 = y;
    }
    else if ( v43.y >= v44.y )
    {
      v31 = v44.y;
    }
    else
    {
      v31 = v43.y;
    }
  }
  v42->y = v31;
  v32 = v25;
  if ( v25 <= v27 )
    v32 = v27;
  if ( v32 <= v28 )
  {
    v33 = v28;
  }
  else if ( v25 <= v27 )
  {
    v33 = v27;
  }
  else
  {
    v33 = v25;
  }
  if ( v33 <= v48 )
  {
    v25 = v48;
  }
  else
  {
    v34 = v25;
    if ( v25 <= v27 )
      v34 = v27;
    if ( v34 <= v28 )
    {
      v25 = v28;
    }
    else if ( v25 <= v27 )
    {
      v25 = v27;
    }
  }
  v42[1].y = v25;
LABEL_90:
  ERECTL::operator|=(v41, v42);
  v9 = v38[0];
  if ( !v39 )
  {
    v11 = v37;
LABEL_10:
    v13 = v40;
    if ( (a3 & 4) != 0 )
    {
      *(_DWORD *)(v9 + 24) |= v40;
      v9 = v38[0];
    }
    if ( (a3 & 8) != 0 )
    {
      *(_DWORD *)(v9 + 24) &= ~v13;
      v9 = v38[0];
    }
    v3 = v11;
  }
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v38);
  return v3;
}
