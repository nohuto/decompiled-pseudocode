/*
 * XREFs of PplGenericFreeFunction @ 0x1C0008260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PplGenericFreeFunction(_SLIST_ENTRY *Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  unsigned __int64 Alignment; // rbx

  Alignment = Lookaside[1].L.ListHead.Alignment;
  ++*(_DWORD *)(Alignment + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)Alignment) >= *(_WORD *)(Alignment + 16) )
  {
    ++*(_DWORD *)(Alignment + 32);
    (*(void (__fastcall **)(_SLIST_ENTRY *, unsigned __int64))(Alignment + 56))(Buffer, Alignment);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)Alignment, Buffer);
  }
}
