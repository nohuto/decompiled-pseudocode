/*
 * XREFs of CrmStateMonitorInitialize @ 0x180036C40
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002AE58 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 * Callees:
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorInitialize(__int64 a1, int a2))()
{
  __int64 (__fastcall *result)(); // rax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  __int64 (__fastcall *v12)(); // rcx
  __int64 (__fastcall *v13)(); // rcx
  _QWORD *v14; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  RtlInitializeSRWLock(a1 + 8);
  result = (__int64 (__fastcall *)())(a1 + 24);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  if ( a2 <= 23 )
  {
    if ( a2 < 22 )
    {
      if ( a2 > 12 )
      {
        if ( a2 > 18 )
        {
          if ( a2 == 19 )
          {
            memset_0((void *)(a1 + 56), 0, 0x80uLL);
            *(_QWORD *)(a1 + 80) = a1 + 72;
            *(_QWORD *)(a1 + 72) = a1 + 72;
            *(_QWORD *)(a1 + 64) = CrmStateMonitorPostShellReadyTimeSinceLogonCallback;
            *(_QWORD *)(a1 + 96) = 0LL;
            *(_QWORD *)(a1 + 104) = 0LL;
            *(_QWORD *)(a1 + 104) = a1 + 96;
            *(_QWORD *)(a1 + 96) = a1 + 96;
            result = (__int64 (__fastcall *)())(a1 + 120);
            *(_QWORD *)(a1 + 88) = CrmStateMonitorPostShellReadyUsageCallback;
            *(_QWORD *)(a1 + 120) = 0LL;
            *(_QWORD *)(a1 + 128) = 0LL;
            *(_QWORD *)(a1 + 128) = a1 + 120;
            *(_QWORD *)(a1 + 120) = a1 + 120;
            *(_QWORD *)(a1 + 112) = CrmStateMonitorPostShellReadyUsageCallback;
            return result;
          }
          if ( a2 == 20 )
          {
            memset_0((void *)(a1 + 56), 0, 0x88uLL);
            *(_QWORD *)(a1 + 80) = a1 + 72;
            *(_QWORD *)(a1 + 72) = a1 + 72;
            *(_QWORD *)(a1 + 64) = CrmStateMonitorPostResumeSuspendCallback;
            *(_QWORD *)(a1 + 104) = 0LL;
            *(_QWORD *)(a1 + 112) = 0LL;
            *(_QWORD *)(a1 + 112) = a1 + 104;
            *(_QWORD *)(a1 + 104) = a1 + 104;
            result = (__int64 (__fastcall *)())(a1 + 128);
            *(_QWORD *)(a1 + 96) = CrmStateMonitorPostResumeUsageCallback;
            *(_QWORD *)(a1 + 128) = 0LL;
            *(_QWORD *)(a1 + 136) = 0LL;
            *(_QWORD *)(a1 + 136) = a1 + 128;
            *(_QWORD *)(a1 + 128) = a1 + 128;
            *(_QWORD *)(a1 + 120) = CrmStateMonitorPostResumeUsageCallback;
            return result;
          }
          *(_QWORD *)(a1 + 56) = 0LL;
          v13 = CrmStateMonitorPowerConstrainedCallback;
          *(_QWORD *)(a1 + 64) = 0LL;
          v14 = (_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = 0LL;
          *(_QWORD *)(a1 + 88) = 0LL;
          *(_QWORD *)(a1 + 72) = CrmStateMonitorPowerConstrainedCallback;
          goto LABEL_36;
        }
      }
      else if ( a2 != 12 )
      {
        if ( a2 < 0 )
          return result;
        if ( a2 <= 1 )
        {
          *(_QWORD *)(a1 + 56) = 0LL;
          *(_QWORD *)(a1 + 64) = 0LL;
          return result;
        }
        if ( a2 != 2 )
        {
          if ( a2 <= 8 )
          {
            *(_OWORD *)(a1 + 56) = 0LL;
            return result;
          }
          if ( a2 == 10 )
          {
            result = 0LL;
            *(_QWORD *)(a1 + 56) = 0LL;
            return result;
          }
          goto LABEL_14;
        }
        *(_QWORD *)(a1 + 56) = 0LL;
        v13 = CrmStateMonitorCompositeTestCallback;
        *(_QWORD *)(a1 + 88) = 0LL;
        v14 = (_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 120) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 64) = CrmStateMonitorCompositeTestCallback;
LABEL_36:
        *v14 = v14;
        v14[1] = v14;
        result = (__int64 (__fastcall *)())(a1 + 104);
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_QWORD *)(a1 + 112) = 0LL;
        *(_QWORD *)(a1 + 112) = a1 + 104;
        *(_QWORD *)(a1 + 104) = a1 + 104;
        *(_QWORD *)(a1 + 96) = v13;
        return result;
      }
    }
LABEL_14:
    result = 0LL;
    *(_OWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    return result;
  }
  if ( a2 > 29 )
  {
    v8 = a2 - 30;
    if ( !v8 )
      goto LABEL_14;
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_14;
      v11 = v10 - 1;
      if ( !v11 )
      {
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        result = CrmStateMonitorDelayedCsCallback;
        goto LABEL_13;
      }
      if ( v11 == 1 )
        goto LABEL_14;
      return result;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
    v12 = CrmStateMonitorDisconnectedStandbyCallback;
    *(_QWORD *)(a1 + 112) = 0LL;
LABEL_33:
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    result = (__int64 (__fastcall *)())(a1 + 96);
    *(_QWORD *)(a1 + 64) = v12;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 104) = a1 + 96;
    *(_QWORD *)(a1 + 96) = a1 + 96;
    *(_QWORD *)(a1 + 88) = v12;
    return result;
  }
  if ( a2 == 29 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorGPUUsageCSCallback;
LABEL_13:
    *(_QWORD *)(a1 + 64) = result;
    return result;
  }
  v5 = a2 - 24;
  if ( !v5 )
  {
    memset_0((void *)(a1 + 56), 0, 0x40uLL);
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorCPUUsageCSCallback;
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    memset_0((void *)(a1 + 56), 0, 0x40uLL);
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorSystemDiskUsageCSCallback;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    v12 = CrmStateMonitorCsAcDcCallback;
    goto LABEL_33;
  }
  if ( v7 == 1 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorDelayedAcCallback;
    goto LABEL_13;
  }
  return result;
}
