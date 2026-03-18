/*
 * XREFs of ?vCalculateNoMoveDirty@METAREGION@@AAEXXZ @ 0x228D7A
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 */

void __thiscall METAREGION::vCalculateNoMoveDirty(METAREGION *this)
{
  REGION *v2; // ecx
  int v3; // [esp+Ch] [ebp-18h] BYREF
  int v4; // [esp+10h] [ebp-14h]
  int v5; // [esp+14h] [ebp-10h] BYREF
  int v6; // [esp+18h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-8h] BYREF
  int v8; // [esp+20h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v8 = *(_DWORD *)this;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v3);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v5);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v5);
    v2 = (REGION *)*((_DWORD *)this + 1);
    v7 = *((_DWORD *)this + 5);
    if ( v2 )
    {
      REGION::vDeleteREGION(v2);
      *((_DWORD *)this + 1) = 0;
    }
    if ( RGNOBJ::bCopy((RGNOBJ *)&v5, (struct RGNOBJ *)&v7)
      && RGNOBJ::bOffset((RGNOBJ *)&v5, (struct _POINTL *)((char *)this + 12)) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v3);
      if ( v8 && v5 && v3 && RGNOBJ::iCombine((RGNOBJ *)&v3, (struct RGNOBJ *)&v8, (struct RGNOBJ *)&v5, 4) )
      {
        *((_DWORD *)this + 1) = v3;
      }
      else
      {
        METAREGION::vClearMoveData(this, 1);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v5);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
      if ( v6 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
      if ( v4 == 1 )
        goto LABEL_19;
    }
    else
    {
      METAREGION::vClearMoveData(this, 1);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v5);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
      if ( v6 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
      if ( v4 == 1 )
LABEL_19:
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
    }
  }
}
