/*
 * XREFs of _RtlpLogExceptionHandler@16 @ 0x4B368AB5
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 *     _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1 (_RtlpCallVectoredHandlers@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpLogExceptionHandler(const void *a1, const void *a2, int a3, int a4)
{
  const void *v4; // edi
  _DWORD *v5; // ebx
  int v6; // ecx
  signed __int32 v7; // esi
  bool v8; // zf

  v4 = a1;
  if ( !RtlpExceptionLog2 )
    return 0;
  v6 = RtlpExceptionLogCount;
  v7 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (RtlpExceptionLogCount + 1) % 0x32u, RtlpExceptionLogCount);
  if ( v7 != v6 )
  {
    do
    {
      v6 = v7;
      v7 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v7 + 1) % 0x32u, v7);
    }
    while ( v7 != v6 );
    v4 = a1;
  }
  v8 = RtlpExceptionLog2 + 816 * v6 == 0;
  v5 = (_DWORD *)(RtlpExceptionLog2 + 816 * v6);
  v5[201] = NtCurrentTeb()->ClientId.UniqueThread;
  if ( !v8 )
  {
    v5[200] = -1;
    v5[199] = 2;
    qmemcpy(v5, v4, 0x50u);
    qmemcpy(v5 + 20, a2, 0x2CCu);
    v5[20] &= 0x1003Fu;
    v5[202] = 0;
    v5[203] = a4;
  }
  return v5;
}
