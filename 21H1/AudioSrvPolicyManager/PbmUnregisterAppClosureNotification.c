/*
 * XREFs of PbmUnregisterAppClosureNotification @ 0x180029460
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020FBC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterAppClosureNotification(void *a1)
{
  int Process; // esi
  CApplicationManager *v2; // rdi
  struct CProcess *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  struct CProcess *v5; // rbx
  struct CProcess *v7; // [rsp+50h] [rbp+18h] BYREF

  Process = 0;
  v7 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v7);
    if ( Process >= 0 )
    {
      v2 = g_ApplicationManager;
      v3 = v7;
      v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      *((_DWORD *)v3 + 122) = 0;
      CApplicationManager::Unregister(v2, v3);
      if ( v4 )
        LeaveCriticalSection(v4);
      *((_DWORD *)v7 + 122) = 0;
    }
    v5 = v7;
    if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  return (unsigned int)Process;
}
