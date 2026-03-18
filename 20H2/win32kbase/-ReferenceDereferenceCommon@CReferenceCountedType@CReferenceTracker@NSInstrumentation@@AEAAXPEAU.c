/*
 * XREFs of ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8
 * Callers:
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0011970 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EngLockSurface @ 0x1C00473A0 (EngLockSurface.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0078140 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0092E14 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 * Callees:
 *     ?Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ @ 0x1C00CF0D0 (-Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C014F1CC (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C014F3C8 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned __int8 a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // r13
  signed __int64 v5; // rbp
  char v6; // r15
  __int64 v7; // rsi
  signed __int64 v8; // rdi
  char v9; // r14
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *PoolWithTag; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // rax
  volatile signed __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rbp
  PVOID *v17; // r8
  NSInstrumentation::CPrioritizedWriterLock *v18; // r14
  __int64 v19; // rax
  unsigned __int16 CurrentThreadId; // ax
  __int16 v21; // cx
  PVOID BackTrace[20]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v23[216]; // [rsp+D0h] [rbp-D8h] BYREF

  v4 = this;
  v5 = _InterlockedIncrement64((volatile signed __int64 *)a2 + 5);
  v6 = 0;
  v7 = v5 / 1011;
  if ( v5 && v5 == 1011 * (v5 / 1011) )
  {
    --v7;
    v6 = 1;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 >= 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v8 = -v8;
  }
  if ( v8 != v7 )
  {
    do
    {
      KeWaitForSingleObject(*((PVOID *)a2 + 2), UserRequest, 0, 0, 0LL);
      v8 = *((_QWORD *)a2 + 4);
      if ( v8 >= 0 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        v8 = -v8;
      }
    }
    while ( v8 != v7 );
    v4 = this;
  }
  if ( v6 )
  {
    KeWaitForSingleObject(*((PVOID *)a2 + 3), UserRequest, 0, 0, 0LL);
    KeClearEvent(*((PRKEVENT *)a2 + 3));
    if ( !v9 )
    {
      PoolWithTag = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)ExAllocatePoolWithTag(PagedPoolSession, 0x1000uLL, 0x62497355u);
      if ( PoolWithTag )
      {
        v11 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
        if ( *v11 != a2 )
          __fastfail(3u);
        *(_QWORD *)PoolWithTag = a2;
        *((_QWORD *)PoolWithTag + 1) = v11;
        *v11 = PoolWithTag;
        *((_QWORD *)a2 + 1) = PoolWithTag;
      }
      else
      {
        *((_QWORD *)a2 + 4) = -v7;
      }
    }
    if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 != a2 )
    {
      v12 = *((_QWORD *)a2 + 1);
      if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v12 != a2
        || (v13 = *(_QWORD **)(v12 + 8), *v13 != v12) )
      {
        __fastfail(3u);
      }
      *((_QWORD *)a2 + 1) = v13;
      *v13 = a2;
      memmove((void *)(v12 + 52), (char *)a2 + 52, 0xFCCuLL);
      v14 = *(_QWORD *)a2;
      if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(*(_QWORD *)a2 + 8LL) != a2 )
        __fastfail(3u);
      *(_QWORD *)v12 = v14;
      *(_QWORD *)(v12 + 8) = a2;
      *(_QWORD *)(v14 + 8) = v12;
      *(_QWORD *)a2 = v12;
    }
    _InterlockedExchange((volatile __int32 *)a2 + 12, 0);
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, ++v7, v8) )
      _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, -v7, -v8);
    KeSetEvent(*((PRKEVENT *)a2 + 2), 0, 0);
  }
  LOWORD(v15) = -1;
  v16 = v5 % 1011;
  if ( (unsigned int)Feature_Servicing_gdi_leak_tracking__private_IsEnabled() )
  {
    memset(v23, 0, 0xA0uLL);
    v17 = (PVOID *)v23;
  }
  else
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    v17 = BackTrace;
  }
  RtlCaptureStackBackTrace(0, 0x14u, v17, 0LL);
  v18 = (NSInstrumentation::CPrioritizedWriterLock *)*((_QWORD *)v4 + 4);
  v19 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
          v18,
          (struct NSInstrumentation::CBackTrace *)BackTrace);
  if ( v19
    || (v19 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                v18,
                (struct NSInstrumentation::CBackTrace *)BackTrace)) != 0 )
  {
    v15 = *(_DWORD *)(v19 + 180);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)a2 + 4, -v7);
  }
  *((_WORD *)a2 + 2 * v16 + 26) = (2 * v15) | *((_WORD *)a2 + 2 * v16 + 26) & 1;
  CurrentThreadId = (unsigned __int16)PsGetCurrentThreadId();
  v21 = *((_WORD *)a2 + 2 * v16 + 26);
  *((_WORD *)a2 + 2 * v16 + 27) = CurrentThreadId;
  *((_WORD *)a2 + 2 * v16 + 26) = a3 | v21 & 0xFFFE;
  if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 12) == 1011 )
    KeSetEvent(*((PRKEVENT *)a2 + 3), 0, 0);
}
