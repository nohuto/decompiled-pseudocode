/*
 * XREFs of sub_18002B810 @ 0x18002B810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BD04 @ 0x18002BD04 (sub_18002BD04.c)
 *     sub_18002BEE0 @ 0x18002BEE0 (sub_18002BEE0.c)
 *     sub_18002C1F8 @ 0x18002C1F8 (sub_18002C1F8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002B810(__int64 a1, unsigned int *a2)
{
  int v3; // eax
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int *i; // rdi
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-78h] BYREF
  __int64 v11; // [rsp+28h] [rbp-70h] BYREF
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[56]; // [rsp+38h] [rbp-60h] BYREF

  v3 = sub_18002C1F8(&v12);
  v4 = v12;
  if ( v3 < 0 )
    v4 = -1LL;
  RtlQueryUnbiasedInterruptTime(&v11);
  v5 = v11 - *((_QWORD *)a2 + 12);
  if ( v4 == -1 || *((_QWORD *)a2 + 13) == -1LL )
    v6 = v11 - *((_QWORD *)a2 + 12);
  else
    v6 = v4 - *((_QWORD *)a2 + 13);
  if ( v5 )
    v7 = 100 * v6 / v5;
  else
    LODWORD(v7) = 100;
  v10 = v7;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  sub_18002BEE0(a2, v13, &v10);
  **((_DWORD **)a2 + 5) = v10;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *a2, &v10);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  sub_18002BD04(a2, v13);
  result = v11;
  *((_QWORD *)a2 + 12) = v11;
  *((_QWORD *)a2 + 13) = v4;
  return result;
}
