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

void __stdcall __noreturn EtwpLogger(int a1)
{
  void *UniqueThread; // eax
  int v2; // edx
  int v3; // eax
  BOOL v4; // edi
  int active; // eax
  unsigned int v6; // ecx
  NTSTATUS v7; // ebx
  bool v8; // zf
  signed int v9; // edi
  int v10; // eax
  void *v11; // edi
  int v12; // ecx
  int v13; // [esp-8h] [ebp-18h]
  int v14; // [esp-8h] [ebp-18h]
  int v15; // [esp+Ch] [ebp-4h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = UniqueThread;
  v15 = 2;
  ZwSetInformationThread(-2, 3, &v15, 4);
  while ( 1 )
  {
    v2 = 0;
    if ( !*(_DWORD *)(a1 + 216) )
      break;
    if ( *(_QWORD *)(a1 + 232) )
      v2 = a1 + 232;
    v3 = ZwWaitForSingleObject(*(_DWORD *)(a1 + 96), 0, v2);
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(a1 + 220) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v4);
    v6 = *(_DWORD *)(a1 + 220);
    v7 = active;
    if ( (v6 & 1) != 0 && active >= 0 && !v4 )
    {
      v10 = EtwpFlushActiveBuffers(a1, 1);
      v6 = *(_DWORD *)(a1 + 220);
      v7 = v10;
    }
    if ( (v6 & 5) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0);
      v11 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 104) = 0;
      v7 = EtwpAddLogHeaderToLogFile(a1, 0, 0, 0);
      *(_DWORD *)(a1 + 32) = v7;
      if ( v7 >= 0 )
      {
        NtClose(v11);
        v12 = *(_DWORD *)(a1 + 220);
        if ( (v12 & 1) != 0 )
        {
          EtwpSendSessionNotification(a1, 1, 0);
          v12 = *(_DWORD *)(a1 + 220);
        }
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 220);
        *(_DWORD *)(a1 + 104) = v11;
        v7 = (v12 & 4) == 0 ? v7 : 0;
      }
      v6 = v12 & 0xFFFFFFFE;
      *(_DWORD *)(a1 + 220) = v6;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v6 &= ~0x10u;
      v8 = *(_DWORD *)(a1 + 104) == 0;
      *(_DWORD *)(a1 + 220) = v6;
      if ( !v8 )
      {
        EtwpFinalizeLogFileHeader(a1, 1);
        v6 = *(_DWORD *)(a1 + 220);
      }
    }
    if ( (v6 & 6) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 100);
      *(_DWORD *)(a1 + 220) = v6 & 0xFFFFFFF9;
      NtSetEvent(v13, 0);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1);
  v9 = EtwpFinalizeLogFileHeader(a1, 0);
  NtClose(*(HANDLE *)(a1 + 104));
  *(_DWORD *)(a1 + 104) = 0;
  if ( v9 > 0 )
    v9 = (unsigned __int16)v9 | 0xC0070000;
  v14 = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(a1 + 32) = v9;
  NtSetEvent(v14, 0);
  EtwpFreeLoggerContext((void *)a1);
  RtlExitUserThread(0);
}
