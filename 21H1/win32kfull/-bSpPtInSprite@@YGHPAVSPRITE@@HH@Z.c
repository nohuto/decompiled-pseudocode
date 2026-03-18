/*
 * XREFs of ?bSpPtInSprite@@YGHPAVSPRITE@@HH@Z @ 0x1DE2FD
 * Callers:
 *     ?GdiPtInSprite@@YGHPAUHDEV__@@PAUHWND__@@HH@Z @ 0x1DB02B (-GdiPtInSprite@@YGHPAUHDEV__@@PAUHWND__@@HH@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

BOOL __userpurge bSpPtInSprite@<eax>(LONG a1@<edx>, int a2@<ecx>, LONG a3, int a4, int a5)
{
  BOOL v5; // ebx
  int *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  struct SPRITE *v12; // ecx
  _DWORD *v13; // ebx
  struct _SURFOBJ *v14; // [esp+0h] [ebp-ACh]
  struct _SURFOBJ *v15; // [esp+0h] [ebp-ACh]
  struct _RECTL *v16; // [esp+4h] [ebp-A8h]
  struct _RECTL *v17; // [esp+4h] [ebp-A8h]
  _BYTE v18[112]; // [esp+10h] [ebp-9Ch] BYREF
  int v19; // [esp+80h] [ebp-2Ch] BYREF
  int v20; // [esp+84h] [ebp-28h]
  int v21; // [esp+88h] [ebp-24h]
  struct SPRITE *v22; // [esp+8Ch] [ebp-20h]
  LONG v23; // [esp+90h] [ebp-1Ch]
  struct _POINTL v24; // [esp+94h] [ebp-18h] BYREF
  int v25; // [esp+9Ch] [ebp-10h]
  char *v26; // [esp+A0h] [ebp-Ch]

  v5 = 0;
  v23 = a1;
  v20 = 0;
  v21 = 0;
  if ( !a2 )
    return 0;
  v8 = *(int **)(a2 + 12);
  v19 = *v8;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v19);
  v22 = (struct SPRITE *)v8[160];
  v24.x = v23;
  v25 = v23 + 1;
  v26 = (char *)(a3 + 1);
  v9 = *(_DWORD *)(a2 + 12);
  v24.y = a3;
  v10 = *(_DWORD *)(*(_DWORD *)(v9 + 16) + 72);
  if ( (*(_BYTE *)(v10 + 16) & 2) != 0 )
    v11 = **(_DWORD **)(v10 + 76) | *(_DWORD *)(*(_DWORD *)(v10 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v10 + 76) + 8);
  else
    v11 = -1;
  if ( bIntersect(a2 + 44, &v24) )
  {
    v12 = v22;
    v20 = -v23;
    v21 = -a3;
    v23 = *((_DWORD *)v22 + 8);
    *(_DWORD *)v23 = 0;
    vSpComposite(v12, &v24, v14, v16);
    v13 = (_DWORD *)v23;
    if ( (v11 & *(_DWORD *)v23) != 0 )
    {
      v5 = 1;
    }
    else
    {
      *(_DWORD *)v23 = -1;
      vSpComposite(v22, &v24, v15, v17);
      v5 = (v11 & *v13) != v11;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v18);
  return v5;
}
