/*
 * XREFs of sub_1800D7310 @ 0x1800D7310
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043EC0 @ 0x180043EC0 (sub_180043EC0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D7310(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v7; // ebx
  void (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !a2 || !a5 )
  {
    v7 = -2147467261;
LABEL_6:
    sub_18005E8F8((__int64)"CPolicyConfig::GetPropertyValue", 2345, v7);
    goto LABEL_7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v9);
  if ( v7 < 0 )
    goto LABEL_6;
  v7 = sub_180043EC0(v9, a3, a4, a5);
  if ( v7 < 0 )
    goto LABEL_6;
LABEL_7:
  if ( v9 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v9)[2])(v9);
  return (unsigned int)v7;
}
