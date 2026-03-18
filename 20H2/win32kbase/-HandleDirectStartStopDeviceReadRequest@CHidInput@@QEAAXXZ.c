/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0023600
 * Callers:
 *     rimObsStartStopDeviceRead @ 0x1C017DC48 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C002364C (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0023698 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0027070 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 */

void __fastcall CHidInput::HandleDirectStartStopDeviceReadRequest(CHidInput *this)
{
  struct _KEVENT *DispatcherObjectByName; // rax

  if ( *((_QWORD *)this + 1) != -1LL )
  {
    if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
    {
      CHidInput::OnDirectStartStopReadNotification(this);
    }
    else
    {
      DispatcherObjectByName = (struct _KEVENT *)CRIMBase::GetDispatcherObjectByName(this);
      KeSetEvent(DispatcherObjectByName, 1, 0);
    }
  }
}
