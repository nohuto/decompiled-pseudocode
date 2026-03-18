/*
 * XREFs of ExpHpCompactSessionPools @ 0x14023C744
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140237CC0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     RtlpHpHeapCompact @ 0x14023AF04 (RtlpHpHeapCompact.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     MiGetNextSession @ 0x1402537F8 (MiGetNextSession.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 ExpHpCompactSessionPools()
{
  __int64 result; // rax
  struct _DMA_ADAPTER *i; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  result = MiGetNextSession(0LL);
  for ( i = (struct _DMA_ADAPTER *)result; result; i = (struct _DMA_ADAPTER *)result )
  {
    if ( (int)MmAttachSession((ULONG_PTR)i) >= 0 )
    {
      v2 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672);
      v3 = *(_QWORD *)(v2 + 14560);
      if ( v3 )
      {
        v4 = *(__int16 *)(v3 + 278);
        v5 = *(_QWORD *)(v4 + v3 + 264) >> *(_BYTE *)(v3 + 267);
        if ( v5 <= 8 )
          v5 = 8LL;
        if ( *(_QWORD *)(v4 + v3 + 272) + *(_QWORD *)(v4 + v3 + 280) > v5 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 14560));
      }
      v6 = *(_QWORD *)(v2 + 14568);
      if ( v6 )
      {
        v7 = *(__int16 *)(v6 + 278);
        v8 = *(_QWORD *)(v7 + v6 + 264) >> *(_BYTE *)(v6 + 267);
        if ( v8 <= 8 )
          v8 = 8LL;
        if ( *(_QWORD *)(v7 + v6 + 272) + *(_QWORD *)(v7 + v6 + 280) > v8 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 14568));
      }
      MmDetachSession(i, v9);
    }
    result = MiGetNextSession(i);
  }
  return result;
}
