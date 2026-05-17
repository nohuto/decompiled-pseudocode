/*
 * XREFs of @RtlpFindUCREntry@8 @ 0x4B2C0A8E
 * Callers:
 *     @RtlpInsertUCRBlock@8 @ 0x4B2AB9B6 (@RtlpInsertUCRBlock@8.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlpCreateUCREntry@24 @ 0x4B2C092B (_RtlpCreateUCREntry@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpHeapFindListLookupEntry@20 @ 0x4B2C0D29 (_RtlpHeapFindListLookupEntry@20.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 */

_DWORD *__fastcall RtlpFindUCREntry(int a1, unsigned int a2)
{
  _DWORD *v4; // edx
  _DWORD *result; // eax
  unsigned int v6; // eax

  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((a2 + 4095) & 0xFFFFF000) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    if ( !byte_4B3A5DA8 )
      RtlpReportHeapFailure(1);
  }
  v4 = *(_DWORD **)(a1 + 184);
  if ( v4 )
  {
    v6 = a2 >> 12;
    while ( v6 >= v4[1] )
    {
      if ( !*v4 )
      {
        v6 = v4[1] - 1;
        return (_DWORD *)RtlpHeapFindListLookupEntry(0, v6, a2);
      }
      v4 = (_DWORD *)*v4;
    }
    return (_DWORD *)RtlpHeapFindListLookupEntry(0, v6, a2);
  }
  else
  {
    for ( result = *(_DWORD **)(a1 + 140); (_DWORD *)(a1 + 140) != result; result = (_DWORD *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (_DWORD *)(a1 + 140);
  }
}
