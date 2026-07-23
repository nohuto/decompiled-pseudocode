/*
 * XREFs of IopLoadUnloadDriver @ 0x1407809E0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x140399FC8 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopOpenRegistryKey @ 0x140769C64 (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x140771C94 (IopCallDriverReinitializationRoutines.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v2 = *(_QWORD *)(a1 + 56);
  KeyHandle = 0LL;
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&KeyHandle, 0LL, *(UNICODE_STRING **)(a1 + 64), 0x20019u, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(KeyHandle, 1, 0, &v5);
      if ( v3 == -1073740955 )
      {
        v3 = v5;
      }
      else if ( v3 == -1073740914 )
      {
        v3 = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0);
    }
  }
  *(_DWORD *)(a1 + 72) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
