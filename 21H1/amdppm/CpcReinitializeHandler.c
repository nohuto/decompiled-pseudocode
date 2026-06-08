/*
 * XREFs of CpcReinitializeHandler @ 0x1C0003E00
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000321C (WriteGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcReinitializeHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 92) )
    WriteGenAddrMaybeHiddenEx(*(_QWORD *)a1, (_BYTE *)(*(_QWORD *)(a1 + 112) + 344LL), 1LL);
  if ( *(_BYTE *)(a1 + 104) )
  {
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 80LL) )
      ((void (*)(void))qword_1C00135B8)();
  }
}
