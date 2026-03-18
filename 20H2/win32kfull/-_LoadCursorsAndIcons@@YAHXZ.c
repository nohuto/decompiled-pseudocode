/*
 * XREFs of ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C007B480
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079CA4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LoadCursorsAndIcons(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  struct tagCURSOR *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS )
  {
    v6 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = (struct tagCURSOR *)*((_QWORD *)i + 4) )
    {
      v8 = (unsigned int)*((unsigned __int16 *)i + 37) - 1;
      if ( *((_WORD *)i + 37) == 1 )
      {
        if ( *((struct tagCURSOR **)i + 6) == i )
        {
          v9 = *((unsigned __int16 *)i + 32);
          v10 = v9 - 100;
          if ( (unsigned int)(v9 - 100) > 0x12 || (v8 = 552 * v9, gasyscur[69 * v9 - 6899]) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v3, v4, v5);
          zzzInternalSetSystemCursor((__int64)i, v10, (const struct _UNICODE_STRING *)((char *)i + 56), 0);
        }
      }
      else if ( *((_WORD *)i + 37) == 3 )
      {
        v12 = 552 * (*((unsigned __int16 *)i + 32) - 100LL);
        *((_QWORD *)i + 8) = *(unsigned __int16 *)((char *)&gasysico + v12);
        if ( (*((_DWORD *)i + 20) & 4) != 0 )
        {
          v13[1] = i;
          v13[0] = (char *)&gasysico + v12 + 8;
          HMAssignmentLock(v13);
        }
        else
        {
          v3 = *(_QWORD *)i;
          *(_QWORD *)(gpsi + 6968LL) = *(_QWORD *)i;
        }
      }
    }
    if ( qword_1C03307E0 )
      v6 = *(_QWORD *)qword_1C03307E0;
    *(_QWORD *)(gpsi + 6976LL) = v6;
  }
  return 1LL;
}
