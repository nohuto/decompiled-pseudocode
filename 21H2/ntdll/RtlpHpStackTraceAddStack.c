/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1801089C0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlCaptureStackBackTrace @ 0x1800526A0 (RtlCaptureStackBackTrace.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180108AE8 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010938C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x180118AB0 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180119088 (RtlStackDbStackRemove.c)
 */

signed __int64 __fastcall RtlpHpStackTraceAddStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rbx
  PVOID *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  signed __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_18016D578 & 1) != 0
    && (dword_18016D578 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v12) >= 0 )
  {
    v11 = RtlpHpEnvHandle;
    v7 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v11);
    v5 = (__int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = RtlStackDbStackAdd(&qword_18016D580, v5);
        v9 = v8;
        if ( v8 )
        {
          if ( (unsigned int)RtlpHpStackTraceAllocAdd(v12, a2, v8) )
            v9 = 0LL;
          if ( v9 )
            RtlStackDbStackRemove(&qword_18016D580, v9);
        }
      }
    }
  }
  result = RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v5 )
  {
    v11 = RtlpHpEnvHandle;
    return RtlpHpMetadataFree(v5, &v11);
  }
  return result;
}
