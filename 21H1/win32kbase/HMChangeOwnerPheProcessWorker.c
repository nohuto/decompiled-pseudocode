/*
 * XREFs of HMChangeOwnerPheProcessWorker @ 0x1C002D308
 * Callers:
 *     HMChangeOwnerProcess @ 0x1C002D2C0 (HMChangeOwnerProcess.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0070FB0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMChangeOwnerPheProcess @ 0x1C0121D00 (HMChangeOwnerPheProcess.c)
 *     HMChangeOwnerProcessWorker @ 0x1C0121D40 (HMChangeOwnerProcessWorker.c)
 * Callees:
 *     GreIncQuotaCount @ 0x1C002D460 (GreIncQuotaCount.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C002D494 (EtwTraceUserUpdateHandleOwner.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00712BC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall HMChangeOwnerPheProcessWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi
  HANDLE ProcessId; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int EtwUserHandleType; // eax
  __int64 result; // rax

  v2 = gpKernelHandleTable;
  v5 = (unsigned int)((a1 - (__int64)qword_1C0250D48) >> 5);
  v6 = 3 * v5;
  v7 = *((_QWORD *)gpKernelHandleTable + 3 * v5 + 1);
  v8 = *((_QWORD *)gpKernelHandleTable + 3 * v5);
  --*(_DWORD *)(v7 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v8 + 80) & 8) == 0 && v7 != *(_QWORD *)(a2 + 416) )
  {
    if ( *(_QWORD *)(v8 + 88) )
    {
      GreAcquireHmgrSemaphore();
      --*(_DWORD *)(v7 + 60);
      GreReleaseHmgrSemaphore();
      GreIncQuotaCount(*(_QWORD *)(a2 + 416));
    }
    if ( *(_QWORD *)(v8 + 96) )
    {
      GreAcquireHmgrSemaphore();
      --*(_DWORD *)(v7 + 60);
      GreReleaseHmgrSemaphore();
      GreIncQuotaCount(*(_QWORD *)(a2 + 416));
    }
    if ( *(_QWORD *)(v8 + 128) )
    {
      GreAcquireHmgrSemaphore();
      --*(_DWORD *)(v7 + 60);
      GreReleaseHmgrSemaphore();
      GreIncQuotaCount(*(_QWORD *)(a2 + 416));
    }
  }
  *(_DWORD *)(v8 + 16) = 0;
  if ( (*((_BYTE *)&unk_1C020B6DC + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a2 + 416);
  v2[v6 + 1] = *(_QWORD *)(a2 + 416);
  ProcessId = PsGetProcessId(**(PEPROCESS **)(a2 + 416));
  LOBYTE(v10) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = ProcessId;
  EtwUserHandleType = GetEtwUserHandleType(v10, v11, (unsigned int)ProcessId & 0xFFFFFFFC);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v2[v6], EtwUserHandleType);
  result = v2[v6 + 1];
  ++*(_DWORD *)(result + 68);
  return result;
}
