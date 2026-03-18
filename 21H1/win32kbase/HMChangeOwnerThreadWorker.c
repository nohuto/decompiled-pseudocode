/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1C002D084
 * Callers:
 *     HMChangeOwnerThread @ 0x1C002D040 (HMChangeOwnerThread.c)
 *     MarkThreadsObjects @ 0x1C00710D0 (MarkThreadsObjects.c)
 * Callees:
 *     EtwTraceUserUpdateHandleOwner @ 0x1C002D494 (EtwTraceUserUpdateHandleOwner.c)
 *     IsGetClassPtrSupported @ 0x1C002D4B4 (IsGetClassPtrSupported.c)
 *     LockObjectAssignment @ 0x1C006FAD0 (LockObjectAssignment.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00712BC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  HANDLE ThreadId; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int EtwUserHandleType; // eax
  __int64 result; // rax
  int v14; // edi
  __int64 v15; // rcx
  __int64 *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 CurrentProcessWin32Process; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 1) + 416LL);
  --*(_DWORD *)(v8 + 68);
  v5[v6 + 1] = a2;
  ThreadId = PsGetThreadId(*(PETHREAD *)a2);
  LOBYTE(v10) = v7[24];
  *((_QWORD *)v7 + 1) = ThreadId;
  EtwUserHandleType = GetEtwUserHandleType(v10, v11, (unsigned int)ThreadId & 0xFFFFFFFC);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v5[v6], EtwUserHandleType);
  *(_QWORD *)(a1 + 16) = v5[v6 + 1];
  result = v5[v6 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 416) + 68LL);
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 888);
    --*(_DWORD *)(v3 + 888);
    v14 = -1073741637;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      v20 = qword_1C02586B8 ? qword_1C02586B8() : -1073741637;
      if ( v20 >= 0 )
      {
        v21 = (int)qword_1C02586C0;
        if ( qword_1C02586C0 )
          v21 = qword_1C02586C0(a1);
        if ( v21 )
        {
          ++*(_DWORD *)(a2 + 892);
          --*(_DWORD *)(v3 + 892);
        }
      }
    }
    result = *(_QWORD *)(v3 + 416);
    if ( *(_QWORD *)(a2 + 416) != result )
    {
      if ( (int)IsGetClassPtrSupported() >= 0
        && (v15 = **(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL), qword_1C02586D0) )
      {
        v16 = (__int64 *)qword_1C02586D0(v15, *(_QWORD *)(a2 + 416), hModuleWin);
      }
      else
      {
        v16 = 0LL;
      }
      if ( !v16 )
      {
        v22 = *(_QWORD *)(a1 + 24);
        if ( v22 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 40) + 56LL) + 16LL) + 416LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
        if ( (int)IsGetClassPtrSupported() >= 0 && qword_1C02586D0 )
          v16 = (__int64 *)qword_1C02586D0(*((unsigned __int16 *)gpsi + 455), CurrentProcessWin32Process, hModuleWin);
        else
          v16 = 0LL;
      }
      if ( qword_1C02586D8 )
        v17 = qword_1C02586D8();
      else
        v17 = -1073741637;
      if ( v17 >= 0 && qword_1C02586E0 )
        qword_1C02586E0(*(_QWORD *)(v3 + 416), a1);
      v18 = *v16;
      if ( *v16 )
        v19 = *(_QWORD *)(v18 + 16);
      else
        v19 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v19;
      *(_QWORD *)(a1 + 136) = v18;
      result = (__int64)qword_1C02586E8;
      if ( qword_1C02586E8 )
      {
        result = qword_1C02586E8();
        v14 = result;
      }
      if ( v14 >= 0 )
      {
        result = (__int64)qword_1C02586F0;
        if ( qword_1C02586F0 )
          result = qword_1C02586F0(*(_QWORD *)(a1 + 136), a1);
        if ( !(_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 136);
          ++*(_DWORD *)(result + 72);
        }
      }
    }
  }
  else if ( v7[24] == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment(a1 + 80, *(_QWORD *)(v3 + 448));
  }
  return result;
}
