/*
 * XREFs of ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02B4668
 * Callers:
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B46E0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B5648 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C02B5C34 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C02B6AB4 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C004C9E0 (-SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ @ 0x1C02B3D84 (-DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ.c)
 */

void __fastcall DXGVAILGUESTOBJECT::ReleaseReference(DXGVAILGUESTOBJECT *this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 18896LL) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 2002LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( (*((_DWORD *)this + 2))-- == 1 )
  {
    DXGVAILGUESTOBJECT::DestroyVmBusGuestSubscribers(this);
    DXGVAILGUESTOBJECT::SetVmBusChannel(this, 0LL);
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGVAILGUESTOBJECT *)((char *)this + 16), v5);
    operator delete(this);
  }
}
