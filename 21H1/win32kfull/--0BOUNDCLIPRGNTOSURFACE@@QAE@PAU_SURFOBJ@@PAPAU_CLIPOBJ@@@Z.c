/*
 * XREFs of ??0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1CC939
 * Callers:
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bContain@ERECTL@@QBEHABU_RECTL@@@Z @ 0x1CCAF3 (-bContain@ERECTL@@QBEHABU_RECTL@@@Z.c)
 */

BOUNDCLIPRGNTOSURFACE *__thiscall BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE(
        BOUNDCLIPRGNTOSURFACE *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ **a3)
{
  struct _CLIPOBJ *v4; // edx
  LONG *v5; // esi
  LONG left; // eax
  struct REGION *v8; // [esp-8h] [ebp-54h]
  _DWORD v9[2]; // [esp+10h] [ebp-3Ch] BYREF
  _DWORD v10[2]; // [esp+18h] [ebp-34h] BYREF
  struct RGNOBJ *v11; // [esp+20h] [ebp-2Ch]
  struct _CLIPOBJ **v12; // [esp+24h] [ebp-28h]
  struct _RECTL v13; // [esp+28h] [ebp-24h] BYREF
  struct _RECTL v14; // [esp+38h] [ebp-14h] BYREF

  v12 = a3;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 28) = 1;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 1;
  if ( a3 )
  {
    v4 = *a3;
    if ( *a3 )
    {
      v14.left = 0;
      v14.top = 0;
      *(SIZEL *)&v14.right = a2->sizlBitmap;
      v5 = (LONG *)(v4[2].iUniq + 64);
      v11 = (struct RGNOBJ *)&v4[2];
      v13.left = *v5++;
      v13.top = *v5++;
      v13.right = *v5;
      v13.bottom = v5[1];
      if ( !ERECTL::bContain((ERECTL *)&v14, &v13) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v9);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v9);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
        left = v13.left;
        *((_DWORD *)this + 31) = v13.left;
        if ( left
          && v9[0]
          && v10[0]
          && (RGNOBJ::vSet((RGNOBJ *)v10, &v14), RGNOBJ::bMerge((RGNOBJ *)v9, v11, (struct RGNOBJ *)v10, 8u))
          && RGNOBJ::iComplexity((RGNOBJ *)v9) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v13, (struct RGNOBJ *)v9);
          v8 = (struct REGION *)v13.left;
          *((_DWORD *)this + 31) = v13.left;
          XCLIPOBJ::vSetup(this, v8, (struct ERECTL *)&v14, 1);
          *v12 = (struct _CLIPOBJ *)this;
        }
        else
        {
          *((_DWORD *)this + 32) = 0;
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v10);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
        if ( v10[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v9);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
        if ( v9[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
        if ( v13.top == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
      }
    }
  }
  return this;
}
