/*
 * XREFs of sub_180005310 @ 0x180005310
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 *     sub_1800CE420 @ 0x1800CE420 (sub_1800CE420.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180005310(LPCRITICAL_SECTION lpCriticalSection)
{
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+38h] [rbp-50h] BYREF
  int v5; // [rsp+50h] [rbp-38h]

  memset(v4, 0, sizeof(v4));
  v5 = 0;
  EnterCriticalSection(lpCriticalSection);
  if ( *(_QWORD *)&lpCriticalSection[1].LockCount )
  {
    v3 = sub_1800C2D44(&lpCriticalSection[1]);
    sub_1800CE11C(v4, v3);
    JUMPOUT(0x18007E800LL);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
