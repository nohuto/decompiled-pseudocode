/*
 * XREFs of PbmRegisterAppClosureNotification @ 0x180023AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001B43C (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
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
