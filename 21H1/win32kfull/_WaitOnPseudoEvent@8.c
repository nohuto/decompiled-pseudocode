/*
 * XREFs of _WaitOnPseudoEvent@8 @ 0xE3978
 * Callers:
 *     _xxxWaitForInputIdle@12 @ 0xE365C (_xxxWaitForInputIdle@12.c)
 * Callees:
 *     <none>
 */

int __fastcall WaitOnPseudoEvent(PVOID *a1, int a2)
{
  NTSTATUS v4; // esi
  void *v6; // [esp-4h] [ebp-34h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-20h] BYREF
  PVOID Object; // [esp+28h] [ebp-8h] BYREF
  void *EventHandle; // [esp+2Ch] [ebp-4h] BYREF

  EventHandle = 0;
  if ( *a1 )
  {
    if ( *a1 != (PVOID)-1 )
      return 128;
    return 0;
  }
  else
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwCreateEvent(&EventHandle, (ACCESS_MASK)&loc_1F0002 + 1, &ObjectAttributes, NotificationEvent, 0) >= 0 )
    {
      Object = 0;
      v4 = ObReferenceObjectByHandle(
             EventHandle,
             (ACCESS_MASK)&loc_1F0002 + 1,
             (POBJECT_TYPE)ExEventObjectType,
             0,
             &Object,
             0);
      v6 = EventHandle;
      *a1 = Object;
      ZwClose(v6);
      if ( v4 >= 0 )
        return 128;
      return -1;
    }
    if ( a2 == -1 )
      return -1;
    return 258;
  }
}
