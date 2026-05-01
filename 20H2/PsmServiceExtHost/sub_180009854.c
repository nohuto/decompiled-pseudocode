/*
 * XREFs of sub_180009854 @ 0x180009854
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

DWORD __fastcall sub_180009854(__int64 a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD result; // eax

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
