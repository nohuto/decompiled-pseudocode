/*
 * XREFs of sub_18013ACA8 @ 0x18013ACA8
 * Callers:
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013A8AC @ 0x18013A8AC (sub_18013A8AC.c)
 *     sub_18013A944 @ 0x18013A944 (sub_18013A944.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_18013ACA8(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  char v5; // bl
  unsigned __int16 *v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // edx
  unsigned __int16 *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v3 = *a2;
  v5 = 0;
  v11 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(__int64 *, unsigned __int16 **, _QWORD))(v3 + 112))(a2, &v11, 0LL) )
  {
    v6 = v11;
    v7 = a3 - (_QWORD)v11;
    do
    {
      v8 = *(unsigned __int16 *)((char *)v6 + v7);
      v9 = *v6 - v8;
      if ( v9 )
        break;
      ++v6;
    }
    while ( v8 );
    return v9 == 0;
  }
  return v5;
}
