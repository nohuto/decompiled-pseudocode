/*
 * XREFs of sub_18000D198 @ 0x18000D198
 * Callers:
 *     sub_18000AFC0 @ 0x18000AFC0 (sub_18000AFC0.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18000D198(_QWORD *a1, _QWORD *a2)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD **v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD **)a1;
  v4 = (_QWORD *)*a1;
  while ( v4 )
  {
    v5 = v4[1];
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
    if ( (unsigned int)o__wcsicmp(v7, v6) )
    {
      v3 = (_QWORD **)*v3;
      v4 = (_QWORD *)*v4;
    }
    else
    {
      v10 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, void *, __int64 *))*a2)(*a2, &unk_180042AB0, &v10) >= 0 )
      {
        LOBYTE(v8) = 1;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, 0LL, v8, 0LL);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !*v3 )
        return;
      v9 = (_QWORD **)*v3;
      v4 = (_QWORD *)**v3;
      *v3 = v4;
      sub_180039D98(v9);
    }
  }
}
