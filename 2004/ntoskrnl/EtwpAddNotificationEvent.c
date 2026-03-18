/*
 * XREFs of EtwpAddNotificationEvent @ 0x1406373C4
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     EtwpAddDataSource @ 0x14063746C (EtwpAddDataSource.c)
 */

__int64 __fastcall EtwpAddNotificationEvent(void *a1, char a2)
{
  NTSTATUS v3; // eax
  struct _DMA_ADAPTER *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  volatile signed __int64 *v7; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  DmaAdapter = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  v4 = DmaAdapter;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = EtwpAddDataSource(KeGetCurrentThread()->ApcState.Process);
    v7 = (volatile signed __int64 *)v6;
    if ( v6 )
    {
      if ( a2 )
        v7 = (volatile signed __int64 *)(v6 + 8);
      if ( _InterlockedCompareExchange64(v7, (signed __int64)v4, 0LL) )
        v5 = -1073740008;
      else
        v4 = 0LL;
    }
    else
    {
      v5 = -1073741801;
    }
  }
  if ( v4 )
    HalPutDmaAdapter(v4);
  return v5;
}
