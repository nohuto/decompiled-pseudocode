/*
 * XREFs of RtlpEnumProcessHeaps @ 0x18007419C
 * Callers:
 *     RtlSetHeapInformation @ 0x180073CB0 (RtlSetHeapInformation.c)
 *     RtlFlushHeaps @ 0x180073E80 (RtlFlushHeaps.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800740AC (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpHpGCCallback @ 0x180074160 (RtlpHpGCCallback.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C40 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800F21E0 (RtlEnumProcessHeaps.c)
 *     RtlGetProcessHeaps @ 0x1800F21F0 (RtlGetProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2908 (RtlSetHeapDebuggingInformation.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1801011E0 (RtlpInitializeStackTraceDatabase.c)
 *     RtlpHpStackTraceDisable @ 0x180108CC4 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceSerialize @ 0x1801092C4 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 (__fastcall *a1)(void *, __int64), __int64 a2, char a3)
{
  struct _PEB *v6; // rsi
  __int64 i; // rbx
  __int64 j; // rbx
  __int64 k; // rax
  void *v10; // rcx
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+24h] [rbp-24h]

  v6 = NtCurrentPeb();
  v13 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  for ( i = 0LL; (unsigned int)i < v6->NumberOfHeaps; i = (unsigned int)(i + 1) )
  {
    v13 = a1(v6->ProcessHeaps[i], a2);
    if ( v13 < 0 )
      goto LABEL_18;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0LL; (unsigned int)j < (unsigned __int16)RtlpNumberOfProtectedHeaps; j = (unsigned int)(j + 1) )
    {
      v13 = a1(*((void **)RtlpProtectedHeapsList + j), a2);
      if ( v13 < 0 )
        goto LABEL_18;
    }
    for ( k = 0LL; ; k = (unsigned int)(v12 + 1) )
    {
      v12 = k;
      if ( (unsigned int)k >= 3 )
        break;
      v10 = (void *)*((_QWORD *)&unk_18016F4A8 + 2 * k);
      if ( v10 )
      {
        v13 = a1(v10, a2);
        if ( v13 < 0 )
          break;
      }
    }
  }
LABEL_18:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return (unsigned int)v13;
}
