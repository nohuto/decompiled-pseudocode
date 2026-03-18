/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0008EE4
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0008E90 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C012FE10 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0193580 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C0194E80 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A44B0 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A44F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A4FE0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     AddEdgePalmRejectionZone @ 0x1C01A8910 (AddEdgePalmRejectionZone.c)
 *     AddPalmRejectionDelayZone @ 0x1C01A8964 (AddPalmRejectionDelayZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C01A8A00 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0008F2C (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 */

struct DelayZonePalmRejection *DelayZonePalmRejection::GetInstance(void)
{
  struct DelayZonePalmRejection *result; // rax
  DelayZonePalmRejection *v1; // rcx

  if ( DelayZonePalmRejection::s_instance )
    return DelayZonePalmRejection::s_instance;
  result = (struct DelayZonePalmRejection *)Win32AllocPoolZInit(0xA8uLL);
  DelayZonePalmRejection::s_instance = result;
  if ( result )
  {
    DelayZonePalmRejection::Initialize(v1);
    return DelayZonePalmRejection::s_instance;
  }
  return result;
}
