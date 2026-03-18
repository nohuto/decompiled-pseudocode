/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0019FC0
 * Callers:
 *     rimObsStartStopDeviceRead @ 0x1C0180078 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C001A00C (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C001A058 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00AA310 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
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
