/*
 * XREFs of ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F48C0
 * Callers:
 *     ?HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z @ 0x1801F3F18 (-HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z @ 0x1801F4030 (-HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z.c)
 *     ?PearlRectMayHaveChanged@CortanaStoreAppExperienceManager@@UEAAJPEAUHMONITOR__@@@Z @ 0x1801F4820 (-PearlRectMayHaveChanged@CortanaStoreAppExperienceManager@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z @ 0x1801F56D0 (-WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AFAC (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@111UCRect@Geometry@@H@Z @ 0x1801F2D48 (-ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPL.c)
 *     ?GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1801F39C8 (-GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYST.c)
 *     ?SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x1801F4DB4 (-SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z.c)
 *     ?SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F51A8 (-SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::PositionCortanaWindow(CortanaStoreAppExperienceManager *this)
{
  HMONITOR v2; // r14
  int MonitorInformation; // esi
  HMONITOR v4; // r8
  __int64 v5; // rdx
  int v7; // esi
  HMONITOR v8; // r8
  int v9; // eax
  __int64 v10; // r9
  int v11; // r15d
  int v12; // eax
  HMONITOR v13; // r8
  int v14; // eax
  struct tagRECT v15; // xmm6
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct tagRECT v21; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v22; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v23; // [rsp+98h] [rbp-70h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-60h] BYREF
  RECT v25; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v26; // [rsp+C8h] [rbp-40h] BYREF
  RECT rc; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v28; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  if ( *((_QWORD *)this + 30) )
  {
    rc = *(RECT *)((char *)this + 296);
    v2 = MonitorFromRect(&rc, 1u);
    MonitorInformation = CortanaStoreAppExperienceManager::GetMonitorInformation(
                           this,
                           v2,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v19,
                           &v23,
                           &v22,
                           (struct tagRECT *)&v21.right);
    if ( MonitorInformation < 0 )
    {
      v5 = 921LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return (unsigned int)MonitorInformation;
    }
    v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
           (ExperienceManagerUtils *)*((unsigned int *)this + 56),
           (__int64)v2,
           v4);
    v9 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
           (ExperienceManagerUtils *)*((unsigned int *)this + 57),
           (__int64)v2,
           v8);
    v10 = *((_QWORD *)this + 36);
    v26 = 0LL;
    v11 = v9;
    v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, _BYTE *))(*(_QWORD *)v10 + 40LL))(v10, &v26, v20);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (__int64)v2, v13);
    v15 = v23;
    v24 = v26;
    v25 = rc;
    CortanaStoreAppExperienceManager::ComputeCortanaWindowRect(
      (__int64)this,
      &v28,
      v19,
      v7,
      v11,
      &v23.left,
      &v22,
      &v21.right,
      &v25,
      (Geometry::CRect *)&v24,
      v14);
    LOBYTE(v16) = v28.left > _mm_cvtsi128_si32((__m128i)v15);
    v17 = CortanaStoreAppExperienceManager::SetBorder(this, v19, v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
    MonitorInformation = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 30) + 64LL))(
                           *((_QWORD *)this + 30),
                           &v28);
    if ( MonitorInformation < 0 )
    {
      v5 = 938LL;
      goto LABEL_4;
    }
    MonitorInformation = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 96LL))(*((_QWORD *)this + 30));
    if ( MonitorInformation < 0 )
    {
      v5 = 939LL;
      goto LABEL_4;
    }
    v18 = CortanaStoreAppExperienceManager::SetZBand(this);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3AF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
  }
  return 0LL;
}
