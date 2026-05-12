/*
 * XREFs of StorEtwEnableAdapter @ 0x1C004DF10
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C002F0B4 (RaidAdapterStartMiniport.c)
 *     StorEtwEnableCallback @ 0x1C004DF88 (StorEtwEnableCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorEtwEnableAdapter(__int64 a1, char a2)
{
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rax

  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 536);
  if ( !v4 )
    return 3221225485LL;
  v5 = *(void (__fastcall **)(__int64))(v4 + 176);
  if ( !v5 )
    return 3221225659LL;
  if ( (*(_BYTE *)(a1 + 110) & 1) != a2 )
  {
    v5(*(_QWORD *)(a1 + 544) + 16LL);
    *(_BYTE *)(a1 + 110) ^= (a2 ^ *(_BYTE *)(a1 + 110)) & 1;
  }
  return 0LL;
}
