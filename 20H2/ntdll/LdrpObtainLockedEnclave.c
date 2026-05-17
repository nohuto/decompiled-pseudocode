/*
 * XREFs of LdrpObtainLockedEnclave @ 0x18002FA14
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800CCDD0 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CCE60 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CCF60 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CD000 (LdrLoadEnclaveModule.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD8F0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceEnclave @ 0x1800CD4B0 (LdrpDereferenceEnclave.c)
 */

__int64 *__fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 *i; // rbx
  __int64 v5; // rdx
  __int64 *v6; // r8
  __int64 v8; // rdx
  __int64 v9; // r8

  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v6 = (__int64 *)LdrpEnclaveList;
    while ( v6 != &LdrpEnclaveList )
    {
      i = v6;
      if ( a2 )
      {
        if ( a1 == v6[9] )
          break;
      }
      else if ( a1 >= v6[9] && a1 - v6[9] < v6[10] )
      {
        break;
      }
      v6 = (__int64 *)*v6;
      i = 0LL;
    }
    if ( i )
      _InterlockedIncrement((volatile signed __int32 *)i + 15);
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock, v5, (__int64)v6);
    if ( !i )
      return 0LL;
    RtlEnterCriticalSection(i + 2);
    if ( i[9] )
      break;
    RtlLeaveCriticalSection((__int64)(i + 2), v8, v9);
  }
  return i;
}
