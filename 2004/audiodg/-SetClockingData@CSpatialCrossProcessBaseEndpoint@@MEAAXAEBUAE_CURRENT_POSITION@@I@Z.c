/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x140062340
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14005FFB8 (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x1400603E4 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 *     ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAXXZ @ 0x140060690 (-Commit@ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct AE_CURRENT_POSITION *a2,
        int a3)
{
  signed __int32 v6; // eax
  char v7; // di
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a2->Flag & 4) == 0 && a2->Flag )
    _InterlockedExchange64(*((volatile __int64 **)this + 161), a2->hnsQPCPosition);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0, 0);
  v7 = v6;
  if ( (v6 & 0xFFFFFF81) == 1 && (v6 & 2) != 0 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
      *((_QWORD *)this + 90),
      (__int64)v9);
    v8 = v9[0];
    if ( v9[0] )
    {
      *(_OWORD *)v9[0] = *(_OWORD *)&a2->u64DevicePosition;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)&a2->u64PaddingFrames;
      *(_QWORD *)(v8 + 32) = *(_QWORD *)&a2->f32FramesPerSecond;
      if ( (v7 & 0x10) != 0 )
      {
        *(_QWORD *)(v8 + 88) = 0LL;
        *(_QWORD *)(v8 + 80) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0xFFFFFFEF);
        v8 = v9[0];
      }
      if ( (v7 & 8) == 0 )
      {
        *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80);
        *(_OWORD *)(v8 + 40) = *(_OWORD *)&a2->u64DevicePosition;
        *(_OWORD *)(v8 + 56) = *(_OWORD *)&a2->u64PaddingFrames;
        *(_QWORD *)(v8 + 72) = *(_QWORD *)&a2->f32FramesPerSecond;
        _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0xCu);
        v8 = v9[0];
      }
      *(_DWORD *)(v8 + 96) = a3;
      util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(v9);
    }
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(v9);
  }
}
