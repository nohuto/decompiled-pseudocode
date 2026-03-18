/*
 * XREFs of ?bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x2285DC
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z @ 0x228A76 (-vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TraceMoveRemovedMoveRegions@METAREGION@@AAEXPAU_RECTL@@@Z @ 0x228585 (-TraceMoveRemovedMoveRegions@METAREGION@@AAEXPAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AAEHPAVREGION@@H@Z @ 0x2287C0 (-bTrimMoveWithRegion@METAREGION@@AAEHPAVREGION@@H@Z.c)
 */

int __thiscall METAREGION::bIntersectMoveWithDirty(METAREGION *this, struct _RECTL *a2)
{
  struct REGION *v3; // esi
  int v4; // eax
  struct REGION *v6; // [esp+10h] [ebp-44h] BYREF
  int v7; // [esp+14h] [ebp-40h] BYREF
  int v8; // [esp+18h] [ebp-3Ch]
  _DWORD v9[2]; // [esp+1Ch] [ebp-38h] BYREF
  _DWORD v10[2]; // [esp+24h] [ebp-30h] BYREF
  _DWORD v11[2]; // [esp+2Ch] [ebp-28h] BYREF
  _DWORD v12[2]; // [esp+34h] [ebp-20h] BYREF
  _DWORD v13[4]; // [esp+3Ch] [ebp-18h] BYREF

  v8 = 1;
  if ( *((_DWORD *)this + 6) == 1 && (*((_DWORD *)this + 1) || *(_DWORD *)this) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v9);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v9);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
    v7 = *((_DWORD *)this + 5);
    if ( !v12[0] || !v10[0] || !v11[0] )
      goto LABEL_21;
    v3 = (struct REGION *)*((_DWORD *)this + 1);
    if ( !v3 )
      v3 = *(struct REGION **)this;
    v6 = v3;
    RGNOBJ::vSet((RGNOBJ *)v10);
    if ( RGNOBJ::iCombine((RGNOBJ *)v12, (struct RGNOBJ *)&v7, (struct RGNOBJ *)v10, 2)
      && RGNOBJ::bOffset((RGNOBJ *)v12, (struct _POINTL *)((char *)this + 12))
      && v7
      && v12[0]
      && v11[0]
      && v9[0]
      && RGNOBJ::iCombine((RGNOBJ *)v9, (struct RGNOBJ *)&v7, (struct RGNOBJ *)v12, 2)
      && (v4 = RGNOBJ::iCombine((RGNOBJ *)v11, (struct RGNOBJ *)v9, (struct RGNOBJ *)&v6, 1)) != 0 )
    {
      if ( v4 != 1 )
      {
        v13[0] = *(_DWORD *)(v11[0] + 64);
        v13[1] = *(_DWORD *)(v11[0] + 68);
        v13[2] = *(_DWORD *)(v11[0] + 72);
        v13[3] = *(_DWORD *)(v11[0] + 76);
        if ( !ERECTL::bEmpty((ERECTL *)v13) )
        {
          v8 = METAREGION::bTrimMoveWithRegion(this, v3, 0);
          if ( !v8 )
            METAREGION::TraceMoveRemovedMoveRegions(this, a2);
        }
      }
    }
    else
    {
LABEL_21:
      METAREGION::vClearMoveData(this, 1);
      v8 = 0;
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v11);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v11);
    if ( v11[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v11);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v10);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
    if ( v10[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v12);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v12);
    if ( v12[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v12);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v9);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
    if ( v9[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
  }
  return v8;
}
