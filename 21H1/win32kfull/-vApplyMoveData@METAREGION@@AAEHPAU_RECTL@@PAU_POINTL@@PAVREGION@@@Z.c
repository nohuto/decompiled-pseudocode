/*
 * XREFs of ?vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z @ 0x228A76
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x2285DC (-bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x228969 (-vAddRectToMoveRegionHelper@METAREGION@@AAEHPAU_RECTL@@@Z.c)
 *     ?vDeleteMoveRegionHelper@METAREGION@@AAEXXZ @ 0x228E9B (-vDeleteMoveRegionHelper@METAREGION@@AAEXXZ.c)
 */

int __thiscall METAREGION::vApplyMoveData(METAREGION *this, struct _RECTL *a2, struct _POINTL *a3, struct REGION *a4)
{
  int v4; // esi
  void (__thiscall *v6)(RGNMEMOBJ *__hidden); // ebx
  void (__thiscall *v7)(RGNOBJ *__hidden); // edi
  REGION *v8; // ecx
  REGION *v9; // ebx
  int v11; // [esp+Ch] [ebp-48h]
  struct REGION *v12; // [esp+14h] [ebp-40h]
  _BYTE v13[4]; // [esp+18h] [ebp-3Ch] BYREF
  int v14; // [esp+1Ch] [ebp-38h]
  int v15; // [esp+20h] [ebp-34h] BYREF
  int v16; // [esp+24h] [ebp-30h] BYREF
  int v17; // [esp+28h] [ebp-2Ch]
  int v18; // [esp+2Ch] [ebp-28h] BYREF
  int v19; // [esp+30h] [ebp-24h]
  int v20; // [esp+34h] [ebp-20h] BYREF
  int v21; // [esp+38h] [ebp-1Ch]
  _DWORD v22[2]; // [esp+3Ch] [ebp-18h] BYREF
  struct _POINTL v23; // [esp+44h] [ebp-10h] BYREF

  v4 = 1;
  v12 = a4;
  v11 = 1;
  if ( !a2 || !a3 || !*((_DWORD *)this + 6) )
  {
    *((_DWORD *)this + 2) = a4;
    v9 = 0;
    METAREGION::vAddRectToMoveRegionHelper(this, a2);
    *(struct _POINTL *)((char *)this + 12) = *a3;
    *((_DWORD *)this + 6) = 1;
LABEL_36:
    if ( v4 )
      v11 = METAREGION::bIntersectMoveWithDirty(this, a2);
    if ( v9 )
      REGION::vDeleteREGION(v9);
    return v11;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  if ( !v16 || !v18 || !v20 )
  {
LABEL_28:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    if ( v21 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    if ( v19 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v16);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    if ( v17 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    v4 = *((_DWORD *)this + 6);
    v9 = v12;
    goto LABEL_36;
  }
  v15 = *((_DWORD *)this + 5);
  if ( !RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v15)
    || !RGNOBJ::bOffset((RGNOBJ *)&v18, (struct _POINTL *)((char *)this + 12)) )
  {
    METAREGION::vClearMoveData(this, 1);
    v6 = RGNMEMOBJ::vPopThreadGuardedObject;
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
    v7 = RGNOBJ::vDeleteRGNOBJ;
    goto LABEL_9;
  }
  RGNOBJ::vSet((RGNOBJ *)&v16, a2);
  if ( !RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v18, 1) )
  {
    METAREGION::vClearMoveData(this, 1);
    v11 = 0;
    goto LABEL_28;
  }
  v22[0] = *(_DWORD *)(v20 + 64);
  v22[1] = *(_DWORD *)(v20 + 68);
  v23 = *(struct _POINTL *)(v20 + 72);
  if ( ERECTL::bEmpty((ERECTL *)v22) )
  {
    METAREGION::vDeleteMoveRegionHelper(this);
    METAREGION::vAddRectToMoveRegionHelper(this, a2);
    *((_DWORD *)this + 3) = a3->x;
    v8 = (REGION *)*((_DWORD *)this + 2);
    *((_DWORD *)this + 4) = a3->y;
    if ( v8 )
      REGION::vDeleteREGION(v8);
    *((_DWORD *)this + 2) = a4;
    v12 = 0;
    goto LABEL_28;
  }
  v15 = *((_DWORD *)this + 5);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
  v23.x = -*((_DWORD *)this + 3);
  v23.y = -*((_DWORD *)this + 4);
  RGNOBJ::bOffset((RGNOBJ *)&v20, &v23);
  if ( RGNOBJ::iCombine((RGNOBJ *)v13, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v15, 1) )
  {
    RGNOBJ::vSwap((RGNOBJ *)&v15, (struct RGNOBJ *)v13);
    *((_DWORD *)this + 5) = v15;
    *((_DWORD *)this + 3) += a3->x;
    *((_DWORD *)this + 4) += a3->y;
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v13);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
    if ( v14 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
    goto LABEL_28;
  }
  METAREGION::vClearMoveData(this, 1);
  v6 = RGNMEMOBJ::vPopThreadGuardedObject;
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v13);
  v7 = RGNOBJ::vDeleteRGNOBJ;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
  if ( v14 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
LABEL_9:
  v7((RGNOBJ *)&v20);
  if ( v21 == 1 )
    v7((RGNOBJ *)&v20);
  v6((RGNMEMOBJ *)&v18);
  v7((RGNOBJ *)&v18);
  if ( v19 == 1 )
    v7((RGNOBJ *)&v18);
  v6((RGNMEMOBJ *)&v16);
  v7((RGNOBJ *)&v16);
  if ( v17 == 1 )
    v7((RGNOBJ *)&v16);
  return v11;
}
