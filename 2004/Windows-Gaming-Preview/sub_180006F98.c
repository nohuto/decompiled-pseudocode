/*
 * XREFs of sub_180006F98 @ 0x180006F98
 * Callers:
 *     sub_180006AA8 @ 0x180006AA8 (sub_180006AA8.c)
 *     sub_180006D30 @ 0x180006D30 (sub_180006D30.c)
 *     sub_180007470 @ 0x180007470 (sub_180007470.c)
 *     sub_180007650 @ 0x180007650 (sub_180007650.c)
 * Callees:
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 */

bool __fastcall sub_180006F98(RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rax
  bool v3; // zf
  PVOID v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  Ptr = a1[3].Ptr;
  v3 = Ptr == 0LL;
  if ( !Ptr )
  {
    if ( !a1[2].Ptr )
    {
      v4 = a1[1].Ptr;
      v8 = 0LL;
      if ( (int)sub_1800081FC(v4, &v8) >= 0 && !a1[2].Ptr )
        a1[2].Ptr = v8;
    }
    v5 = ((__int64)a1[2].Ptr + 32) & -(__int64)(a1[2].Ptr != 0LL);
    AcquireSRWLockExclusive(a1 + 4);
    v6 = (__int64)a1[3].Ptr;
    if ( !v6 )
    {
      a1[3].Ptr = (PVOID)v5;
      v6 = v5;
    }
    if ( a1 != (RTL_SRWLOCK *)-32LL )
    {
      ReleaseSRWLockExclusive(a1 + 4);
      v6 = (__int64)a1[3].Ptr;
    }
    v3 = v6 == 0;
  }
  return !v3;
}
