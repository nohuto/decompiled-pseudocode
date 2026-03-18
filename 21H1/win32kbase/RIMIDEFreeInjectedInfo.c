/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C0059D5C
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0059C4C (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

__int64 __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 72) )
    {
      Win32FreePool(*(_QWORD *)(v2 + 72));
      v2 = *(_QWORD *)(a1 + 384);
    }
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 384) = 0LL;
  }
  return result;
}
