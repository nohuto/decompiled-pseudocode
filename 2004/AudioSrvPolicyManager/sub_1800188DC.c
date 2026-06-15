/*
 * XREFs of sub_1800188DC @ 0x1800188DC
 * Callers:
 *     sub_180010090 @ 0x180010090 (sub_180010090.c)
 *     sub_1800188DC @ 0x1800188DC (sub_1800188DC.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_1800188DC @ 0x1800188DC (sub_1800188DC.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_1800188DC(__int64 a1, __int64 a2, __int64 *a3)
{
  _UNKNOWN **v3; // rax
  __int64 *i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  for ( i = a3; !*((_BYTE *)i + 25); LODWORD(v3) = sub_180039D98(v7) )
  {
    sub_1800188DC(a1, a2, i[2]);
    v7 = i;
    i = (__int64 *)*i;
    v8 = v7[8];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    sub_180009CF0((__int64)(v7 + 4));
  }
  return (int)v3;
}
