/*
 * XREFs of sub_180026A18 @ 0x180026A18
 * Callers:
 *     sub_180029174 @ 0x180029174 (sub_180029174.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026A18(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r14d
  struct _RTL_CRITICAL_SECTION *v8; // r15
  int v9; // eax
  int v10; // ebx
  RPC_STATUS v11; // eax
  HANDLE CurrentThread; // rax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // ebx
  __int64 v15; // rdi
  _QWORD *v16; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v18; // rax
  char *v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+70h] [rbp-90h] BYREF
  void *TokenHandle; // [rsp+78h] [rbp-88h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+98h] [rbp-68h]
  _QWORD TokenInformation[12]; // [rsp+A0h] [rbp-60h] BYREF

  v26 = a4;
  v22 = 0;
  v25 = 0LL;
  TokenHandle = 0LL;
  v7 = 0;
  ReturnLength = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v27 = v8;
  v9 = sub_18002880C(*(_DWORD *)(a1 + 212));
  if ( v9 )
  {
    v10 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v10 = v9;
  }
  else
  {
    v11 = RpcImpersonateClient(0LL);
    if ( !v11 || v11 == 1725 )
    {
      v7 = 1;
      CurrentThread = GetCurrentThread();
      v13 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
      if ( v13 >= 0 || (v10 = v13 | 0x10000000, v10 >= 0) )
      {
        v14 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        if ( v14 >= 0 || (v10 = v14 | 0x10000000, v10 >= 0) )
        {
          RpcRevertToSelf();
          v7 = 0;
          v15 = v25;
          v16 = (_QWORD *)(v25 + 264);
          if ( *(_QWORD *)(v25 + 264) || (v10 = CreateOnDemandBrokerClient(L"AudioSrv", v25 + 264), v10 >= 0) )
          {
            if ( !*(_QWORD *)(v15 + 272) )
            {
              ProcessHeap = GetProcessHeap();
              v18 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
              if ( !v18 )
              {
                v10 = -2147024882;
                goto LABEL_20;
              }
              v18[3] = 0;
              v18[2] = 1;
              *(_QWORD *)v18 = &off_18003EF88;
              *((_QWORD *)v18 + 2) = off_18003EF58;
              v20 = (char *)(v18 + 4);
              v21 = *(_QWORD *)(v15 + 272);
              if ( v21 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              *(_QWORD *)(v15 + 272) = v20;
            }
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v16 + 24LL))(
                    *v16,
                    TokenInformation[0],
                    702LL,
                    *(_QWORD *)(v15 + 272),
                    &v22);
            if ( v10 >= 0 )
              v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*v16 + 56LL))(
                      *v16,
                      TokenInformation[0],
                      0LL,
                      v22,
                      a2,
                      a3,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      v26);
          }
        }
      }
    }
    else
    {
      v10 = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        v10 = v11;
    }
  }
LABEL_20:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v7 )
    RpcRevertToSelf();
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v10;
}
