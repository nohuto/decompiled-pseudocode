/*
 * XREFs of sub_1800D8C50 @ 0x1800D8C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1800D8C50()
{
  __int64 v0; // rax
  int v1; // eax
  unsigned int v2; // ebx
  _QWORD v4[9]; // [rsp+20h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v4[0] = off_180155278;
  v4[7] = v4;
  v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 128LL))(qword_18019E678);
  v1 = sub_1800670EC(v0, (__int64)v4);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 2690, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v1);
  return v2;
}
