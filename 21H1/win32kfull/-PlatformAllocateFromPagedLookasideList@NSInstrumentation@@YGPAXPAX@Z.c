/*
 * XREFs of ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YGPAXPAX@Z @ 0x2496CB
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEPAXXZ @ 0x97DEE (-Allocate@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ @ 0xA8E6E (-Allocate@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ @ 0x183EDD (-Allocate@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ @ 0x1A25E7 (-Allocate@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __thiscall NSInstrumentation::PlatformAllocateFromPagedLookasideList(int ecx0)
{
  PSLIST_ENTRY result; // eax
  int v3; // [esp-4h] [ebp-8h]

  ++*(_DWORD *)(ecx0 + 12);
  result = InterlockedPopEntrySList((PSLIST_HEADER)ecx0);
  if ( !result )
  {
    v3 = *(_DWORD *)(ecx0 + 32);
    ++*(_DWORD *)(ecx0 + 16);
    return (PSLIST_ENTRY)(*(int (__stdcall **)(_DWORD, _DWORD, int))(ecx0 + 40))(
                           *(_DWORD *)(ecx0 + 28),
                           *(_DWORD *)(ecx0 + 36),
                           v3);
  }
  return result;
}
