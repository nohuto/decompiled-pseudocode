/*
 * XREFs of IopLoadUnloadDriver @ 0x140780820
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x140399E78 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopOpenRegistryKey @ 0x140769AA4 (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x140771AD4 (IopCallDriverReinitializationRoutines.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v2 = *(_QWORD *)(a1 + 56);
  Handle = 0LL;
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&Handle, 0LL, *(UNICODE_STRING **)(a1 + 64), 0x20019u, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(Handle, 1, 0, &v5);
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
