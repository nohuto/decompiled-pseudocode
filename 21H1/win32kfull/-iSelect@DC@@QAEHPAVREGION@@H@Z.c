/*
 * XREFs of ?iSelect@DC@@QAEHPAVREGION@@H@Z @ 0x5A6CE
 * Callers:
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     _NtGdiSelectClipPath@8 @ 0x211B56 (_NtGdiSelectClipPath@8.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vGet_sizlWindow@DC@@QBEXPAUtagSIZE@@@Z @ 0x24754A (-vGet_sizlWindow@DC@@QBEXPAUtagSIZE@@@Z.c)
 */

int __thiscall DC::iSelect(DC *this, struct REGION *a2, int a3)
{
  LONG left; // ebx
  struct REGION *v5; // esi
  int v7; // esi
  RGNOBJ *v8; // ecx
  RGNOBJ *v9; // ecx
  LONG top; // edx
  int v11; // esi
  LONG right; // esi
  int v13; // ecx
  int v14; // eax
  LONG v15; // esi
  int v16; // eax
  struct tagSIZE v17; // [esp+Ch] [ebp-3Ch] BYREF
  char v18; // [esp+17h] [ebp-31h] BYREF
  _DWORD v19[2]; // [esp+18h] [ebp-30h] BYREF
  int v20; // [esp+20h] [ebp-28h]
  int v21; // [esp+24h] [ebp-24h] BYREF
  int v22; // [esp+28h] [ebp-20h]
  struct REGION *v23; // [esp+2Ch] [ebp-1Ch] BYREF
  LONG cy; // [esp+30h] [ebp-18h] BYREF
  struct _RECTL v25; // [esp+34h] [ebp-14h] BYREF

  left = 0;
  v20 = 0;
  v5 = (struct REGION *)*((_DWORD *)this + 26);
  if ( a3 != 5 && (a3 != 1 || !a2 || v5) )
  {
    v23 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
    if ( !v19[0] )
      goto LABEL_21;
    if ( v5 )
    {
      cy = (LONG)v5;
      v7 = RGNOBJ::iCombine((RGNOBJ *)v19, (struct RGNOBJ *)&cy, (struct RGNOBJ *)&v23, a3);
      v20 = v7;
      if ( !v7 )
      {
LABEL_41:
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v19);
LABEL_21:
        if ( v19[1] == 1 )
        {
          v8 = (RGNOBJ *)v19;
LABEL_44:
          RGNOBJ::vDeleteRGNOBJ(v8);
          return v20;
        }
        return v20;
      }
      ++*(_DWORD *)(v19[0] + 24);
      *((_DWORD *)this + 26) = v19[0];
      DC::vReleaseRao(this);
      if ( --*(_DWORD *)(cy + 24) )
      {
LABEL_20:
        if ( v7 )
          goto LABEL_21;
        goto LABEL_41;
      }
      v9 = (RGNOBJ *)&cy;
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v21);
      v17.cx = 0;
      v17.cy = 0;
      if ( v21 )
      {
        DC::vGet_sizlWindow(this, &v17);
        top = 0;
        v11 = *((_DWORD *)this + 9);
        *(struct tagSIZE *)&v25.right = v17;
        v25.left = 0;
        v25.top = 0;
        cy = v17.cy;
        if ( *((_DWORD *)this + 126) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v18);
          if ( ((unsigned int)&loc_20000 & *(_DWORD *)(v11 + 24)) != 0 && *(int *)(*((_DWORD *)this + 126) + 72) < 0 )
            ERECTL::bOffsetAdd((ERECTL *)&v25, (const struct _POINTL *)(v11 + 1836), 0);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
          right = v25.right;
          top = v25.top;
          left = v25.left;
          cy = v25.bottom;
        }
        else
        {
          right = v17.cx;
        }
        v13 = *((_DWORD *)this + 7) & 1;
        v14 = *((_DWORD *)this + 2 * v13 + 262);
        v15 = right - v14;
        v25.left = left - v14;
        v16 = *((_DWORD *)this + 2 * v13 + 263);
        v25.right = v15;
        v25.bottom = cy - v16;
        v25.top = top - v16;
        RGNOBJ::vSet((RGNOBJ *)&v21, &v25);
        v7 = RGNOBJ::iCombine((RGNOBJ *)v19, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v23, a3);
        v20 = v7;
        if ( v7 )
        {
          ++*(_DWORD *)(v19[0] + 24);
          *((_DWORD *)this + 26) = v19[0];
          DC::vReleaseRao(this);
        }
      }
      else
      {
        v7 = 0;
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v21);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
      if ( v22 != 1 )
        goto LABEL_20;
      v9 = (RGNOBJ *)&v21;
    }
    RGNOBJ::vDeleteRGNOBJ(v9);
    goto LABEL_20;
  }
  if ( !a2 )
  {
    v20 = 2;
    if ( !v5 )
      return v20;
    v23 = v5;
    --*((_DWORD *)v5 + 6);
    if ( !*((_DWORD *)v23 + 6) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    *((_DWORD *)this + 26) = 0;
LABEL_7:
    DC::vReleaseRao(this);
    return v20;
  }
  v23 = a2;
  cy = (LONG)v5;
  if ( v5 && *((_DWORD *)v5 + 6) == 1 )
  {
    if ( !RGNOBJ::bCopy((RGNOBJ *)&cy, (struct RGNOBJ *)&v23) )
      return v20;
    v20 = RGNOBJ::iComplexity((RGNOBJ *)&cy);
    *((_DWORD *)this + 26) = cy;
    goto LABEL_7;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21, *((_DWORD *)a2 + 13));
  if ( v21 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v23);
    ++*(_DWORD *)(v21 + 24);
    v20 = RGNOBJ::iComplexity((RGNOBJ *)&v21);
    *((_DWORD *)this + 26) = v21;
    DC::vReleaseRao(this);
    if ( v5 )
    {
      if ( !--*(_DWORD *)(cy + 24) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&cy);
    }
  }
  if ( v22 == 1 )
  {
    v8 = (RGNOBJ *)&v21;
    goto LABEL_44;
  }
  return v20;
}
