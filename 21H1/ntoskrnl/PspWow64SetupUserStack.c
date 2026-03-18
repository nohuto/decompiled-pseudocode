/*
 * XREFs of PspWow64SetupUserStack @ 0x1406DB278
 * Callers:
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x1406DB328 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, char *a4, int a5)
{
  char v5; // al
  int UserStack; // edi
  __int64 v9; // r8
  _DWORD *v10; // r9
  char v11; // cl
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *a4;
  memset(v13, 0, sizeof(v13));
  if ( (v5 & 1) != 0 )
  {
    v11 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0LL, (__int64)v13, a4);
  UserStack = RtlpWow64CreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess((__int64)v13, 0LL, v9, v10);
    v5 = *a4;
    v11 = 4;
LABEL_4:
    *a4 = v11 | v5 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess((__int64)v13, 0LL, v9, v10);
  return (unsigned int)UserStack;
}
