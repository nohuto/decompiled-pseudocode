/*
 * XREFs of ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C
 * Callers:
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ?psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z @ 0xA135A (-psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z.c)
 */

struct _SURFOBJ *__userpurge psoSpGetComposite@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct _SPRITESTATE *a3,
        struct _RECTL *a4,
        unsigned int *a5)
{
  SURFOBJ *v6; // esi
  ULONG ClearBits; // eax
  ULONG v8; // edi
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  struct _SURFOBJ *Surface; // eax
  int v17; // [esp+0h] [ebp-1Ch]
  int v18; // [esp+4h] [ebp-18h]
  int v19; // [esp+Ch] [ebp-10h] BYREF
  ULONG v20; // [esp+10h] [ebp-Ch]
  unsigned int v21; // [esp+18h] [ebp-4h]

  v21 = a1;
  *(_DWORD *)a3 = -1;
  v6 = 0;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v19, (struct _EX_PUSH_LOCK *)(a2 + 376));
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a2 + 360), 1u, 0);
  v8 = ClearBits;
  v20 = ClearBits;
  if ( ClearBits != -1 )
  {
    v6 = *(SURFOBJ **)(a2 + 4 * ClearBits + 104);
    if ( v6 )
    {
      if ( v6->sizlBitmap.cx >= *(_DWORD *)(v21 + 8) - *(_DWORD *)v21
        && v6->sizlBitmap.cy >= *(_DWORD *)(v21 + 12) - *(_DWORD *)(v21 + 4) )
      {
LABEL_21:
        if ( v8 != -1 )
        {
          *(_DWORD *)a3 = v8;
          RtlSetBits((PRTL_BITMAP)(a2 + 360), v8, 1u);
        }
        goto LABEL_23;
      }
    }
  }
  vSpDeleteSurface(v6);
  if ( v8 != -1 )
    *(_DWORD *)(a2 + 4 * v8 + 104) = 0;
  v10 = -1;
  v21 = -1;
  v11 = *(_DWORD **)(a2 + 4);
  if ( v11 )
  {
    v12 = -1;
    do
    {
      v13 = v11[13] - v11[11];
      if ( v13 > v10 )
        v10 = v11[13] - v11[11];
      v14 = v11[14] - v11[12];
      if ( v14 > (int)v21 )
        v21 = v11[14] - v11[12];
      v9 = v13 * v14;
      if ( v9 > v12 )
        v12 = v9;
      v11 = (_DWORD *)v11[4];
    }
    while ( v11 );
    v8 = v20;
  }
  Surface = psoSpCreateSurface(0, (HDEV *)a2, (SIZEL)__PAIR64__(v21, v10), v9, v17, v18);
  v6 = Surface;
  if ( Surface )
  {
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 4 * v8 + 104) = Surface;
    Surface->fjBitmap |= 4u;
    goto LABEL_21;
  }
LABEL_23:
  if ( v19 )
  {
    ExReleasePushLockExclusiveEx(v19, 0);
    KeLeaveCriticalRegion();
  }
  return v6;
}
