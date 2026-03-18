/*
 * XREFs of _GreSfmCloseCompositorRef@8 @ 0x21E0A
 * Callers:
 *     _NtGdiHLSurfSetInformation@16 @ 0x21FD4 (_NtGdiHLSurfSetInformation@16.c)
 * Callees:
 *     ?ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z @ 0x21BFE (-ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z @ 0x21CFA (-StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z @ 0x21D46 (-LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

int __fastcall GreSfmCloseCompositorRef(HDEV a1, int a2)
{
  int v3; // edi
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  volatile signed __int32 *v9; // eax
  int v10; // esi
  int v12; // [esp+Ch] [ebp-14h] BYREF
  HDEV v13; // [esp+10h] [ebp-10h]
  void *v14; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v15[2]; // [esp+18h] [ebp-8h] BYREF

  v3 = 0;
  v13 = a1;
  v14 = 0;
  ENTER_GRE_DWM_CRIT(&v14, (int)a1);
  if ( !UserIsCurrentProcessDwm() )
  {
    v3 = -1073741790;
    goto LABEL_17;
  }
  if ( !g_pDwmState )
  {
    v3 = -1071775733;
    goto LABEL_17;
  }
  v15[0] = 0;
  v15[1] = 0;
  if ( a2 )
  {
    LOBYTE(v4) = 18;
    v5 = HmgLock(a2, v4);
    v6 = v5;
    v15[0] = v5;
    if ( v5 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v12, (struct _EX_PUSH_LOCK *)(v5 + 168));
      v7 = *(_DWORD *)(v6 + 156);
      if ( (v7 & 8) == 0 || (v7 & 0x10) != 0 )
      {
        v3 = -2147020579;
      }
      else if ( (*(_DWORD *)(v6 + 160))-- == 1 )
      {
        SFMLOGICALSURFACE::StopSfmStateTracking((SFMLOGICALSURFACE *)v6, v13, gpSfmState);
        v9 = (volatile signed __int32 *)(v6 + 8);
        if ( *(_WORD *)(v6 + 8) == 1 && !*(_DWORD *)(v6 + 4) )
        {
          v10 = v12;
          if ( v12 )
          {
            GreReleasePushLockExclusive(v12);
            KeLeaveCriticalRegion();
            v9 = (volatile signed __int32 *)(v6 + 8);
            v10 = 0;
          }
          _InterlockedDecrement(v9);
          v15[0] = 0;
          if ( !bhLSurfDestroyLogicalSurfaceObject(v6, 1, 0) )
            v3 = -1073741823;
          goto LABEL_14;
        }
      }
      v10 = v12;
LABEL_14:
      if ( v10 )
      {
        ExReleasePushLockExclusiveEx(v10, 0);
        KeLeaveCriticalRegion();
      }
      goto LABEL_16;
    }
  }
  v3 = -1073741816;
LABEL_16:
  SFMLOGICALSURFACEREF_vDestructor(v15);
LABEL_17:
  LEAVE_GRE_DWM_CRIT(v14, (int)v13);
  return v3;
}
