/*
 * XREFs of MiGetSlabAllocatorStandbyList @ 0x1405530C4
 * Callers:
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x140236EDC (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiGetSlabAllocatorStandbyList(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v5[0] = a1;
    v6 = 0LL;
    v4 = *(_QWORD *)(a1 + 40) >> 39;
    v5[1] = (a1 + 0x58000000000LL) / 48;
    MiEnumerateSlabAllocators(
      *(_QWORD *)(qword_140C4E688 + 8 * (v4 & 0x3FF)),
      (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiGetSlabStandbyListWorker,
      (__int64)v5);
    return v6;
  }
  else
  {
    v2 = ((*(_QWORD *)a1 & 0xFFFFFFF000000000uLL | ((unsigned __int64)*(unsigned __int8 *)(a1 + 39) << 28)) << 8) | *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 136));
    return *(_QWORD *)(v2 + 40) + 64LL;
  }
}
