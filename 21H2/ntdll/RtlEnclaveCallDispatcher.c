/*
 * XREFs of RtlEnclaveCallDispatcher @ 0x1800A15D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallEnclave @ 0x18009E850 (ZwCallEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD8B0 (LdrpIssueEnclaveCall.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall RtlEnclaveCallDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // [rsp-20h] [rbp-20h]
  __int64 v6; // [rsp-18h] [rbp-18h]
  void *v7; // [rsp-10h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  if ( a2 )
  {
    v6 = a4;
    ((void (__fastcall *)(__int64, __int64))LdrpIssueEnclaveCall)(a2, a3);
    while ( 1 )
    {
      result = ZwCallEnclave();
      a4 = v6;
      if ( v7 )
        break;
      v6 = 0LL;
    }
  }
  else
  {
    result = (unsigned int)a3;
  }
  *v5 = a4;
  retaddr = v7;
  return result;
}
