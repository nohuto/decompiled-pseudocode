/*
 * XREFs of sub_18006D9FC @ 0x18006D9FC
 * Callers:
 *     sub_18006DF10 @ 0x18006DF10 (sub_18006DF10.c)
 * Callees:
 *     sub_18006D9CC @ 0x18006D9CC (sub_18006D9CC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18006D9FC(__int64 *a1, __int64 ***a2)
{
  _QWORD *v2; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = (_QWORD *)*a1;
  v4 = a1;
  while ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2[1] + 56LL) + 24LL))(*(_QWORD *)(v2[1] + 56LL));
    v6 = *a2;
    if ( (__int64 *)v5 == **a2 )
    {
      if ( *a2[1] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2[1] + 56LL) + 16LL))(*(_QWORD *)(v2[1] + 56LL));
        v6 = a2[1];
        **v6 = v7;
      }
      if ( !*v4 )
        return;
      v8 = *v4;
      v2 = *(_QWORD **)*v4;
      *v4 = (__int64)v2;
      sub_18006D9CC((__int64)v6, v8);
    }
    else
    {
      v4 = (__int64 *)*v4;
      v2 = (_QWORD *)*v2;
    }
  }
}
