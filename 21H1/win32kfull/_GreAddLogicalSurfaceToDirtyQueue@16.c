/*
 * XREFs of _GreAddLogicalSurfaceToDirtyQueue@16 @ 0xC6A7E
 * Callers:
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4 (-SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall GreAddLogicalSurfaceToDirtyQueue(int a1, ULONG a2, ULONG64 a3)
{
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // esi
  int v11; // [esp+10h] [ebp-450h] BYREF
  int v12; // [esp+14h] [ebp-44Ch] BYREF
  int v13[2]; // [esp+18h] [ebp-448h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v14; // [esp+20h] [ebp-440h] BYREF

  memset(&v14, 0, sizeof(v14));
  v14.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v14.Token.Flip.FenceValue = a1;
  v14.Token.Blt.EventId = a3;
  v14.Token.GdiSysMem.dwDirtyFlags = a2;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v12, (struct SfmState *)((char *)gpSfmState + 20));
  v13[0] = 0;
  v13[1] = 0;
  if ( a1 && (LOBYTE(v5) = 18, v6 = HmgLock(a1, v5), v7 = v6, (v13[0] = v6) != 0) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v11, (struct _EX_PUSH_LOCK *)(v6 + 168));
    EtwGdiSysMemToken(
      (unsigned __int8)((int)(*(_DWORD *)(v7 + 156) << 30) >> 31),
      a2,
      v14.Token.Flip.FenceValue,
      HIDWORD(v14.Token.Gdi.hLogicalSurface),
      v14.Token.Flip.dxgContext,
      v14.Token.Flip.VidPnSourceId);
    if ( (*(_DWORD *)(v7 + 156) & 2) != 0 )
    {
      v8 = SfmTokenArray::AddNotificationToken(gpSfmState, &v14);
      if ( !v8 )
        SfmSignalTokenEvent();
    }
    else
    {
      v8 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v7 + 136), &v14);
    }
    if ( v11 )
    {
      ExReleasePushLockExclusiveEx(v11, 0);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v8 = -1073741816;
  }
  SFMLOGICALSURFACEREF_vDestructor(v13);
  if ( v12 )
  {
    ExReleasePushLockExclusiveEx(v12, 0);
    KeLeaveCriticalRegion();
  }
  return v8;
}
