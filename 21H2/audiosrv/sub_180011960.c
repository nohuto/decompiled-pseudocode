/*
 * XREFs of sub_180011960 @ 0x180011960
 * Callers:
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     sub_1800D83F0 @ 0x1800D83F0 (sub_1800D83F0.c)
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_180017690 @ 0x180017690 (sub_180017690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011960(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v7 = -2147024809;
    sub_18004BD84(
      retaddr,
      163LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      2147942487LL);
    return v7;
  }
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v13 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v12)(v12, &unk_18015B660, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 172LL;
    }
    else
    {
      v8 = sub_180017690(a1, a2, a3);
      v7 = v8;
      if ( v8 >= 0 )
      {
        v7 = 0;
        goto LABEL_6;
      }
      v10 = 174LL;
    }
    sub_18004BD84(
      retaddr,
      v10,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (unsigned int)v8);
LABEL_6:
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_8;
  }
  sub_18004BD84(
    retaddr,
    169LL,
    "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    (unsigned int)v6);
LABEL_8:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v7;
}
