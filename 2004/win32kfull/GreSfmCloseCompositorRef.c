/*
 * XREFs of GreSfmCloseCompositorRef @ 0x1C002BA6C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C002BC30 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C001F880 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0020138 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002058C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C002B1B8 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C002B618 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C002BBB4 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

__int64 __fastcall GreSfmCloseCompositorRef(HDEV a1, HLSURF a2)
{
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  int v6; // eax
  SFMLOGICALSURFACE *v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]
  int v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  v3 = 0;
  v11 = 0;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v11);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      v9 = 0LL;
      v10 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v9, a2);
      v5 = v9;
      if ( v9 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v12, (SFMLOGICALSURFACE *)((char *)v9 + 256));
        v6 = *((_DWORD *)v5 + 61);
        if ( (v6 & 8) == 0 || (v6 & 0x10) != 0 )
        {
          v3 = -2147020579;
        }
        else if ( (*((_DWORD *)v5 + 62))-- == 1 )
        {
          SFMLOGICALSURFACE::StopSfmStateTracking(v5, a1, gpSfmState);
          if ( *((_WORD *)v5 + 6) == 1 && !*((_DWORD *)v5 + 2) )
          {
            if ( v12 )
            {
              GreReleasePushLockExclusive();
              KeLeaveCriticalRegion();
              v12 = 0LL;
            }
            _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
            v9 = 0LL;
            if ( !(unsigned int)bhLSurfDestroyLogicalSurfaceObject((__int64 *)v5, 1, 0) )
              v3 = -1073741823;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v9);
    }
    else
    {
      v3 = -1071775733;
    }
  }
  else
  {
    v3 = -1073741790;
  }
  LEAVE_GRE_DWM_CRIT((__int64)a1, v11);
  return v3;
}
