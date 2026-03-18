/*
 * XREFs of ?DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x907DA
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     ?FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z @ 0x91098 (-FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge DrawBox@<eax>(HDC a1@<edx>, HDC a2@<ecx>, HDC a3, struct tagRECT *a4, unsigned int a5)
{
  int v6; // eax
  int v7; // esi
  int v8; // ebx
  HDC v9; // eax
  HDC v10; // ecx
  HDC v11; // edx
  ERECTL *v12; // ebx
  unsigned int v13; // esi
  unsigned __int16 *v14; // esi
  int i; // ebx
  int v16; // ecx
  HDC *v18; // eax
  const RECT *v19; // [esp+0h] [ebp-5Ch]
  HBRUSH v20; // [esp+4h] [ebp-58h]
  _DWORD v21[4]; // [esp+Ch] [ebp-50h] BYREF
  int v22; // [esp+1Ch] [ebp-40h]
  HDC v23; // [esp+20h] [ebp-3Ch]
  HDC v24; // [esp+24h] [ebp-38h]
  int v25; // [esp+28h] [ebp-34h]
  int v26; // [esp+2Ch] [ebp-30h]
  ERECTL *v27; // [esp+30h] [ebp-2Ch]
  unsigned int v28; // [esp+34h] [ebp-28h]
  int v29; // [esp+38h] [ebp-24h]
  HDC v30; // [esp+3Ch] [ebp-20h]
  int v31; // [esp+40h] [ebp-1Ch]
  int v32; // [esp+44h] [ebp-18h]
  int v33; // [esp+48h] [ebp-14h]
  int v34; // [esp+4Ch] [ebp-10h]
  int v35; // [esp+50h] [ebp-Ch]

  v28 = (unsigned int)L"nmlkji";
  v30 = a1;
  v25 = (unsigned __int16)a3 & 0x708;
  if ( ((unsigned __int8)a3 & 2) != 0 )
  {
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v18 = (HDC *)_ghbrWhite;
    v31 = 0;
    goto LABEL_19;
  }
  if ( ((unsigned __int16)a3 & 0xC000) != 0 )
  {
    v6 = *(_DWORD *)(_gpsi + 4192);
    v34 = v6;
    v33 = v6;
    v32 = v6;
  }
  else
  {
    v32 = *(_DWORD *)(_gpsi + 4256);
    v33 = *(_DWORD *)(_gpsi + 4252);
    v34 = *(_DWORD *)(_gpsi + 4248);
    v6 = *(_DWORD *)(_gpsi + 4232);
  }
  v35 = v6;
  if ( ((unsigned __int16)a3 & 0x300) != 0 )
  {
    v7 = *(_DWORD *)(_gpsi + 4228);
  }
  else if ( ((unsigned __int16)a3 & 0x708) == 0x408 )
  {
    v7 = *(_DWORD *)(_gpsi + 4248);
  }
  else
  {
    v7 = *(_DWORD *)(_gpsi + 4188);
  }
  v31 = v7;
  if ( ((unsigned __int8)a3 & 1) != 0 )
  {
    v18 = (HDC *)_ghbrBlack;
LABEL_19:
    FillRect(*v18, v19, v20);
    a1 = v30;
    goto LABEL_9;
  }
  if ( ((unsigned __int8)a3 & 4) == 0 )
    v28 = (unsigned int)L"gfedcb";
LABEL_9:
  v8 = *((_DWORD *)a1 + 1);
  v9 = (HDC)(*((_DWORD *)a1 + 2) - *(_DWORD *)a1);
  v29 = *(_DWORD *)a1;
  v10 = (HDC)(*((_DWORD *)a1 + 3) - v8);
  v24 = v9;
  v26 = v8;
  v23 = v10;
  if ( (int)v9 < (int)v10 )
  {
    v11 = v9;
    v30 = v9;
  }
  else
  {
    v11 = v10;
    v30 = v10;
  }
  v12 = (ERECTL *)(v29 + ((char *)v9 - (char *)v11) / 2);
  v27 = v12;
  v30 = (HDC)(v26 + ((char *)v10 - (char *)v30) / 2);
  if ( v25 == 1032 && (*(_WORD *)(_gpsi + 6240) < 8u || *(_DWORD *)(_gpsi + 4248) == 0xFFFFFF) )
  {
    GreSetBkColor(a2);
    v21[2] = v24;
    v21[3] = v23;
    v29 = GreSetTextColor(a2);
    v21[1] = v30;
    v21[0] = v12;
    v22 = *(_DWORD *)(_gpsi + 4416);
    GrePolyPatBlt(a2, 0xF00021u, (struct XDCOBJ *)v21, 1u, v22);
    GreSetBkColor(a2);
    v13 = v28;
  }
  else
  {
    v13 = v28;
    v29 = GreSetTextColor(a2);
    GreExtTextOutWInternal(a2, v12, (struct XDCOBJ *)v30, 0, 0, (unsigned __int16 *)v28, (struct tagRECT *)1, 0, 0, 0);
  }
  v14 = (unsigned __int16 *)(v13 + 2);
  for ( i = 1; i < 5; ++i )
  {
    GreSetTextColor(a2);
    GreExtTextOutWInternal(a2, v27, (struct XDCOBJ *)v30, 0, 0, v14++, (struct tagRECT *)1, 0, 0, 0);
  }
  if ( ((unsigned __int16)a3 & 0x400) != 0 )
  {
    GreSetTextColor(a2);
    FlipUserTextOutW(v30, (unsigned int)v14, v16, (const unsigned __int16 *)v19, (int)v20);
  }
  GreSetTextColor(a2);
  return 1;
}
