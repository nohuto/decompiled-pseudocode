/*
 * XREFs of sub_180039F88 @ 0x180039F88
 * Callers:
 *     sub_1800385F4 @ 0x1800385F4 (sub_1800385F4.c)
 *     sub_180039B04 @ 0x180039B04 (sub_180039B04.c)
 *     sub_180064A2C @ 0x180064A2C (sub_180064A2C.c)
 * Callees:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 */

bool __fastcall sub_180039F88(RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rax
  bool v3; // zf
  PVOID v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  Ptr = a1[3].Ptr;
  v3 = Ptr == 0LL;
  if ( !Ptr )
  {
    if ( !a1[2].Ptr )
    {
      v5 = a1[1].Ptr;
      v8 = 0LL;
      if ( (int)sub_18003ACB0(v5, &v8) >= 0 && !a1[2].Ptr )
        a1[2].Ptr = v8;
    }
    v6 = ((__int64)a1[2].Ptr + 32) & -(__int64)(a1[2].Ptr != 0LL);
    AcquireSRWLockExclusive(a1 + 4);
    v7 = (__int64)a1[3].Ptr;
    if ( !v7 )
    {
      a1[3].Ptr = (PVOID)v6;
      v7 = v6;
    }
    if ( a1 != (RTL_SRWLOCK *)-32LL )
    {
      ReleaseSRWLockExclusive(a1 + 4);
      v7 = (__int64)a1[3].Ptr;
    }
    v3 = v7 == 0;
  }
  return !v3;
}
