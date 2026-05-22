/*
 * XREFs of ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x1801020E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x1800BBC48 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x180101F30 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x1801025B8 (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 *     ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x1801027AC (-GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z.c)
 */

__int64 __fastcall SystemButtonEventController::OnDisconnected(SystemButtonEventController *this)
{
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  __int128 i; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL;
        SystemButtonEventBuffer::GetOldestEvent(
          (SystemButtonEventController *)((char *)this + 64),
          (struct SystemButtonEventInfo *)&i);
        SystemButtonEventController::DeliverToNextTarget(this, (const struct SystemButtonEventInfo *)&i) )
  {
    ;
  }
  SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
  SystemButtonEventControllerManager::UnregisterController(SystemButtonEventControllerManager, this);
  return 0LL;
}
