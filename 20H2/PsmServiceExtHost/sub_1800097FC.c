/*
 * XREFs of sub_1800097FC @ 0x1800097FC
 * Callers:
 *     sub_180004710 @ 0x180004710 (sub_180004710.c)
 *     sub_180008268 @ 0x180008268 (sub_180008268.c)
 *     sub_1800085FC @ 0x1800085FC (sub_1800085FC.c)
 *     sub_18000895C @ 0x18000895C (sub_18000895C.c)
 *     sub_180008CE8 @ 0x180008CE8 (sub_180008CE8.c)
 *     sub_1800097A8 @ 0x1800097A8 (sub_1800097A8.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 *     sub_18003818C @ 0x18003818C (sub_18003818C.c)
 *     sub_180082368 @ 0x180082368 (sub_180082368.c)
 *     sub_1800823D0 @ 0x1800823D0 (sub_1800823D0.c)
 *     sub_1800826B0 @ 0x1800826B0 (sub_1800826B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800097FC(__int64 a1)
{
  _QWORD *Value; // rax

  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_DWORD *)Value & 0x400LL) == 0 )
      __int2c();
    if ( Value[11]-- == 1LL )
      *Value &= ~0x400uLL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
