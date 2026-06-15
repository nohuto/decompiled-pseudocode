/*
 * XREFs of sub_1800F7E30 @ 0x1800F7E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1800F7E30()
{
  int v0; // eax
  unsigned int v1; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !qword_18019E618 )
    return 0LL;
  v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 312LL))(qword_18019E618);
  v1 = v0;
  if ( v0 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 971, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v0);
  return v1;
}
