/*
 * XREFs of CsrClientCallServer @ 0x1800089A0
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800088AC (CsrpClientConnectToServer.c)
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x18009DF80 (ZwAlpcSendWaitReceivePort.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CsrClientCallServer(char *SendMessageA, __int64 a2, int a3, int a4)
{
  unsigned int v7; // r8d
  int v8; // ecx
  __int64 v9; // r9
  char **v10; // r8
  int v11; // ecx
  char *v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // r9
  __int64 *v15; // rdx
  int i; // r8d
  __int64 v17; // rcx
  char *v18; // rcx
  ULONG_PTR BufferLength[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( LdrpIsSecureProcess )
    return 3221225659LL;
  v7 = a3 & 0xEFFFFFFF;
  v8 = a3 & 0x10000000;
  if ( a4 < 0 )
  {
    a4 = -a4;
    *((_WORD *)SendMessageA + 2) = 0;
  }
  else
  {
    *((_DWORD *)SendMessageA + 1) = 0;
  }
  *((_QWORD *)SendMessageA + 5) = 0LL;
  *((_DWORD *)SendMessageA + 12) = v7;
  *(_DWORD *)SendMessageA = (a4 | (a4 << 16)) + 4194328;
  if ( (NtCurrentPeb()->BitField & 2) != 0
    && ((v7 & 0xFFFF0000) == 0x20000 || v8 && (NtCurrentPeb()->BitField & 0x40) == 0) )
  {
    *((_DWORD *)SendMessageA + 13) = -1073741790;
    return 3221225506LL;
  }
  else
  {
    if ( CsrClientProcess )
    {
      if ( a2 )
      {
        v9 = CsrPortMemoryRemoteDelta;
        v10 = (char **)(a2 + 32);
        *((_QWORD *)SendMessageA + 5) = CsrPortMemoryRemoteDelta + a2;
        v11 = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 24) = 0LL;
        while ( v11 )
        {
          v12 = *v10;
          --v11;
          ++v10;
          if ( v12 )
          {
            *(_QWORD *)v12 += v9;
            *(v10 - 1) = (char *)(v12 - SendMessageA);
          }
        }
      }
      BufferLength[0] = 952LL;
      v13 = ZwAlpcSendWaitReceivePort(
              CsrPortHandle,
              0x20000u,
              (PPORT_MESSAGE)SendMessageA,
              0LL,
              (PPORT_MESSAGE)SendMessageA,
              BufferLength,
              0LL,
              0LL);
      if ( a2 )
      {
        v14 = CsrPortMemoryRemoteDelta;
        v15 = (__int64 *)(a2 + 32);
        *((_QWORD *)SendMessageA + 5) -= CsrPortMemoryRemoteDelta;
        for ( i = *(_DWORD *)(a2 + 16); i; --i )
        {
          v17 = *v15++;
          if ( v17 )
          {
            v18 = &SendMessageA[v17];
            *(v15 - 1) = (__int64)v18;
            *(_QWORD *)v18 -= v14;
          }
        }
      }
    }
    else
    {
      *(_CLIENT_ID *)(SendMessageA + 8) = NtCurrentTeb()->ClientId;
      v13 = ((__int64 (__fastcall *)(char *, char *))CsrServerApiRoutine)(SendMessageA, SendMessageA);
    }
    if ( v13 < 0 )
      *((_DWORD *)SendMessageA + 13) = v13;
    return *((unsigned int *)SendMessageA + 13);
  }
}
