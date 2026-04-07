/*
 * XREFs of ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800BCAFC
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014C94 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800BC084 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(MagnifierExperienceHelper *this)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r8
  int v3; // eax

  v1 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444);
  v2 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444), 8).m128i_u64[0];
  *(_DWORD *)this = v1;
  *((_OWORD *)this + 3) = 0LL;
  v3 = v2 + v1;
  v1 >>= 32;
  *((_DWORD *)this + 2) = v3;
  *((_DWORD *)this + 1) = v1;
  *((_DWORD *)this + 3) = HIDWORD(v2) + v1;
  *((double *)this + 2) = (double)(int)v2;
  *((double *)this + 3) = (double)SHIDWORD(v2);
  *((double *)this + 4) = (double)(int)v2 * 0.5;
  *((double *)this + 5) = (double)SHIDWORD(v2) * 0.5;
}
