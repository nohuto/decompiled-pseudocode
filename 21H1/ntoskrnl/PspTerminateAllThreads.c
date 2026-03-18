/*
 * XREFs of PspTerminateAllThreads @ 0x1407094EC
 * Callers:
 *     PspTerminateProcess @ 0x140709B44 (PspTerminateProcess.c)
 *     NtTerminateProcess @ 0x140709EB0 (NtTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x140709720 (PspGetPreviousProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 *     DbgkClearProcessDebugObject @ 0x14075E490 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x140906864 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(
        ULONG_PTR BugCheckParameter1,
        struct _EX_RUNDOWN_REF *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 Count; // r13
  __int64 PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r12d
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  struct _EX_RUNDOWN_REF *Object; // [rsp+70h] [rbp+8h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1448));
  }
  Count = a2[23].Count;
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v10 = a4 & 4 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v16 = 1850045264;
      v15 = (void *)PreviousProcessThread;
    }
    else
    {
      Object = (struct _EX_RUNDOWN_REF *)PreviousProcessThread;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)PreviousProcessThread, 0x65547350u);
      v12 = 0;
      do
      {
        if ( (struct _EX_RUNDOWN_REF *)PreviousProcessThread != a2 )
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
            ++v12;
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0LL);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && BugCheckParameter1 == Count )
        KeFlushProcessWriteBuffers(0);
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(BugCheckParameter1, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(BugCheckParameter1, v14) )
      {
        v14 = i;
        if ( i != a2 && (v10 & 4) == 0 && (i[162].Count & 0x8000) == 0 )
          ExReleaseRundownProtection_0(i + 159);
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && a2[68].Count == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3, 0LL);
  }
  if ( BugCheckParameter1 != Count && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v11 == 290 || *(_QWORD *)(BugCheckParameter1 + 1400) && BugCheckParameter1 != Count)
    && !PspRundownSingleProcess(BugCheckParameter1, 0)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
