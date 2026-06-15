/*
 * XREFs of ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x140060AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14005FF40 (--1ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x1400602FC (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 *a4,
        __int64 *a5)
{
  unsigned int v8; // ebx
  signed __int32 v9; // eax
  char v10; // si
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = -2005139387;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0, 0);
  v10 = v9;
  if ( (v9 & 0xFFFFFF81) == 1 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadAccess(
      *((_QWORD *)this + 90),
      (__int64)v14);
    v11 = v14[0];
    if ( v14[0] )
    {
      *(_OWORD *)&a2->u64DevicePosition = *(_OWORD *)(v14[0] + 40LL);
      *(_OWORD *)&a2->u64PaddingFrames = *(_OWORD *)(v11 + 56);
      *(_QWORD *)&a2->f32FramesPerSecond = *(_QWORD *)(v11 + 72);
      *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)v11;
      *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v11 + 16);
      *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v11 + 32);
      if ( (v10 & 0x10) != 0 )
      {
        *a4 = 0LL;
        v12 = 0LL;
      }
      else
      {
        *a4 = *(_QWORD *)(v11 + 88);
        v12 = *(_QWORD *)(v11 + 80);
      }
      v8 = 0;
      *a5 = v12;
    }
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::~ReadAccess((__int64)v14);
  }
  return v8;
}
