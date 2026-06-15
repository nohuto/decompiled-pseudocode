/*
 * XREFs of sub_1800F8060 @ 0x1800F8060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8060(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))qword_18019E618)(qword_18019E618, &unk_18015E380, &v7) < 0 )
  {
    v4 = 0;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2);
    v4 = v3;
    if ( v3 < 0 )
      sub_18004BD84((int)retaddr, 907, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v3);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
