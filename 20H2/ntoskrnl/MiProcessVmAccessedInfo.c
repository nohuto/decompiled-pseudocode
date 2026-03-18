/*
 * XREFs of MiProcessVmAccessedInfo @ 0x140539E30
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402EA020 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x140343CE0 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14039D940 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053A4D0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053AC80 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char __fastcall MiProcessVmAccessedInfo(
        __int64 a1,
        _DWORD *a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, __int64, unsigned __int64, __int64),
        __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8

  v4 = (unsigned int)*a2;
  v5 = a2 + 2;
  v10 = (unsigned __int64)&a2[2 * v4 + 2];
  while ( (unsigned __int64)v5 < v10 )
  {
    v11 = *v5 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v4) = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v4 & 1) != 0 )
    {
      LOBYTE(v4) = MiGetWsleContents(v12, v11);
      v13 = 0LL;
      LOBYTE(v4) = (v4 & 0xF) - 8;
      if ( (unsigned __int8)v4 > 2u )
        v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v13 )
      {
        LODWORD(v4) = a3(a1, v5, v13, v11, a4);
        if ( (_DWORD)v4 )
          break;
      }
    }
    ++v5;
  }
  *a2 = 0;
  return v4;
}
