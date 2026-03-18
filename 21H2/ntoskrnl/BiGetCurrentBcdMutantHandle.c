/*
 * XREFs of BiGetCurrentBcdMutantHandle @ 0x1408136FC
 * Callers:
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenMutant @ 0x14041DCC0 (ZwOpenMutant.c)
 */

__int64 __fastcall BiGetCurrentBcdMutantHandle(_QWORD *a1)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( BcdMutantHandle )
  {
    *a1 = BcdMutantHandle;
    return 0LL;
  }
  result = ZwOpenMutant((__int64)&Handle, 0x100000LL);
  if ( (_DWORD)result == -1073741772 )
  {
    _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    *a1 = BcdMutantHandle;
    return 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)Handle, 0LL) )
      ZwClose(Handle);
    *a1 = BcdMutantHandle;
    return 0LL;
  }
  return result;
}
