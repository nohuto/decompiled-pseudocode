/*
 * XREFs of sub_1800277CC @ 0x1800277CC
 * Callers:
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_18007F518 @ 0x18007F518 (sub_18007F518.c)
 *     sub_18007F87C @ 0x18007F87C (sub_18007F87C.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_1800277CC(__int64 a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD result; // eax

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockExclusive(a1 + 576);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 584) = result;
  return result;
}
