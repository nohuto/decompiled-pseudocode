/*
 * XREFs of sub_1800D8040 @ 0x1800D8040
 * Callers:
 *     sub_1800D8000 @ 0x1800D8000 (sub_1800D8000.c)
 *     sub_1800D8100 @ 0x1800D8100 (sub_1800D8100.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D8040(__int64 a1, __int64 a2, unsigned __int16 *a3, _BYTE *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
         pv,
         a2,
         0LL,
         0LL,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = sub_180048018(v11, 0, a3, a4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 2006;
  }
  else
  {
    v8 = 2005;
  }
  sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v6);
LABEL_7:
  sub_18000F708(&v11);
  return v7;
}
