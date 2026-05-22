/*
 * XREFs of ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x180101F50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x1800BBBA8 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x180101DE4 (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x180101EA0 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180102528 (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 *     ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x18010271C (-GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z.c)
 */

__int64 __fastcall SystemButtonEventController::OnContinueProcessing(
        SystemButtonEventController *this,
        const struct SystemButtonEventInfo *a2)
{
  __int128 *i; // rax
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  __int128 j; // [rsp+20h] [rbp-28h] BYREF

  InputETW::SystemButtonEventController::ContinueProcessing(
    *(_QWORD *)a2,
    *((_DWORD *)a2 + 2),
    *((_BYTE *)a2 + 12),
    *((_BYTE *)a2 + 13));
  for ( i = (__int128 *)*((_QWORD *)this + 8); i != *((__int128 **)this + 9); ++i )
  {
    j = *i;
    if ( (_QWORD)j == *(_QWORD *)a2 )
    {
      if ( DWORD2(j) == *((_DWORD *)a2 + 2) && BYTE12(j) == *((_BYTE *)a2 + 12) )
      {
        if ( i == *((__int128 **)this + 8) )
        {
          SystemButtonEventBuffer::GetOldestEvent(
            (SystemButtonEventController *)((char *)this + 64),
            (struct SystemButtonEventInfo *)&j);
          if ( !*((_BYTE *)a2 + 13) )
            SystemButtonEventController::DeliverToNextTarget(this, a2);
        }
        else
        {
          for ( j = 0LL;
                SystemButtonEventBuffer::GetOldestEvent(
                  (SystemButtonEventController *)((char *)this + 64),
                  (struct SystemButtonEventInfo *)&j);
                SystemButtonEventController::DeliverToNextTarget(this, (const struct SystemButtonEventInfo *)&j) )
          {
            ;
          }
          SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
          SystemButtonEventControllerManager::UnregisterController(SystemButtonEventControllerManager, this);
        }
        return 0LL;
      }
    }
    else if ( (unsigned __int64)j > *(_QWORD *)a2 )
    {
      return 0LL;
    }
  }
  return 0LL;
}
