/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x1403153D4
 * Callers:
 *     PspCreateThread @ 0x140707180 (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v5; // bl
  int v7; // eax
  __int64 v8; // r8
  _DWORD *v9; // r9
  _OWORD v10[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  v5 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v7 = *(_DWORD *)(a1 + 2172);
    if ( (v7 & 1) == 0 && (v7 & 0x1000) == 0 && (*(_BYTE *)(a1 + 992) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v10, a4);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 24LL) != 0LL;
      KiUnstackDetachProcess((__int64)v10, 0LL, v8, v9);
    }
  }
  return v5;
}
