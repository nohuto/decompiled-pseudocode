/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1C0166D40
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C016721C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 */

void *__fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  void *result; // rax
  __int64 v3; // rbx
  void *v4; // rax

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
      Win32FreePool(v3);
      return 0LL;
    }
    return (void *)v3;
  }
  return result;
}
