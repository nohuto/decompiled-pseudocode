/*
 * XREFs of sub_18002A4F4 @ 0x18002A4F4
 * Callers:
 *     sub_1800280C8 @ 0x1800280C8 (sub_1800280C8.c)
 *     sub_180028228 @ 0x180028228 (sub_180028228.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_18002C534 @ 0x18002C534 (sub_18002C534.c)
 *     sub_180031430 @ 0x180031430 (sub_180031430.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002A4F4(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v7; // edx
  __int64 (__fastcall ***v8)(_QWORD, void *, _QWORD); // rcx
  __int64 (__fastcall ***v9)(_QWORD, void *, _QWORD); // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, void *, __int64); // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 272);
  if ( !v4 )
  {
    v5 = -2147019873;
    sub_180003268(
      retaddr,
      1070,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      -2147019873);
    return (unsigned int)v5;
  }
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, *(_QWORD *)(a1 + 240), &v11);
  if ( v5 < 0 )
  {
    v7 = 1073;
    goto LABEL_6;
  }
  v5 = (**v11)(v11, &unk_180050AD8, a2);
  if ( v5 < 0 )
  {
    v7 = 1074;
LABEL_6:
    sub_180003268(retaddr, v7, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v5);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD)))(*v8)[2])(v8);
    }
    return (unsigned int)v5;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD)))(*v9)[2])(v9);
  }
  return 0LL;
}
