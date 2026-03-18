/*
 * XREFs of ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C02DD2FC
 * Callers:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00F9EF4 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00FD454 (-Free@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0221F3C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C02452F8 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NSInstrumentation::PlatformFreeToPagedLookasideList(
        PSLIST_HEADER ListHead,
        PSLIST_ENTRY ListEntry,
        void *a3)
{
  ++*((_DWORD *)&ListHead[1].HeaderX64 + 3);
  if ( ExQueryDepthSList(ListHead) < LOWORD(ListHead[1].Alignment) )
  {
    ExpInterlockedPushEntrySList(ListHead, ListEntry);
  }
  else
  {
    ++LODWORD(ListHead[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY))ListHead[3].Region)(ListEntry);
  }
}
