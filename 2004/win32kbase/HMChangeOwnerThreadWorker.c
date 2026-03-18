/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1C004FD24
 * Callers:
 *     HMChangeOwnerThread @ 0x1C004FCE0 (HMChangeOwnerThread.c)
 *     MarkThreadsObjects @ 0x1C0095500 (MarkThreadsObjects.c)
 * Callees:
 *     EtwTraceUserUpdateHandleOwner @ 0x1C003BBD4 (EtwTraceUserUpdateHandleOwner.c)
 *     IsGetClassPtrSupported @ 0x1C0059AF8 (IsGetClassPtrSupported.c)
 *     GetClassPtr @ 0x1C005ABF0 (GetClassPtr.c)
 *     LockObjectAssignment @ 0x1C0076B50 (LockObjectAssignment.c)
 *     _HMPheFromObject @ 0x1C008D3D0 (_HMPheFromObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00956EC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C00CE7D8 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  char EtwUserHandleType; // al
  int v13; // r8d
  __int64 result; // rax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v24; // rax
  __int64 CurrentProcessWin32Process; // rbx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 1) + 416LL);
  --*(_DWORD *)(v8 + 68);
  v5[v6 + 1] = a2;
  ThreadId = PsGetThreadId(*(PETHREAD *)a2);
  LOBYTE(v10) = v7[24];
  *((_QWORD *)v7 + 1) = ThreadId;
  EtwUserHandleType = GetEtwUserHandleType(v10, v11, (unsigned int)ThreadId & 0xFFFFFFFC);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v5[v6], EtwUserHandleType, v13);
  *(_QWORD *)(a1 + 16) = v5[v6 + 1];
  result = v5[v6 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 416) + 68LL);
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 888);
    --*(_DWORD *)(v3 + 888);
    v15 = -1073741637;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      v16 = qword_1C02526F8 ? qword_1C02526F8() : -1073741637;
      if ( v16 >= 0 )
      {
        v17 = (int)qword_1C0252700;
        if ( qword_1C0252700 )
          v17 = qword_1C0252700(a1);
        if ( v17 )
        {
          ++*(_DWORD *)(a2 + 892);
          --*(_DWORD *)(v3 + 892);
        }
      }
    }
    if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() && v3 != a2 )
    {
      if ( (*(_DWORD *)(a1 + 324) & 0x20000000) != 0 )
      {
        --*(_DWORD *)(v3 + 896);
        if ( (*(_BYTE *)(HMPheFromObject(a1) + 25) & 1) != 0 )
          *(_DWORD *)(a1 + 324) &= ~0x20000000u;
        else
          ++*(_DWORD *)(a2 + 896);
      }
      if ( a1 == *(_QWORD *)(v3 + 776) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
    }
    result = *(_QWORD *)(v3 + 416);
    if ( *(_QWORD *)(a2 + 416) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0 )
        ClassPtr = 0LL;
      else
        ClassPtr = (__int64 *)GetClassPtr(**(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL), *(_QWORD *)(a2 + 416));
      if ( !ClassPtr )
      {
        v24 = *(_QWORD *)(a1 + 24);
        if ( v24 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 40) + 56LL) + 16LL) + 416LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (__int64 *)GetClassPtr(*((unsigned __int16 *)gpsi + 455), CurrentProcessWin32Process);
      }
      if ( qword_1C0252718 )
        v26 = qword_1C0252718();
      else
        v26 = -1073741637;
      if ( v26 >= 0 && qword_1C0252720 )
        qword_1C0252720(*(_QWORD *)(v3 + 416), a1);
      v27 = *ClassPtr;
      if ( *ClassPtr )
        v28 = *(_QWORD *)(v27 + 16);
      else
        v28 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v28;
      *(_QWORD *)(a1 + 136) = v27;
      result = (__int64)qword_1C0252728;
      if ( qword_1C0252728 )
      {
        result = qword_1C0252728();
        v15 = result;
      }
      if ( v15 >= 0 )
      {
        result = (__int64)qword_1C0252730;
        if ( qword_1C0252730 )
          result = qword_1C0252730(*(_QWORD *)(a1 + 136), a1);
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
