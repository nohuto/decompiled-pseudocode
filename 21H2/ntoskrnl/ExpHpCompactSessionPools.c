/*
 * XREFs of ExpHpCompactSessionPools @ 0x1402D5848
 * Callers:
 *     ExpHpCompactionRoutine @ 0x1402FAA50 (ExpHpCompactionRoutine.c)
 * Callees:
 *     MmDetachSession @ 0x140298F40 (MmDetachSession.c)
 *     MmAttachSession @ 0x140298FE0 (MmAttachSession.c)
 *     RtlpHpHeapCompact @ 0x1402C3FF8 (RtlpHpHeapCompact.c)
 *     MiGetNextSession @ 0x1402D5FA8 (MiGetNextSession.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 ExpHpCompactSessionPools()
{
  __int64 result; // rax
  _KPROCESS *i; // rbx
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
  for ( i = (_KPROCESS *)result; result; i = (_KPROCESS *)result )
  {
    if ( (int)MmAttachSession(i, (__int64)v9) >= 0 )
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
      MmDetachSession((__int64)i, (__int64)v9);
    }
    result = MiGetNextSession((PADAPTER_OBJECT)i);
  }
  return result;
}
