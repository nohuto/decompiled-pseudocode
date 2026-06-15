/*
 * XREFs of sub_18005ED10 @ 0x18005ED10
 * Callers:
 *     sub_18005EAB8 @ 0x18005EAB8 (sub_18005EAB8.c)
 *     sub_1800BF950 @ 0x1800BF950 (sub_1800BF950.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005ED10(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *))
{
  _QWORD *v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // ecx
  void (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = (_QWORD *)(a1 + 64);
  v5 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), __int64))(*a2)[5])(a2, a1 + 64);
  if ( v5 < 0 )
    goto LABEL_9;
  sub_18002A504((void **)(a1 + 72), 0LL);
  MMDevAPI_29(*v4, a1 + 72);
  v6 = (__int64)v9;
  if ( v9 != a2 )
  {
    sub_18002BB14((__int64 *)&v9, a2, (__int64)&unk_18015B660);
    v6 = (__int64)v9;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a1 + 80);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1),
        v7 = *(_DWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 232) = *v4,
        *(_DWORD *)(a1 + 240) = v7,
        v5 < 0) )
  {
LABEL_9:
    sub_18005E8F8((__int64)"CVolumeControlBase::Initialize", 132, v5);
  }
  if ( v9 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v9)[2])(v9);
  return (unsigned int)v5;
}
