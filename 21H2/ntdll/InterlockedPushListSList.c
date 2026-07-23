/*
 * XREFs of InterlockedPushListSList @ 0x1800A1280
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     RtlInterlockedPushListSListEx @ 0x1800FF250 (RtlInterlockedPushListSListEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InterlockedPushListSList(_QWORD *a1, signed __int64 a2, _QWORD *a3, __int16 a4)
{
  __int128 v6; // rax
  __int64 v7; // r10
  signed __int64 v8; // rbx
  __int128 v9; // rt0
  unsigned __int8 v10; // tt

  _m_prefetchw(a1);
  *(_QWORD *)&v6 = *a1;
  *((_QWORD *)&v6 + 1) = a1[1];
  do
  {
    v7 = *((_QWORD *)&v6 + 1);
    LOBYTE(v7) = BYTE8(v6) & 0xF0;
    *a3 = v7;
    v8 = v6 + 0x10000;
    LOWORD(v8) = v6 + a4;
    v9 = v6;
    v10 = _InterlockedCompareExchange128(a1, a2, v8, (signed __int64 *)&v9);
    v6 = v9;
  }
  while ( !v10 );
  return v7;
}
