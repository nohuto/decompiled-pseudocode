/*
 * XREFs of sub_180014E9C @ 0x180014E9C
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800706FC @ 0x1800706FC (sub_1800706FC.c)
 *     sub_180070784 @ 0x180070784 (sub_180070784.c)
 *     sub_180070804 @ 0x180070804 (sub_180070804.c)
 */

__int64 __fastcall sub_180014E9C(_QWORD *a1)
{
  void *v1; // rbp
  unsigned int v2; // ebx
  __int64 v5; // r14
  __int64 v6; // rax
  void *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  HANDLE *v10; // rdi
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]

  v1 = (void *)a1[9];
  v2 = 0;
  if ( v1 )
  {
    v5 = *(_QWORD *)(a1[8] + 24LL);
    if ( (unsigned int)sub_180070804(v5 + 312, a1[9]) )
    {
      v6 = sub_180070784(v5 + 312, v1);
      v7 = (void *)v6;
      if ( v6 )
      {
        sub_1800706FC(v6, a1[6]);
        sub_180026650(v7);
      }
      return 1;
    }
    else
    {
      sub_1800410C4(v5 + 536, &v13);
      while ( 1 )
      {
        v9 = sub_180041058(&v13);
        v10 = (HANDLE *)v9;
        if ( !v9 )
          break;
        v8 = *(_QWORD *)(v9 + 72);
        if ( v8 && (_QWORD *)v9 != a1 && (int)NtCompareObjects(v8, v1) >= 0 )
        {
          NtClose(v10[9]);
          v10[9] = 0LL;
        }
        sub_1800265B0(v10);
      }
      RtlReleaseSRWLockShared(v13.Ptr + 16);
      NtClose(v1);
      a1[9] = 0LL;
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
      {
        v12 = a1[4];
        v15 = 8LL;
        v14 = &v12;
        sub_18002E278(v11, (int)&dword_18009BC66, 0, 0, 3u, &v13);
      }
    }
  }
  return v2;
}
