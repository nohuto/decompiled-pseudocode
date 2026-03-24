/*
 * XREFs of NtCreateRegistryTransaction @ 0x1406BE000
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, __int64 a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  BOOLEAN v9; // si
  char PreviousMode; // r15
  __int64 v11; // rax
  PADAPTER_OBJECT v12; // rcx
  int Object; // edi
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-28h]

  DmaAdapter = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    if ( a4 )
    {
      Object = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v11 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v11 = (__int64)a1;
        *(_QWORD *)v11 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      LOBYTE(v8) = PreviousMode;
      Object = ObCreateObjectEx(v8, (_DWORD)CmRegistryTransactionType, a3, PreviousMode);
      if ( Object >= 0 )
      {
        v12 = DmaAdapter;
        *DmaAdapter = 0LL;
        v12[1] = 0LL;
        v12->DmaOperations = 0LL;
        Object = ObInsertObjectEx(v12, 0LL, 0, 0LL, (__int64)&Handle);
        DmaAdapter = 0LL;
        if ( Object >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
          Object = 0;
        }
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Object = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)Object;
}
