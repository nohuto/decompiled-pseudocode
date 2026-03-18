/*
 * XREFs of ?bTrimMoveWithRegion@METAREGION@@AAEHPAVREGION@@H@Z @ 0x2287C0
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x2285DC (-bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall METAREGION::bTrimMoveWithRegion(METAREGION *this, struct REGION *a2, int a3)
{
  int v4; // ebx
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  struct _POINTL v11; // [esp+14h] [ebp-3Ch] BYREF
  struct REGION *v12; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v13[2]; // [esp+20h] [ebp-30h] BYREF
  _DWORD v14[2]; // [esp+28h] [ebp-28h] BYREF
  _DWORD v15[2]; // [esp+30h] [ebp-20h] BYREF
  _DWORD *v16; // [esp+38h] [ebp-18h] BYREF
  _DWORD v17[4]; // [esp+3Ch] [ebp-14h] BYREF

  v12 = a2;
  v16 = (_DWORD *)*((_DWORD *)this + 5);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
  v11.x = 0;
  v11.y = 0;
  if ( !v13[0]
    || !v14[0]
    || !v15[0]
    || !RGNOBJ::bCopy((RGNOBJ *)v15, (struct RGNOBJ *)&v16)
    || !RGNOBJ::bOffset((RGNOBJ *)v15, (struct _POINTL *)((char *)this + 12)) )
  {
    goto LABEL_5;
  }
  if ( !(a3
       ? RGNOBJ::bCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v16)
       : RGNOBJ::iCombine((RGNOBJ *)v13, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v12, 4)) )
    goto LABEL_5;
  if ( !RGNOBJ::iCombine((RGNOBJ *)v14, (struct RGNOBJ *)v15, (struct RGNOBJ *)&v12, 4) )
    goto LABEL_5;
  v11.x = -*((_DWORD *)this + 3);
  v11.y = -*((_DWORD *)this + 4);
  if ( !RGNOBJ::bOffset((RGNOBJ *)v14, &v11) )
    goto LABEL_5;
  v6 = RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)v13, (struct RGNOBJ *)v14, 1);
  if ( !v6 )
    goto LABEL_5;
  v7 = v16;
  *((_DWORD *)this + 5) = v16;
  if ( v6 == 1 )
    goto LABEL_5;
  v17[0] = v7[16];
  v17[1] = v7[17];
  v8 = v7[18];
  v9 = v7[19];
  v17[2] = v8;
  v17[3] = v9;
  if ( !ERECTL::bEmpty((ERECTL *)v17) )
  {
    v4 = 1;
  }
  else
  {
LABEL_5:
    METAREGION::vClearMoveData(this, 1);
    v4 = 0;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v15);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v15);
  if ( v15[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v15);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v14);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v14);
  if ( v14[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v14);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v13);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
  if ( v13[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
  return v4;
}
