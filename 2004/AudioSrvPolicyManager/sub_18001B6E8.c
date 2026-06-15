/*
 * XREFs of sub_18001B6E8 @ 0x18001B6E8
 * Callers:
 *     sub_180022880 @ 0x180022880 (sub_180022880.c)
 *     sub_18002C060 @ 0x18002C060 (sub_18002C060.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001B6E8(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = a1;
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_180003AB0(
      retaddr,
      923,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      v4);
    goto LABEL_11;
  }
  v10 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64 *))v11)(v11, &qword_180042878, &v10);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 926;
LABEL_7:
    sub_180003AB0(
      retaddr,
      v7,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      v6);
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, a3);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 928;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_9:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_11:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v5;
}
