/*
 * XREFs of RtlpHpStackTraceAllocRemove @ 0x180108E9C
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x1801095F8 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x180108DC8 (RtlpHpStackTraceAllocFindMapping.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocRemove(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *Mapping; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD *i; // rdx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h]

  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3, a4);
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  Mapping = (_QWORD *)RtlpHpStackTraceAllocFindMapping(a1, a2);
  v7 = (__int64)Mapping;
  if ( Mapping )
  {
    v12 = Mapping[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8LL
                       * ((37
                         * (BYTE6(v12)
                          + 37
                          * (BYTE5(v12)
                           + 37
                           * (BYTE4(v12)
                            + 37
                            * (BYTE3(v12)
                             + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
                         + HIBYTE(v12)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == Mapping )
      {
        *i = *Mapping;
        --*(_DWORD *)(a1 + 16);
        *Mapping |= 0x8000000000000002uLL;
        break;
      }
    }
    v8 = Mapping[2];
  }
  else
  {
    v8 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  if ( v7 )
  {
    v11 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v7, &v11);
  }
  return v8;
}
