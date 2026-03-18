/*
 * XREFs of ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE
 * Callers:
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ??0SFMLOGICALSURFACEREF@@QAE@PAVSFMLOGICALSURFACE@@@Z @ 0x2461E (--0SFMLOGICALSURFACEREF@@QAE@PAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     ?bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_RECTL@@PAKPAPAV3@@Z @ 0x1CD742 (-bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_REC.c)
 */

int __userpurge bSpDwmUpdateCursor@<eax>(
        FLONG a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ **a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _BLENDFUNCTION *a8)
{
  int v8; // esi
  int v9; // edi
  int v10; // eax
  HDEV v11; // edi
  int updated; // eax
  FLONG flXlate; // ecx
  HDEV v14; // edi
  SFMLOGICALSURFACE *v15; // edx
  int v16; // eax
  struct SFMLOGICALSURFACE *v17; // eax
  struct _RECTL *v19; // [esp+0h] [ebp-70h]
  unsigned __int64 v20; // [esp+0h] [ebp-70h]
  struct SFMLOGICALSURFACE **v21; // [esp+4h] [ebp-6Ch]
  struct tagPOINT v22; // [esp+10h] [ebp-60h] BYREF
  XLATEOBJ v23; // [esp+18h] [ebp-58h] BYREF
  _DWORD Parameter[15]; // [esp+30h] [ebp-40h] BYREF
  int v25; // [esp+6Ch] [ebp-4h]

  v23.flXlate = a1;
  v22.x = 33488896;
  v8 = 0;
  v9 = 0;
  if ( a2 )
  {
    LOBYTE(a1) = 15;
    v10 = HmgShareLockCheck(a2, a1);
    v8 = v10;
    if ( !v10 )
      return v9;
    v11 = *(HDEV *)(v10 + 136);
    v22.y = 0;
    v23.iUniq = (ULONG)v11;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v23.pulXlate, (struct SFMLOGICALSURFACE *)v11);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v23.cEntries, (struct _EX_PUSH_LOCK *)(v8 + 60));
    if ( !a3 || v23.flXlate )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v23.iSrcType, (struct _EX_PUSH_LOCK *)(v11 + 42));
      updated = bSpDwmUpdateMaskCursor(
                  v11,
                  (struct DWMSPRITE *)v23.flXlate,
                  (struct SFMLOGICALSURFACE *)a3,
                  a5,
                  (struct _SURFOBJ *)&v22.y,
                  (struct _RECTL *)&v23,
                  (unsigned int *)v19,
                  v21);
      flXlate = *(_DWORD *)&v23.iSrcType;
    }
    else
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v23.flXlate, (struct _EX_PUSH_LOCK *)(v11 + 42));
      *(_DWORD *)(v8 + 132) &= ~4u;
      updated = bSpDwmUpdateSpriteShape(
                  v8,
                  *((_DWORD *)g_pDwmState + 26),
                  v11,
                  (SURFOBJ *)a3,
                  (struct SFMLOGICALSURFACE *)a5,
                  a3[18],
                  (struct _RECTL *)&v22.y,
                  0,
                  &v23,
                  v19,
                  v21);
      flXlate = v23.flXlate;
    }
    v9 = updated;
    if ( flXlate )
    {
      ExReleasePushLockExclusiveEx(flXlate, 0);
      KeLeaveCriticalRegion();
    }
    if ( v23.cEntries )
    {
      ExReleasePushLockExclusiveEx(v23.cEntries, 0);
      KeLeaveCriticalRegion();
    }
    if ( v9 )
    {
      if ( a6 )
        v22.x = a6->iUniq;
      v14 = *(HDEV *)v8;
      v23.flXlate = *((_DWORD *)g_pDwmState + 26);
      if ( GreStackExpansionRequired(0x2000) )
      {
        Parameter[0] = v23.flXlate;
        Parameter[8] = &v22;
        Parameter[1] = 0;
        Parameter[2] = v14;
        memset(&Parameter[3], 0, 20);
        memset(&Parameter[9], 0, 12);
        Parameter[12] = 555745282;
        Parameter[13] = 1;
        Parameter[14] = 0;
        v25 = 0;
        if ( KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000u, 1u, 0) >= 0 )
          v9 = v25;
        else
          v9 = 0;
      }
      else
      {
        v9 = GreUpdateSpriteInternal(
               0,
               (HDEV)v23.flXlate,
               v14,
               0,
               0,
               0,
               0,
               0,
               0,
               &v22,
               0x21200002u,
               0,
               0,
               (struct tagRECT *)1,
               0,
               v20,
               SHIDWORD(v20));
      }
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v23.cEntries, (struct _EX_PUSH_LOCK *)(v8 + 60));
      v15 = *(SFMLOGICALSURFACE **)(v8 + 136);
      v16 = *((_DWORD *)v15 + 28);
      if ( v16 )
        v17 = *(struct SFMLOGICALSURFACE **)(v16 + 4);
      else
        v17 = 0;
      bSpDwmNotifyDirty(v15, v22.y, v17, 0, v20);
      if ( v23.cEntries )
      {
        ExReleasePushLockExclusiveEx(v23.cEntries, 0);
        KeLeaveCriticalRegion();
      }
    }
    SFMLOGICALSURFACEREF_vDestructor((int *)&v23.pulXlate);
  }
  if ( v8 )
    DEC_SHARE_REF_CNT(v8);
  return v9;
}
