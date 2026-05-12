/*
 * XREFs of RaDeleteBus @ 0x1C00789E4
 * Callers:
 *     RaidAdapterHack @ 0x1C002BD1C (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1C002FD44 (RaidDeleteAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DA00 (memset.c)
 */

void *__fastcall RaDeleteBus(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 16));
    *(_BYTE *)a1 = 0;
    return memset((void *)(a1 + 8), 0, 0x40uLL);
  }
  return result;
}
