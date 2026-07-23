/*
 * XREFs of KdpReportCommandStringStateChange @ 0x1409B8B48
 * Callers:
 *     KdpCommandString @ 0x1409BA600 (KdpCommandString.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KdpSetCommonState @ 0x14051161C (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 *     KdpSetContextState @ 0x1409BAE90 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportCommandStringStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v10; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v11[240]; // [rsp+60h] [rbp-A0h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  LODWORD(v8) = 0;
  do
  {
    KdpSetCommonState(12338, a3, (__int64)v11);
    KdpSetContextState(v11, a3);
    memset(&v11[32], 0, 0x40uLL);
    *((_QWORD *)&v9 + 1) = &KdpMessageBuffer;
    KdpCopyMemoryChunks(*(PVOID *)(a1 + 8), 4, (__int64)&v8);
    LOWORD(v9) = v8 + 1;
    *(_BYTE *)((unsigned __int16)(v8 + 1) + *((_QWORD *)&v9 + 1) - 1LL) = 0;
    KdpCopyMemoryChunks(*(PVOID *)(a2 + 8), 4, (__int64)&v8);
    LOWORD(v9) = v8 + 1 + v9;
    v6 = (unsigned __int16)v9;
    *(_BYTE *)((unsigned __int16)v9 + *((_QWORD *)&v9 + 1) - 1LL) = 0;
    *((_QWORD *)&v10 + 1) = v11;
    LOWORD(v10) = 240;
    result = KdpSendWaitContinue(v6, &v10, &v9, a3);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
