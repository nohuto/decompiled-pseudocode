/*
 * XREFs of GetJournallingQueue @ 0x1C00D7D80
 * Callers:
 *     zzzSetDesktop @ 0x1C00D7E10 (zzzSetDesktop.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C00D7DDC (PhkFirstGlobalValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  __int64 GlobalValid; // rax
  __int64 v2; // r9
  __int64 v3; // r8

  if ( (*(_DWORD *)(a1 + 488) & 0x80u) != 0 || !*(_QWORD *)(a1 + 456) )
    return 0LL;
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 432LL);
  GlobalValid = PhkFirstGlobalValid(v2, 0LL);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 432LL);
  return v3;
}
