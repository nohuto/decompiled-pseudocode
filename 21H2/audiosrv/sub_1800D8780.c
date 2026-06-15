/*
 * XREFs of sub_1800D8780 @ 0x1800D8780
 * Callers:
 *     sub_1800D8830 @ 0x1800D8830 (sub_1800D8830.c)
 *     sub_1800D89F0 @ 0x1800D89F0 (sub_1800D89F0.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D8B70 @ 0x1800D8B70 (sub_1800D8B70.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D8780(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = 0LL;
  v6 = sub_1800D8B70(a1, a2, 1LL, v9);
  if ( v6 < 0
    || ((v7 = v9[0]) == 0
      ? (v6 = -2147024894)
      : (v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v9[0] + 48LL))(v9[0], a3, a4), v7 = v9[0]),
        v6 < 0) )
  {
    sub_18005E8F8((__int64)"CPolicyConfig::SetPropertyStoreProperty", 2859, v6);
    v7 = v9[0];
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
