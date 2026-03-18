/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C006EDEC
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C006ED98 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0138150 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C019B7A0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C019D0A0 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01AC590 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01AC5D0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AD0C0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     AddEdgePalmRejectionZone @ 0x1C01B09F0 (AddEdgePalmRejectionZone.c)
 *     AddPalmRejectionDelayZone @ 0x1C01B0A44 (AddPalmRejectionDelayZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C01B0AE0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C002133C (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
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
