/*
 * XREFs of ?ReAllocate@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@AAE_NI@Z @ 0x1FCAF8
 * Callers:
 *     ?Insert@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z @ 0xDE3D8 (-Insert@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z.c)
 *     ?Insert@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z @ 0xDEA66 (-Insert@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z.c)
 *     ?Insert@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z @ 0x249EE0 (-Insert@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z.c)
 * Callees:
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

char __thiscall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::ReAllocate(int this, unsigned int a2)
{
  PVOID PoolWithTag; // eax
  PVOID v4; // edi
  char result; // al
  ULONG *v6; // [esp+0h] [ebp-10h]

  if ( ULongLongToULong(8LL * a2, v6) < 0 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8u, 0x63497355u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memcpy(PoolWithTag, *(const void **)(this + 28), 8 * *(_DWORD *)(this + 20));
  ExFreePoolWithTag(*(PVOID *)(this + 28), 0);
  *(_DWORD *)(this + 28) = v4;
  result = 1;
  *(_DWORD *)(this + 20) = a2;
  return result;
}
