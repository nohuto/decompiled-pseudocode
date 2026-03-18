/*
 * XREFs of ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YGXPAX0@Z @ 0x2496EE
 * Callers:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z @ 0x97C26 (-Free@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070 (-Free@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z @ 0x184183 (-Free@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z @ 0x1A2979 (-Free@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFreeToPagedLookasideList(int a1, struct _SINGLE_LIST_ENTRY *a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 4);
  ++*(_DWORD *)(a1 + 20);
  if ( v2 < *(_WORD *)(a1 + 8) )
  {
    InterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
  }
  else
  {
    ++*(_DWORD *)(a1 + 24);
    (*(void (__stdcall **)(struct _SINGLE_LIST_ENTRY *))(a1 + 44))(a2);
  }
}
