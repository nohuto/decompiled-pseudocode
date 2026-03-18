/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015994 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0015E30 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00160B8 (DrvEnableMDEV.c)
 *     bDynamicModeChange @ 0x1C0019194 (bDynamicModeChange.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CAE48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01453B4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C001A270 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C001A944 (-SETFLAG@@YAXHAECKK@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 Objt; // rax
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int64 v14; // rax

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x400u);
  v4 = *(_QWORD *)this;
  if ( a2 || (*(_DWORD *)(v4 + 40) & 0x20000) != 0 )
  {
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 40) & 0x20000) != 0 && !*(_QWORD *)(v4 + 32) )
      {
        v14 = *(_QWORD *)(**(_QWORD **)(v5 + 1800) + 48LL);
        if ( v4 != v14 )
          *(_QWORD *)(v4 + 32) = v14;
      }
    }
  }
  v6 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore();
  v8 = 0LL;
  while ( 1 )
  {
    LOBYTE(v7) = 1;
    Objt = HmgSafeNextObjt(v8, v7);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( !*(_DWORD *)(Objt + 32) && *(_QWORD *)(Objt + 48) == v6 )
    {
      v10 = *(_DWORD *)(Objt + 36);
      if ( a2 )
        v11 = v10 | 0x1000;
      else
        v11 = v10 & 0xFFFFEFFF;
      *(_DWORD *)(Objt + 36) = v11;
    }
  }
  v12 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  GreReleaseHmgrSemaphore();
  return v12;
}
