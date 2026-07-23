/*
 * XREFs of PiKsrNotifyInitialize @ 0x140A92350
 * Callers:
 *     PiKsrInitialize @ 0x140A541E8 (PiKsrInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14037ECF0 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x14061C450 (ExCreateCallback.c)
 */

__int64 PiKsrNotifyInitialize()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  PnpKsrNotifyLock.Owner = 0LL;
  PnpKsrNotifyLock.Contention = 0;
  PnpKsrNotifyLock.Event.Header.SignalState = 0;
  qword_140C43168 = (__int64)&PnpKsrNotifyList;
  PnpKsrNotifyList = &PnpKsrNotifyList;
  PnpKsrNotifyLock.Event.Header.WaitListHead.Blink = &PnpKsrNotifyLock.Event.Header.WaitListHead;
  PnpKsrNotifyLock.Event.Header.WaitListHead.Flink = &PnpKsrNotifyLock.Event.Header.WaitListHead;
  DestinationString = 0LL;
  PnpKsrNotifyLock.Count = 1;
  LOWORD(PnpKsrNotifyLock.Event.Header.Lock) = 1;
  PnpKsrNotifyLock.Event.Header.Size = 6;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ExCreateCallback(&PnpKsrCallbackObject, &ObjectAttributes, 0, 0) >= 0 )
    ExRegisterCallback(PnpKsrCallbackObject, (PCALLBACK_FUNCTION)PipKsrCallback, IopRootDeviceNode);
  return 0LL;
}
