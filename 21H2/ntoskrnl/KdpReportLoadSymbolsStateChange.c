/*
 * XREFs of KdpReportLoadSymbolsStateChange @ 0x1409B8DD0
 * Callers:
 *     KdpSymbol @ 0x1409BA9C0 (KdpSymbol.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KdpSetCommonState @ 0x14051161C (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 *     KdpSetContextState @ 0x1409BAE90 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportLoadSymbolsStateChange(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 *v9; // r8
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13[30]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  do
  {
    KdpSetCommonState(12337, a4, (__int64)v13);
    KdpSetContextState(v13, a4);
    v13[5] = *(_QWORD *)a2;
    v13[6] = *(unsigned int *)(a2 + 8);
    v13[7] = *(_QWORD *)(a2 + 16);
    LOBYTE(v13[8]) = a3;
    if ( a1 )
    {
      KdpCopyMemoryChunks(*(PVOID *)(a1 + 8), 4, (__int64)&v13[4]);
      ++LODWORD(v13[4]);
      v9 = &v11;
      *((_QWORD *)&v11 + 1) = KdpPathBuffer;
      LOWORD(v11) = v13[4];
      KdpPathBuffer[LOWORD(v13[4]) - 1] = 0;
    }
    else
    {
      LODWORD(v13[4]) = 0;
      v9 = 0LL;
    }
    LOWORD(v12) = 240;
    *((_QWORD *)&v12 + 1) = v13;
    result = KdpSendWaitContinue(v8, &v12, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
