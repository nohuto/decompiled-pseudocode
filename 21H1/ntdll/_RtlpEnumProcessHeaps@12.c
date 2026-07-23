/*
 * XREFs of _RtlpEnumProcessHeaps@12 @ 0x4B35791E
 * Callers:
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     _RtlEnumProcessHeaps@8 @ 0x4B356920 (_RtlEnumProcessHeaps@8.c)
 *     _RtlFlushHeaps@0 @ 0x4B356940 (_RtlFlushHeaps@0.c)
 *     _RtlGetProcessHeaps@8 @ 0x4B356960 (_RtlGetProcessHeaps@8.c)
 *     _RtlSetHeapDebuggingInformation@8 @ 0x4B357004 (_RtlSetHeapDebuggingInformation@8.c)
 *     _RtlpHpGCCallback@12 @ 0x4B358430 (_RtlpHpGCCallback@12.c)
 *     _RtlpQueryExtendedInformationAllHeaps@4 @ 0x4B358DD6 (_RtlpQueryExtendedInformationAllHeaps@4.c)
 *     _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163 (_RtlpInitializeStackTraceDatabase@12.c)
 *     _RtlpHpStackTraceDisable@0 @ 0x4B36E2C6 (_RtlpHpStackTraceDisable@0.c)
 *     _RtlpHpStackTraceSerialize@12 @ 0x4B36E775 (_RtlpHpStackTraceSerialize@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 */

int __fastcall RtlpEnumProcessHeaps(int (__stdcall *a1)(void *, int), int a2, char a3)
{
  struct _PEB *v3; // eax
  unsigned int v4; // esi
  unsigned int i; // edi
  unsigned int j; // edi
  int v7; // eax
  struct _PEB *v9; // [esp+10h] [ebp-2Ch]
  int v10; // [esp+14h] [ebp-28h]
  int v11; // [esp+18h] [ebp-24h]

  v11 = a2;
  v3 = NtCurrentPeb();
  v9 = v3;
  v4 = 0;
  v10 = 0;
  if ( (a3 & 1) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    v3 = v9;
    a2 = v11;
  }
  for ( i = 0; i < v3->NumberOfHeaps; ++i )
  {
    v10 = a1(v3->ProcessHeaps[i], a2);
    if ( v10 < 0 )
      goto LABEL_16;
    v3 = v9;
    a2 = v11;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0; j < (unsigned __int16)RtlpNumberOfProtectedHeaps; ++j )
    {
      v10 = a1(*((void **)RtlpProtectedHeapsList + j), a2);
      if ( v10 < 0 )
        goto LABEL_16;
      a2 = v11;
    }
    while ( v4 < 3 )
    {
      v7 = dword_4B3A8A10[2 * v4];
      if ( v7 )
      {
        v10 = a1((void *)v7, a2);
        if ( v10 < 0 )
          break;
      }
      ++v4;
      a2 = v11;
    }
  }
LABEL_16:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return v10;
}
