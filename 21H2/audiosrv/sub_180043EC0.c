/*
 * XREFs of sub_180043EC0 @ 0x180043EC0
 * Callers:
 *     sub_180043DB0 @ 0x180043DB0 (sub_180043DB0.c)
 *     sub_180043E38 @ 0x180043E38 (sub_180043E38.c)
 *     sub_1800D725C @ 0x1800D725C (sub_1800D725C.c)
 *     sub_1800D7310 @ 0x1800D7310 (sub_1800D7310.c)
 *     sub_1800D73F0 @ 0x1800D73F0 (sub_1800D73F0.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043EC0(
        void (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h] BYREF

  v10 = 0LL;
  v6 = 0;
  if ( !(_DWORD)a2 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))(*a1)[4])(a1, a2, &v10);
LABEL_3:
    if ( v6 < 0 )
      sub_18005E8F8("TryGetDevicePropertyStore", 2241LL, (unsigned int)v6);
    v7 = v10;
    goto LABEL_6;
  }
  v9 = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    sub_18002BB14(&v11, a1, (__int64)&unk_18015B040);
    v9 = v11;
    if ( v11 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, 0LL, &v10);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      goto LABEL_3;
    }
  }
  v7 = 0LL;
  v10 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v6 = 0;
    v7 = v10;
LABEL_7:
    if ( v7 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, a3, a4);
      v7 = v10;
    }
    else
    {
      *(_OWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 16) = 0LL;
    }
    if ( v6 >= 0 )
      goto LABEL_10;
    goto LABEL_20;
  }
LABEL_6:
  if ( v6 >= 0 )
    goto LABEL_7;
LABEL_20:
  sub_18005E8F8("CPolicyConfig::GetPropertyStoreProperty", 2816LL, (unsigned int)v6);
  v7 = v10;
LABEL_10:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
