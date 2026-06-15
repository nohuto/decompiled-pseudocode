/*
 * XREFs of ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180115130
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ReportStatusToSCMgr @ 0x180061EC4 (ReportStatusToSCMgr.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?MyServiceTerminate@@YAXXZ @ 0x1801156E4 (-MyServiceTerminate@@YAXXZ.c)
 */

void __fastcall OnServiceShutdown(void *a1)
{
  HANDLE v1; // rbx
  char *v2; // rcx
  unsigned int v3; // ebx
  DWORD CurrentProcessId; // eax
  DWORD ThreadId; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-5h] BYREF
  char v7[32]; // [rsp+40h] [rbp+7h] BYREF
  DWORD *p_ThreadId; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  unsigned int *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  v1 = 0LL;
  hEventShutdownComplete = CreateEventW(0LL, 1, 0, 0LL);
  if ( hEventShutdownComplete )
    v1 = CreateThread(0LL, 0LL, ShutdownKeepaliveThread, 0LL, 0, &ThreadId);
  MyServiceTerminate();
  if ( hEventShutdownWait )
    UnregisterWaitEx(hEventShutdownWait, 0LL);
  if ( hEventShutdown )
    CloseHandle(hEventShutdown);
  v2 = (char *)hEventShutdownComplete;
  if ( hEventShutdownComplete )
  {
    SetEvent(hEventShutdownComplete);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( v1 )
  {
    WaitForSingleObject(v1, 0xFFFFFFFF);
    if ( v1 != (HANDLE)-1LL )
      CloseHandle(v1);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    hEventShutdownComplete = 0LL;
  }
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v3 = dwServiceError;
    CurrentProcessId = GetCurrentProcessId();
    v13 = 0;
    v10 = 0;
    ThreadId = CurrentProcessId;
    v6 = v3;
    v11 = &v6;
    v12 = 4;
    p_ThreadId = &ThreadId;
    v9 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019C4B8, byte_180169A55, 0LL, 0LL, 4, (__int64)v7);
  }
  ReportStatusToSCMgr(1, dwServiceError, 0);
}
