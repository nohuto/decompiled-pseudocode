/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x140353124
 * Callers:
 *     PspCreateThread @ 0x1406B12C0 (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1)
{
  bool v2; // bl
  int v4; // eax
  _OWORD v5[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v4 = *(_DWORD *)(a1 + 2172);
    if ( (v4 & 1) == 0 && (v4 & 0x1000) == 0 && (*(_BYTE *)(a1 + 992) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v5);
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 24LL) != 0LL;
      KiUnstackDetachProcess((__int64)v5, 0LL);
    }
  }
  return v2;
}
