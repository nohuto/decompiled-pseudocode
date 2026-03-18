/*
 * XREFs of NtUserWaitForRedirectionStartComplete @ 0x1C0205360
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C012A768 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserWaitForRedirectionStartComplete()
{
  NTSTATUS v0; // ebx
  PVOID v1; // rdi
  struct DwmState *RedirectionEvent; // rcx
  NTSTATUS v3; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0LL;
  GreLockDwmState();
  RedirectionEvent = GreGetRedirectionEvent();
  if ( RedirectionEvent )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(RedirectionEvent, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v1 = Object;
    v0 = v3;
  }
  GreUnlockDwmState(RedirectionEvent);
  if ( v0 >= 0 && v1 )
  {
    v0 = KeWaitForSingleObject(v1, Executive, 0, 1u, 0LL);
    ObfDereferenceObject(v1);
  }
  return (unsigned __int64)(unsigned int)~v0 >> 31;
}
