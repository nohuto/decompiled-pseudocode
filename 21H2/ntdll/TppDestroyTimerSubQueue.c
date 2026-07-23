/*
 * XREFs of TppDestroyTimerSubQueue @ 0x18004F5DC
 * Callers:
 *     TppPoolpFree @ 0x18004F4CC (TppPoolpFree.c)
 *     TppInitializeTimerQueue @ 0x180063220 (TppInitializeTimerQueue.c)
 * Callees:
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 */

NTSTATUS __fastcall TppDestroyTimerSubQueue(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  NtClose(*(HANDLE *)(a1 + 32));
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = NtClose(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
