/*
 * XREFs of sub_18002F68C @ 0x18002F68C
 * Callers:
 *     sub_18002F030 @ 0x18002F030 (sub_18002F030.c)
 *     sub_18002F740 @ 0x18002F740 (sub_18002F740.c)
 *     sub_18002F818 @ 0x18002F818 (sub_18002F818.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18002F68C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rcx

  v2 = *(_QWORD **)(a2 + 8);
  *v2 = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = v3[6];
      if ( v5 )
      {
        if ( *(_BYTE *)(v5 + 32) )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 24) + 240LL))(*(_QWORD *)(v5 + 24), v5 + 40);
        v6 = *(_QWORD *)(v5 + 24);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        sub_180039D98((void *)v5);
      }
      sub_180009CF0((__int64)(v3 + 2));
      LODWORD(v2) = sub_180039D98(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return (int)v2;
}
