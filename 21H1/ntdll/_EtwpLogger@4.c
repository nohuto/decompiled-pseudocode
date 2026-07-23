/*
 * XREFs of _EtwpLogger@4 @ 0x4B2F2270
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _EtwpStopLoggerInstance@4 @ 0x4B2EDB7A (_EtwpStopLoggerInstance@4.c)
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _EtwpSendSessionNotification@12 @ 0x4B2F0314 (_EtwpSendSessionNotification@12.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

void __stdcall __noreturn EtwpLogger(char *BaseAddress)
{
  void *UniqueThread; // eax
  LARGE_INTEGER *v2; // edx
  NTSTATUS v3; // eax
  BOOL v4; // edi
  int active; // eax
  unsigned int v6; // ecx
  NTSTATUS v7; // ebx
  bool v8; // zf
  signed int v9; // edi
  int v10; // eax
  void *v11; // edi
  int v12; // ecx
  void *v13; // [esp-8h] [ebp-18h]
  void *v14; // [esp-8h] [ebp-18h]
  int ThreadInformation; // [esp+Ch] [ebp-4h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 8) = 0;
  *((_DWORD *)BaseAddress + 6) = UniqueThread;
  ThreadInformation = 2;
  ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadBasePriority, &ThreadInformation, 4u);
  while ( 1 )
  {
    v2 = 0;
    if ( !*((_DWORD *)BaseAddress + 54) )
      break;
    if ( *((_QWORD *)BaseAddress + 29) )
      v2 = (LARGE_INTEGER *)(BaseAddress + 232);
    v3 = ZwWaitForSingleObject(*((HANDLE *)BaseAddress + 24), 0, v2);
    v4 = v3 == 258 || !v3 && (BaseAddress[220] & 2) != 0;
    active = EtwpFlushActiveBuffers((int)BaseAddress, v4);
    v6 = *((_DWORD *)BaseAddress + 55);
    v7 = active;
    if ( (v6 & 1) != 0 && active >= 0 && !v4 )
    {
      v10 = EtwpFlushActiveBuffers((int)BaseAddress, 1);
      v6 = *((_DWORD *)BaseAddress + 55);
      v7 = v10;
    }
    if ( (v6 & 5) != 0 )
    {
      EtwpFinalizeLogFileHeader((int)BaseAddress, 0);
      v11 = (void *)*((_DWORD *)BaseAddress + 26);
      *((_DWORD *)BaseAddress + 26) = 0;
      v7 = EtwpAddLogHeaderToLogFile((unsigned int)BaseAddress, 0, 0LL);
      *((_DWORD *)BaseAddress + 8) = v7;
      if ( v7 >= 0 )
      {
        NtClose(v11);
        v12 = *((_DWORD *)BaseAddress + 55);
        if ( (v12 & 1) != 0 )
        {
          EtwpSendSessionNotification((GUID *)BaseAddress, 1, 0);
          v12 = *((_DWORD *)BaseAddress + 55);
        }
      }
      else
      {
        v12 = *((_DWORD *)BaseAddress + 55);
        *((_DWORD *)BaseAddress + 26) = v11;
        v7 = (v12 & 4) == 0 ? v7 : 0;
      }
      v6 = v12 & 0xFFFFFFFE;
      *((_DWORD *)BaseAddress + 55) = v6;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v6 &= ~0x10u;
      v8 = *((_DWORD *)BaseAddress + 26) == 0;
      *((_DWORD *)BaseAddress + 55) = v6;
      if ( !v8 )
      {
        EtwpFinalizeLogFileHeader((int)BaseAddress, 1);
        v6 = *((_DWORD *)BaseAddress + 55);
      }
    }
    if ( (v6 & 6) != 0 )
    {
      v13 = (void *)*((_DWORD *)BaseAddress + 25);
      *((_DWORD *)BaseAddress + 55) = v6 & 0xFFFFFFF9;
      NtSetEvent(v13, 0);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance((int)BaseAddress);
  }
  EtwpFlushActiveBuffers((int)BaseAddress, 1);
  v9 = EtwpFinalizeLogFileHeader((int)BaseAddress, 0);
  NtClose(*((HANDLE *)BaseAddress + 26));
  *((_DWORD *)BaseAddress + 26) = 0;
  if ( v9 > 0 )
    v9 = (unsigned __int16)v9 | 0xC0070000;
  v14 = (void *)*((_DWORD *)BaseAddress + 25);
  *((_DWORD *)BaseAddress + 8) = v9;
  NtSetEvent(v14, 0);
  EtwpFreeLoggerContext(BaseAddress);
  RtlExitUserThread(0);
}
