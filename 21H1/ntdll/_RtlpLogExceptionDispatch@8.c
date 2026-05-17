/*
 * XREFs of _RtlpLogExceptionDispatch@8 @ 0x4B368A0D
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpLogExceptionDispatch(const void *a1, const void *a2)
{
  const void *v2; // ebx
  int v4; // esi
  signed __int32 v5; // ecx
  bool v6; // zf
  _DWORD *v7; // edx

  v2 = a2;
  if ( RtlpExceptionLog2 )
  {
    v4 = RtlpExceptionLogCount;
    v5 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (RtlpExceptionLogCount + 1) % 0x32u, RtlpExceptionLogCount);
    if ( v5 != v4 )
    {
      do
      {
        v4 = v5;
        v5 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v5 + 1) % 0x32u, v5);
      }
      while ( v5 != v4 );
      v2 = a2;
    }
    v6 = RtlpExceptionLog2 + 816 * v4 == 0;
    v7 = (_DWORD *)(RtlpExceptionLog2 + 816 * v4);
    v7[201] = NtCurrentTeb()->ClientId.UniqueThread;
    if ( !v6 )
    {
      v7[199] = 1;
      qmemcpy(v7, a1, 0x50u);
      qmemcpy(v7 + 20, v2, 0x2CCu);
      v7[20] &= 0x1003Fu;
    }
  }
}
