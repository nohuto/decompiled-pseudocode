/*
 * XREFs of _NtUserWaitForRedirectionStartComplete@0 @ 0x16B369
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetRedirectionEvent@0 @ 0xEC466 (_GreGetRedirectionEvent@0.c)
 */

BOOL __stdcall NtUserWaitForRedirectionStartComplete()
{
  NTSTATUS v0; // esi
  PVOID v1; // edi
  void *RedirectionEvent; // ecx
  NTSTATUS v3; // eax
  PVOID Object; // [esp+Ch] [ebp-4h] BYREF

  v0 = 0;
  v1 = 0;
  GreLockDwmState();
  RedirectionEvent = (void *)GreGetRedirectionEvent();
  if ( RedirectionEvent )
  {
    Object = 0;
    v3 = ObReferenceObjectByHandle(RedirectionEvent, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0);
    v1 = Object;
    v0 = v3;
  }
  GreUnlockDwmState();
  if ( v0 >= 0 && v1 )
  {
    v0 = KeWaitForSingleObject(v1, Executive, 0, 1u, 0);
    ObfDereferenceObject(v1);
  }
  return v0 >= 0;
}
