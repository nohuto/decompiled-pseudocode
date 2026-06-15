/*
 * XREFs of sub_1800D7EB0 @ 0x1800D7EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 */

__int64 __fastcall sub_1800D7EB0(__int64 a1, void *a2)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  int v8; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    v4 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
    if ( *v4 > 4u )
    {
      v12 = a2;
      sub_1800B7704((__int64)v4, byte_18016712F, v5, v6, &v12);
    }
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(PVOID, void *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
           pv,
           a2,
           0LL,
           0LL,
           &v11);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = sub_18011EC50(v11);
      v3 = v7;
      if ( v7 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v8 = 2310;
    }
    else
    {
      v8 = 2309;
    }
    sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v7);
LABEL_11:
    sub_18000F708(&v11);
    return v3;
  }
  v3 = -2147467261;
  sub_18004BD84((int)retaddr, 2301, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147467261);
  return v3;
}
