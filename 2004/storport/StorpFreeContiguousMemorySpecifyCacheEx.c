/*
 * XREFs of StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C003A3F8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorpFreeContiguousMemorySpecifyCacheEx(
        __int64 a1,
        void *a2,
        SIZE_T a3,
        MEMORY_CACHING_TYPE a4,
        __int64 a5)
{
  __int64 v5; // rax
  char v7; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)(a1 - 16);
  if ( *(_BYTE *)(*(_QWORD *)v5 + 720LL) && *(_DWORD *)(*(_QWORD *)v5 + 740LL) == 3 )
  {
    v7 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, void *, char))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 712LL) + 8LL)
                                                                  + 24LL))(
      *(_QWORD *)(*(_QWORD *)v5 + 712LL),
      (unsigned int)a3,
      a5,
      a2,
      v7);
  }
  else
  {
    MmFreeContiguousMemorySpecifyCache(a2, a3, a4);
  }
  return 0LL;
}
