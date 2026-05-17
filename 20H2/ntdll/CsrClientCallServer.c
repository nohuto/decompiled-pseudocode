/*
 * XREFs of CsrClientCallServer @ 0x1800089A0
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800088AC (CsrpClientConnectToServer.c)
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x18009E220 (ZwAlpcSendWaitReceivePort.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CsrClientCallServer(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v7; // r8d
  int v8; // ecx
  __int64 v9; // r9
  _QWORD **v10; // r8
  int v11; // ecx
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // r9
  __int64 *v15; // rdx
  int i; // r8d
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v20[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( LdrpIsSecureProcess )
    return 3221225659LL;
  v7 = a3 & 0xEFFFFFFF;
  v8 = a3 & 0x10000000;
  if ( a4 < 0 )
  {
    a4 = -a4;
    *(_WORD *)(a1 + 4) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = v7;
  *(_DWORD *)a1 = (a4 | (a4 << 16)) + 4194328;
  if ( (NtCurrentPeb()->BitField & 2) != 0
    && ((v7 & 0xFFFF0000) == 0x20000 || v8 && (NtCurrentPeb()->BitField & 0x40) == 0) )
  {
    *(_DWORD *)(a1 + 52) = -1073741790;
    return 3221225506LL;
  }
  else
  {
    if ( CsrClientProcess )
    {
      if ( a2 )
      {
        v9 = CsrPortMemoryRemoteDelta;
        v10 = (_QWORD **)(a2 + 32);
        *(_QWORD *)(a1 + 40) = CsrPortMemoryRemoteDelta + a2;
        v11 = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 24) = 0LL;
        while ( v11 )
        {
          v12 = *v10;
          --v11;
          ++v10;
          if ( v12 )
          {
            *v12 += v9;
            *(v10 - 1) = (_QWORD *)((char *)v12 - a1);
          }
        }
      }
      v20[0] = 952LL;
      v13 = ((__int64 (__fastcall *)(HANDLE, __int64, __int64, _QWORD, __int64, __int64 *, _QWORD, _QWORD))ZwAlpcSendWaitReceivePort)(
              CsrPortHandle,
              0x20000LL,
              a1,
              0LL,
              a1,
              v20,
              0LL,
              0LL);
      if ( a2 )
      {
        v14 = CsrPortMemoryRemoteDelta;
        v15 = (__int64 *)(a2 + 32);
        *(_QWORD *)(a1 + 40) -= CsrPortMemoryRemoteDelta;
        for ( i = *(_DWORD *)(a2 + 16); i; --i )
        {
          v17 = *v15++;
          if ( v17 )
          {
            v18 = (_QWORD *)(a1 + v17);
            *(v15 - 1) = (__int64)v18;
            *v18 -= v14;
          }
        }
      }
    }
    else
    {
      *(_CLIENT_ID *)(a1 + 8) = NtCurrentTeb()->ClientId;
      v13 = ((__int64 (__fastcall *)(__int64, __int64))CsrServerApiRoutine)(a1, a1);
    }
    if ( v13 < 0 )
      *(_DWORD *)(a1 + 52) = v13;
    return *(unsigned int *)(a1 + 52);
  }
}
