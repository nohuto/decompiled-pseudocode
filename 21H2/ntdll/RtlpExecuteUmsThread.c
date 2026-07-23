/*
 * XREFs of RtlpExecuteUmsThread @ 0x1800A23B1
 * Callers:
 *     RtlExecuteUmsThread @ 0x1800F7320 (RtlExecuteUmsThread.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall RtlpExecuteUmsThread(__int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // r8

  v1 = NtCurrentTeb()->TlsSlots[4];
  _R11 = v1[156];
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)(a1 + 1272),
         (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread & 0xFFFFFFFFFFFFFFFCuLL,
         0LL) )
  {
    return 3221227292LL;
  }
  _RCX = *(_QWORD *)(a1 + 1248);
  __asm { wrgsbase rcx }
  if ( !_bittest64((const signed __int64 *)(a1 + 1272), 0) )
  {
    *(_QWORD *)(a1 + 1280) = v1;
    v5 = *(_QWORD *)(a1 + 168);
    v6 = *(_QWORD *)(a1 + 1248);
    if ( LdrSystemDllInitBlock.CfgBitMap && ((v5 & 7) != 0 || v5 < *(_QWORD *)(v6 + 16) || v5 >= *(_QWORD *)(v6 + 8)) )
      __fastfail(0xDu);
    if ( !_bittest((const signed __int32 *)(a1 + 1264), 2u) )
    {
      _mm_setcsr(*(_DWORD *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
      __asm { jmp     rcx }
    }
    v7 = (void *)((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
    if ( MEMORY[0x7FFE03E0] )
      _xrstor(v7, MEMORY[0x7FFE03E0]);
    else
      _fxrstor(v7);
    __asm { iretq }
  }
  __asm { wrgsbase r11 }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 1272), 3uLL);
  return 3221227292LL;
}
