/*
 * XREFs of _GreAdjustSpriteDirtyAccum@24 @ 0x1FEC6
 * Callers:
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 * Callees:
 *     ?GdiAdjustSpriteDirtyAccum@@YGHPAUHDEV__@@PAUHWND__@@PAU_RECTL@@2PAU_POINTL@@3@Z @ 0x11E4A (-GdiAdjustSpriteDirtyAccum@@YGHPAUHDEV__@@PAUHWND__@@PAU_RECTL@@2PAU_POINTL@@3@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z @ 0x24B32 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z.c)
 */

int __fastcall GreAdjustSpriteDirtyAccum(
        HWND a1,
        int a2,
        struct SPRITE *a3,
        int a4,
        struct _RECTL *a5,
        struct _RECTL *a6)
{
  int v6; // ebx
  int v7; // esi
  HSPRITE v8; // eax
  int v9; // edx
  int v10; // eax
  SFMLOGICALSURFACE *v11; // edi
  int v12; // esi
  struct _POINTL *v14; // [esp+0h] [ebp-38h]
  struct _POINTL *v15; // [esp+4h] [ebp-34h]
  _DWORD v16[2]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v17[2]; // [esp+18h] [ebp-20h] BYREF
  HWND v18; // [esp+20h] [ebp-18h]
  int v19; // [esp+24h] [ebp-14h] BYREF
  SFMLOGICALSURFACE *v20; // [esp+28h] [ebp-10h]
  int v21; // [esp+2Ch] [ebp-Ch]
  int v22; // [esp+30h] [ebp-8h]
  struct REGION *v23; // [esp+34h] [ebp-4h] BYREF

  v18 = a1;
  v6 = 0;
  v22 = a2;
  if ( !g_pDwmState )
    return GdiAdjustSpriteDirtyAccum((LONG)v18, a3, a1, a5, a6, v14, v15);
  GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
  v21 = 0;
  v7 = 0;
  v8 = DWMALTSPRITEREF::hspLookupWindow((HWND)v14);
  if ( v8 )
  {
    LOBYTE(v9) = 15;
    v10 = HmgShareLockCheck(v8, v9);
    v7 = v10;
    if ( !v10 )
      goto LABEL_19;
    v20 = *(SFMLOGICALSURFACE **)(v10 + 136);
    v11 = v20;
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v19, (struct _EX_PUSH_LOCK *)(v10 + 60));
    if ( *((_DWORD *)v11 + 11) )
    {
      v23 = (struct REGION *)*((_DWORD *)v11 + 11);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
      if ( v23
        && v16[0]
        && v17[0]
        && RGNOBJ::bOffset((RGNOBJ *)&v23, (struct _POINTL *)a5)
        && (RGNOBJ::vSet((RGNOBJ *)v16, (struct _RECTL *)a3),
            RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)&v23, (struct RGNOBJ *)v16, 8u)) )
      {
        RGNOBJ::vSwap((RGNOBJ *)v17, (struct RGNOBJ *)&v23);
        SFMLOGICALSURFACE::vDirtyRegionAccum(v20, v23);
        v6 = 1;
      }
      else
      {
        v6 = 0;
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v17);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v17);
      if ( v17[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v17);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v16);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v16);
      if ( v16[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v16);
    }
    if ( v19 )
    {
      ExReleasePushLockExclusiveEx(v19, 0);
      KeLeaveCriticalRegion();
    }
  }
  if ( v7 )
    DEC_SHARE_REF_CNT(v7);
LABEL_19:
  v12 = v21;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  if ( v12 )
    return GdiAdjustSpriteDirtyAccum((LONG)v18, a3, a1, a5, a6, v14, v15);
  return v6;
}
