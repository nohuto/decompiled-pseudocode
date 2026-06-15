/*
 * XREFs of AUDIOSERVER_rundown @ 0x1800DE380
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800108E4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046C04 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800BE338 (WPP_SF_qd.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(char *a1)
{
  int v2; // eax
  LPCRITICAL_SECTION v3; // rbx
  int v6; // [rsp+20h] [rbp-48h]
  _BYTE v7[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v7, a1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, a1);
  }
  v2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = v2;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
      a1,
      v6);
  }
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v3[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v3);
  LeaveCriticalSection(v3);
  return EtwEventActivityIdControl(4LL, v8);
}
