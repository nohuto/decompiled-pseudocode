/*
 * XREFs of ?vAddRectToMoveRegionHelper@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x228969
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z @ 0x228A76 (-vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 */

int __thiscall METAREGION::vAddRectToMoveRegionHelper(METAREGION *this, struct _RECTL *a2)
{
  METAREGION *v2; // edi
  int v3; // ebx
  int v4; // eax
  int v6; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  _DWORD v8[2]; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+1Ch] [ebp-8h] BYREF
  METAREGION *v10; // [esp+20h] [ebp-4h]

  v2 = this;
  v3 = 0;
  v10 = this;
  if ( *((_DWORD *)this + 5) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v8);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v6);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v6);
    v4 = *((_DWORD *)v10 + 5);
    v9 = v4;
    if ( v8[0] )
    {
      if ( v6 )
      {
        if ( v4 )
        {
          RGNOBJ::vSet((RGNOBJ *)v8, a2);
          if ( RGNOBJ::iCombine((RGNOBJ *)&v6, (struct RGNOBJ *)v8, (struct RGNOBJ *)&v9, 2) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v9, (struct RGNOBJ *)v8);
            v3 = 1;
          }
        }
      }
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v6);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
    if ( v7 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v8);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v8);
    if ( v8[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v8);
    v2 = v10;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v6);
    if ( v6 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v6, a2);
      v3 = 1;
      *((_DWORD *)v2 + 5) = v6;
    }
    if ( v7 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
  }
  if ( v3 != 1 )
    METAREGION::vClearMoveData(v2, 1);
  return v3;
}
