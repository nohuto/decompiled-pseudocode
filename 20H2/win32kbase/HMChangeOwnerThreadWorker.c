/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1C00B0834
 * Callers:
 *     MarkThreadsObjects @ 0x1C0056C20 (MarkThreadsObjects.c)
 *     HMChangeOwnerThread @ 0x1C00B07F0 (HMChangeOwnerThread.c)
 * Callees:
 *     _HMPheFromObject @ 0x1C0047160 (_HMPheFromObject.c)
 *     LockObjectAssignment @ 0x1C0051D60 (LockObjectAssignment.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0056CE0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C00A5564 (EtwTraceUserUpdateHandleOwner.c)
 *     IsGetClassPtrSupported @ 0x1C00B9818 (IsGetClassPtrSupported.c)
 *     GetClassPtr @ 0x1C00BAD70 (GetClassPtr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  HANDLE ThreadId; // rax
  unsigned __int8 v10; // cl
  char EtwUserHandleType; // al
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  LONG_PTR result; // rax
  __int64 v17; // rcx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v23; // rax
  __int64 CurrentProcessWin32Process; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 1) + 424LL);
  --*(_DWORD *)(v8 + 68);
  v5[v6 + 1] = a2;
  ThreadId = PsGetThreadId(*(PETHREAD *)a2);
  v10 = v7[24];
  *((_QWORD *)v7 + 1) = ThreadId;
  EtwUserHandleType = GetEtwUserHandleType(v10);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v5[v6], EtwUserHandleType, v12);
  *(_QWORD *)(a1 + 16) = v5[v6 + 1];
  result = v5[v6 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 424) + 68LL);
  v17 = (unsigned int)(unsigned __int8)v7[24] - 1;
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 896);
    --*(_DWORD *)(v3 + 896);
    v18 = -1073741637;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      v19 = qword_1C02506F8 ? qword_1C02506F8() : -1073741637;
      if ( v19 >= 0 )
      {
        v20 = (int)qword_1C0250700;
        if ( qword_1C0250700 )
          v20 = qword_1C0250700(a1);
        if ( v20 )
        {
          ++*(_DWORD *)(a2 + 900);
          --*(_DWORD *)(v3 + 900);
        }
      }
    }
    if ( v3 != a2 )
    {
      if ( (*(_DWORD *)(a1 + 324) & 0x20000000) != 0 )
      {
        --*(_DWORD *)(v3 + 904);
        if ( (HMPheFromObject((_DWORD *)a1, v13, v14, v15)[25] & 1) != 0 )
          *(_DWORD *)(a1 + 324) &= ~0x20000000u;
        else
          ++*(_DWORD *)(a2 + 904);
      }
      if ( a1 == *(_QWORD *)(v3 + 784) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v13, v14, v15);
    }
    result = *(_QWORD *)(v3 + 424);
    if ( *(_QWORD *)(a2 + 424) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0 )
        ClassPtr = 0LL;
      else
        ClassPtr = (__int64 *)GetClassPtr(**(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL), *(_QWORD *)(a2 + 424));
      if ( !ClassPtr )
      {
        v23 = *(_QWORD *)(a1 + 24);
        if ( v23 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 40) + 56LL) + 16LL) + 424LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (__int64 *)GetClassPtr(*((unsigned __int16 *)gpsi + 455), CurrentProcessWin32Process);
      }
      if ( qword_1C0250718 )
        v25 = qword_1C0250718();
      else
        v25 = -1073741637;
      if ( v25 >= 0 && qword_1C0250720 )
        qword_1C0250720(*(_QWORD *)(v3 + 424), a1);
      v26 = *ClassPtr;
      if ( *ClassPtr )
        v27 = *(_QWORD *)(v26 + 16);
      else
        v27 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v27;
      *(_QWORD *)(a1 + 136) = v26;
      result = (LONG_PTR)qword_1C0250728;
      if ( qword_1C0250728 )
      {
        result = qword_1C0250728();
        v18 = result;
      }
      if ( v18 >= 0 )
      {
        result = (LONG_PTR)qword_1C0250730;
        if ( qword_1C0250730 )
          result = qword_1C0250730(*(_QWORD *)(a1 + 136), a1);
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
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v3 + 456));
  }
  return result;
}
