/*
 * XREFs of PerfReadWrappingCounter @ 0x1C000BC60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall PerfReadWrappingCounter(
        unsigned __int64 *a1,
        char a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  void (__fastcall *v4)(unsigned __int64, _QWORD, unsigned __int64 *, unsigned __int64 *); // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  v4 = (void (__fastcall *)(unsigned __int64, _QWORD, unsigned __int64 *, unsigned __int64 *))a1[6];
  v15 = 0LL;
  v16 = 0LL;
  v4(a1[7], 0LL, &v16, &v15);
  v9 = a1[4];
  v10 = a1[5];
  v11 = v15;
  if ( a2 )
  {
    if ( v9 )
      v11 = v9 & v15;
    v12 = v16;
    if ( v10 )
      v12 = v10 & v16;
  }
  else
  {
    if ( v9 )
    {
      v11 = v9 & v15;
      if ( (v9 & v15) < *a1 )
        a1[2] += v9 + 1;
    }
    v12 = v16;
    a1[2] += v11 - *a1;
    if ( v10 )
    {
      v12 &= v10;
      if ( v12 < a1[1] )
        a1[3] += v10 + 1;
    }
    a1[3] += v12 - a1[1];
  }
  v13 = a1[3];
  *a1 = v11;
  a1[1] = v12;
  *a3 = v13;
  result = a1[2];
  *a4 = result;
  return result;
}
