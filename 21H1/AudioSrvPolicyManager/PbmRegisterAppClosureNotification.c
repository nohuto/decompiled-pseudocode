/*
 * XREFs of PbmRegisterAppClosureNotification @ 0x1800293C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020D9C (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterAppClosureNotification(void *a1)
{
  int Process; // ebx
  CApplicationManager *v2; // rcx
  struct CProcess *v3; // rdi
  struct CProcess *v5; // [rsp+40h] [rbp+18h] BYREF

  Process = 0;
  v5 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v5);
    if ( Process >= 0 )
    {
      Process = CApplicationManager::RegisterAppClosureNotificationClient(v2, v5);
      if ( Process >= 0 )
        *((_DWORD *)v5 + 122) = 1;
    }
    v3 = v5;
    if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v3 + 32LL))(v3);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    }
  }
  return (unsigned int)Process;
}
