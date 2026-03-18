/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C0090504
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C008C920 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAB4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C00971F0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0108094 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(UINT64 a1, ULONG a2, UINT_PTR a3)
{
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+28h] [rbp-D8h]
  _BYTE v11[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v13; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v13, 0, sizeof(v13));
  v13.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v13.Token.GdiSysMem.dwDirtyFlags = a2;
  v13.Token.Flip.FenceValue = a1;
  v13.Token.Flip.dxgContext = a3;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v12, (struct SfmState *)((char *)gpSfmState + 32));
  v9 = 0LL;
  v10 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v9, (HLSURF)a1);
  v6 = v9;
  if ( v9 )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v11, (struct _EX_PUSH_LOCK *)(v9 + 256));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*(_DWORD *)(v6 + 244), 2),
      a2,
      v13.Token.Flip.FenceValue,
      v13.Token.Flip.dxgContext);
    if ( __CFSHR__(*(_DWORD *)(v6 + 244), 2) )
    {
      v7 = SfmTokenArray::AddNotificationToken(gpSfmState, &v13);
      if ( !v7 )
        SfmSignalTokenEvent();
    }
    else
    {
      v7 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v6 + 216), &v13);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v11);
  }
  else
  {
    v7 = -1073741816;
  }
  SFMLOGICALSURFACEREF_vDestructorWrap(&v9);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v12);
  return v7;
}
