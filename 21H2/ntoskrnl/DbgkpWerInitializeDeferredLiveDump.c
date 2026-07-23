/*
 * XREFs of DbgkpWerInitializeDeferredLiveDump @ 0x140889508
 * Callers:
 *     DbgkpWerCaptureLiveFullDump @ 0x140888EE0 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateTimer @ 0x1403FBDE0 (ZwCreateTimer.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1404EEC08 (DbgkpWerAllocateNonpagedPool.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall DbgkpWerInitializeDeferredLiveDump(__int64 a1)
{
  __int64 v1; // r14
  NTSTATUS v3; // eax
  int v4; // ebx
  int v5; // eax
  struct _DMA_ADAPTER *v6; // rdi
  _QWORD *NonpagedPool; // rax
  _QWORD *Tag; // [rsp+20h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE TimerHandle; // [rsp+90h] [rbp+20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  TimerHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v3 = ZwCreateTimer(&TimerHandle, 0x1F0003u, &ObjectAttributes, NotificationTimer);
  v4 = v3;
  if ( v3 >= 0 )
  {
    DmaAdapter = 0LL;
    LODWORD(Tag) = 1466393156;
    v5 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)TimerHandle,
           2031619LL,
           (POBJECT_TYPE *)ExTimerObjectType,
           0,
           Tag,
           &DmaAdapter,
           0LL,
           0LL);
    v6 = DmaAdapter;
    v4 = v5;
    if ( v5 >= 0 )
    {
      ZwClose(TimerHandle);
      TimerHandle = 0LL;
      *(_QWORD *)(v1 + 16) = v6;
      NonpagedPool = DbgkpWerAllocateNonpagedPool();
      if ( !NonpagedPool )
      {
        DbgPrintEx(5u, 0, "DBGK: Could not allocate timer.\n");
        return 3221225495LL;
      }
      *(_QWORD *)(a1 + 120) = NonpagedPool;
      *NonpagedPool = 0LL;
      NonpagedPool[2] = DbgkpWerDeferredWriteRoutine;
      NonpagedPool[3] = a1;
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Failed to reference timer, status 0x%X\n", v5);
    }
    if ( v4 < 0 )
    {
      if ( v6 )
      {
        HalPutDmaAdapter(v6);
        *(_QWORD *)(v1 + 16) = 0LL;
      }
      if ( TimerHandle )
        ZwClose(TimerHandle);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Failed to create timer, status 0x%X\n", v3);
  }
  return (unsigned int)v4;
}
