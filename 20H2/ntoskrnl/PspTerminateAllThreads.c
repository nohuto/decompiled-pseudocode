/*
 * XREFs of PspTerminateAllThreads @ 0x14069A29C
 * Callers:
 *     NtTerminateProcess @ 0x1406991D0 (NtTerminateProcess.c)
 *     PspTerminateProcess @ 0x1406995B8 (PspTerminateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 *     PspGetPreviousProcessThread @ 0x14069A4D0 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x14069A900 (PsGetNextProcessThread.c)
 *     DbgkClearProcessDebugObject @ 0x14076EE70 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x14090D734 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r13
  __int64 PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  _DWORD *v12; // r9
  int v13; // r12d
  __int64 i; // rax
  PVOID v15; // rbp
  void *v16; // rax
  ULONG v17; // edx
  _DWORD *v18; // r9
  PVOID Object; // [rsp+70h] [rbp+8h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1448));
  }
  v8 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v10 = a4 & 4 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v17 = 1850045264;
      v16 = (void *)PreviousProcessThread;
    }
    else
    {
      Object = (PVOID)PreviousProcessThread;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)PreviousProcessThread, 0x65547350u);
      v13 = 0;
      do
      {
        if ( PreviousProcessThread != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(PreviousProcessThread + 1300) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(PreviousProcessThread + 1272)) )
          {
            v10 |= 8u;
          }
          else
          {
            v10 = (((unsigned __int8)v10 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(PreviousProcessThread + 1296),
                                                               0xFu))) & 0x10 ^ v10) & 0xFFFFFFF7;
          }
          if ( (v10 & 8) != 0 )
          {
            ++v13;
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0LL, v12);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v13 && BugCheckParameter1 == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = PsGetNextProcessThread(BugCheckParameter1, 0LL); ; i = PsGetNextProcessThread(BugCheckParameter1, v15) )
      {
        v15 = (PVOID)i;
        if ( i != a2 && (v10 & 4) == 0 && (*(_DWORD *)(i + 1296) & 0x8000) == 0 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(i + 1272));
        if ( v15 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v15, 0x6E457350u);
      v16 = Object;
      v17 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v16, v17);
    if ( (v10 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3, 0LL, v18);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v11 == 290 || *(_QWORD *)(BugCheckParameter1 + 1400) && BugCheckParameter1 != v8)
    && !PspRundownSingleProcess(BugCheckParameter1, 0)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
