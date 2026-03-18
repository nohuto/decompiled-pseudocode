/*
 * XREFs of _InitFNTCache@0 @ 0xDF48C
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YGXXZ @ 0xD62E6 (-vCleanUpFntCacheInternal@@YGXXZ.c)
 *     QueryFontReg @ 0xDF742 (QueryFontReg.c)
 *     ?GetGreRegKey@@YGJPAPAXKPBG@Z @ 0xDF7D8 (-GetGreRegKey@@YGJPAPAXKPBG@Z.c)
 *     bFntCacheDisabled @ 0xDF87C (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0xDF960 (bServicingStackModifiedFonts.c)
 *     bSetFntCacheReg @ 0xDF9A2 (bSetFntCacheReg.c)
 *     vGetLastBootTimeStatus @ 0xDF9F4 (vGetLastBootTimeStatus.c)
 *     _ComputeFileviewCheckSum@8 @ 0xDFA40 (_ComputeFileviewCheckSum@8.c)
 *     ?bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z @ 0xDFAC4 (-bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z.c)
 *     vGetFontDriverLWT @ 0xDFB60 (vGetFontDriverLWT.c)
 *     bInitCacheTable @ 0xED634 (bInitCacheTable.c)
 */

void __stdcall InitFNTCache()
{
  int v0; // edi
  _DWORD *v1; // esi
  int v2; // eax
  int FontReg; // eax
  int v4; // ebx
  struct _FILEVIEW *v5; // ecx
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int inited; // eax
  char v13; // bl
  _DWORD *v14; // edx
  unsigned int v15; // ecx
  int CurrentServiceSessionId; // eax
  unsigned int v17; // [esp+0h] [ebp-40h]
  int v18; // [esp+0h] [ebp-40h]
  const unsigned __int16 *v19; // [esp+4h] [ebp-3Ch]
  int *v20; // [esp+4h] [ebp-3Ch]
  USHORT AnsiCodePage[2]; // [esp+Ch] [ebp-34h] BYREF
  int v22; // [esp+10h] [ebp-30h] BYREF
  int v23; // [esp+14h] [ebp-2Ch] BYREF
  USHORT OemCodePage[2]; // [esp+18h] [ebp-28h] BYREF
  int v25; // [esp+1Ch] [ebp-24h] BYREF
  int v26; // [esp+20h] [ebp-20h]
  int v27; // [esp+24h] [ebp-1Ch]
  int v28; // [esp+28h] [ebp-18h]
  int v29; // [esp+2Ch] [ebp-14h]
  int v30; // [esp+30h] [ebp-10h] BYREF
  int v31; // [esp+34h] [ebp-Ch]
  int v32; // [esp+38h] [ebp-8h] BYREF
  int v33; // [esp+3Ch] [ebp-4h]

  v0 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v22 = 0;
  v23 = 0;
  *(_DWORD *)AnsiCodePage = 0;
  *(_DWORD *)OemCodePage = 0;
  v25 = _ghsemFntCache;
  GreAcquireSemaphore(_ghsemFntCache);
  dword_274064 = 0;
  if ( GetGreRegKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", v17, v19) < 0
    || bFntCacheDisabled() )
  {
    v1 = (_DWORD *)dword_274068;
    goto LABEL_28;
  }
  v1 = PALLOCMEM2(0x50u, 1128682580, 1);
  dword_274068 = (int)v1;
  if ( !v1 )
    goto LABEL_28;
  if ( G_fServiceSession )
  {
    v2 = bSetFntCacheReg(0, 1);
    v1 = (_DWORD *)dword_274068;
    if ( !v2 )
      goto LABEL_28;
  }
  *v1 = 0;
  v1[1] = 0;
  v1[4] = 0;
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
  vGetLastBootTimeStatus();
  vGetFontDriverLWT(&v32, &v30);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts", (int)&v22);
  v4 = v22;
  if ( FontReg )
  {
    v4 = v22 + 40;
    QueryFontReg(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts",
      (int)&v23);
    v0 = v26;
  }
  if ( bServicingStackModifiedFonts() || !bMapFileRetainHandle(0, v5, v18, v20) )
  {
    v1 = (_DWORD *)dword_274068;
  }
  else
  {
    v1 = (_DWORD *)dword_274068;
    *(_DWORD *)dword_274068 = *(_DWORD *)(dword_274068 + 40);
  }
  v6 = (_DWORD *)*v1;
  if ( !*v1 )
  {
    if ( !G_fServiceSession )
      goto LABEL_28;
    inited = bInitCacheTable(v4, v23, AnsiCodePage[0], v28, v29, v0, v27, v32, v33, v30, v31);
    goto LABEL_26;
  }
  if ( !*v6 )
    goto LABEL_23;
  v7 = v1[12];
  if ( v7 != v6[6] )
    goto LABEL_23;
  v8 = (_DWORD *)*v1;
  if ( *v8 != ComputeFileviewCheckSum(v6 + 1, v7 - 4) || v8[12] != v30 || v8[13] != v31 )
  {
    v1 = (_DWORD *)dword_274068;
LABEL_23:
    v10 = v27;
    v11 = v26;
LABEL_24:
    if ( !G_fServiceSession )
      goto LABEL_28;
    inited = bInitCacheTable(v4, v23, AnsiCodePage[0], v28, v29, v11, v10, v32, v33, v30, v31);
LABEL_26:
    v1 = (_DWORD *)dword_274068;
    if ( inited )
      dword_274064 = 2;
    goto LABEL_28;
  }
  v1 = (_DWORD *)dword_274068;
  if ( v8[3] != AnsiCodePage[0] )
    goto LABEL_23;
  v9 = *(_DWORD *)(dword_274068 + 8);
  if ( (v9 & 1) != 0 )
    goto LABEL_23;
  if ( G_fServiceSession )
  {
    if ( (v9 & 2) != 0 || v8[10] != v32 || v8[11] != v33 )
      goto LABEL_23;
    v11 = v26;
    v10 = v27;
    if ( v28 != v8[14] || v29 != v8[15] || v26 != v8[16] || v27 != v8[17] )
      goto LABEL_24;
  }
  dword_274064 = 1;
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  v1 = (_DWORD *)dword_274068;
  if ( CurrentServiceSessionId
    && v28 == *(_DWORD *)(*(_DWORD *)dword_274068 + 56)
    && v29 == *(_DWORD *)(*(_DWORD *)dword_274068 + 60) )
  {
    dword_274064 |= 4u;
  }
LABEL_28:
  v13 = dword_274064;
  if ( (dword_274064 & 3) != 0 )
  {
    v14 = (_DWORD *)*v1;
    v15 = *v1 + ((80 * *(_DWORD *)(*v1 + 16) + 327) & 0xFFFFFFF8);
    v1[5] = v15;
    v1[6] = v15 + v14[9];
    v1[7] = v15 + v14[7] + v14[8];
    v1[1] = v14[5];
    if ( (v13 & 1) != 0 )
      bSetFntCacheReg(0, 0);
    else
      v1[3] = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
}
