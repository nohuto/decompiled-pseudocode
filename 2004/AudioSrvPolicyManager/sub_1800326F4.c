/*
 * XREFs of sub_1800326F4 @ 0x1800326F4
 * Callers:
 *     sub_180030E60 @ 0x180030E60 (sub_180030E60.c)
 *     sub_1800328D0 @ 0x1800328D0 (sub_1800328D0.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800326F4(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v14);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 807;
LABEL_10:
    sub_180003AB0(
      retaddr,
      v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      v3);
    goto LABEL_12;
  }
  v11 = 0LL;
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *))(*(_QWORD *)v14 + 40LL))(v14, &unk_180045668, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 812;
    goto LABEL_10;
  }
  if ( (_WORD)v11 == 31 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*((_QWORD *)&v11 + 1) + 2 * v8) );
    v3 = sub_180018844(v7, v6, *((__int64 *)&v11 + 1), v8, v10, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 816;
      goto LABEL_10;
    }
  }
  v4 = 0;
LABEL_12:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v4;
}
