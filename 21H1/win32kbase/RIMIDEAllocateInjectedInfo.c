/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1C016F5F0
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 */

void *__fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  void *result; // rax
  __int64 v3; // rbx
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  result = Win32AllocPoolZInit(0x60uLL, 0x6A6E6952u);
  v3 = (__int64)result;
  if ( result )
  {
    v4 = Win32AllocPoolZInit(8LL * *(unsigned int *)(a1 + 88), 0x6A6E6952u);
    if ( v4 )
    {
      *(_QWORD *)(v3 + 72) = v4;
    }
    else
    {
      Win32FreePool(v3, v5, v6);
      return 0LL;
    }
    return (void *)v3;
  }
  return result;
}
