/*
 * XREFs of KdpReportExceptionStateChange @ 0x1409B7CE0
 * Callers:
 *     KdpReport @ 0x1405119E4 (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x14051DE60 (KiFreezeTargetExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     KdpSetCommonState @ 0x1405113DC (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x1409B84F4 (KdpSendWaitContinue.c)
 *     KdpQuickMoveMemory @ 0x1409B9CF0 (KdpQuickMoveMemory.c)
 *     KdpSetContextState @ 0x1409B9E90 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[60]; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  do
  {
    KdpSetCommonState(12336, a2, (__int64)v10);
    KdpQuickMoveMemory(&v10[8], a1, 152LL);
    v10[46] = a3 == 0;
    KdpSetContextState(v10, a2);
    LOWORD(v8) = 240;
    *((_QWORD *)&v8 + 1) = v10;
    LOWORD(v9) = 0;
    result = KdpSendWaitContinue(v6, &v8, &v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
