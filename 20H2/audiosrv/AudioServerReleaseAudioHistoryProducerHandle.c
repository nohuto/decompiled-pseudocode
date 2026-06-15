/*
 * XREFs of AudioServerReleaseAudioHistoryProducerHandle @ 0x1800E00E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800103A4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046434 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerReleaseAudioHistoryProducerHandle(char **a1)
{
  LPCRITICAL_SECTION v2; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v5, *a1);
  (*(void (__fastcall **)(char *))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  v2 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v2[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v2);
  LeaveCriticalSection(v2);
  EtwEventActivityIdControl(4LL, v6);
  return 0LL;
}
