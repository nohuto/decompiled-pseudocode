/*
 * XREFs of sub_180008518 @ 0x180008518
 * Callers:
 *     sub_1800014F0 @ 0x1800014F0 (sub_1800014F0.c)
 *     sub_1800082C0 @ 0x1800082C0 (sub_1800082C0.c)
 *     sub_180008408 @ 0x180008408 (sub_180008408.c)
 *     sub_1800767F0 @ 0x1800767F0 (sub_1800767F0.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_180008518(__int64 a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD result; // eax

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive(a1 + 32);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
