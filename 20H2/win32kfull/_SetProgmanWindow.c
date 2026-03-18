/*
 * XREFs of _SetProgmanWindow @ 0x1C0248D10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SetProgmanWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  v3 = *(__int64 **)(gptiCurrent + 464LL);
  if ( a1 && v3[25] )
  {
    UserSetLastError(5LL, gptiCurrent, a1);
    return 0LL;
  }
  else
  {
    v5 = v3 + 25;
    v6 = *v3;
    if ( a1 )
      v2 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v6 + 40) = v2;
    v7[0] = v5;
    v7[1] = a1;
    HMAssignmentLock(v7);
    return 1LL;
  }
}
