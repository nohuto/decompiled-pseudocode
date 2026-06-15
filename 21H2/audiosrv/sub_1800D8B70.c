/*
 * XREFs of sub_1800D8B70 @ 0x1800D8B70
 * Callers:
 *     sub_1800D8780 @ 0x1800D8780 (sub_1800D8780.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D8B70(
        void (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        int a2,
        unsigned int a3,
        _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  if ( !a2 )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD *))(*a1)[4])(a1, a3, a4);
LABEL_9:
    if ( v7 < 0 )
      sub_18005E8F8((__int64)"TryGetDevicePropertyStore", 2241, v7);
    return (unsigned int)v7;
  }
  v8 = 0LL;
  v10[0] = 0LL;
  if ( a1 )
  {
    sub_18002BB14(v10, a1, (__int64)&unk_18015B040);
    v8 = v10[0];
    if ( v10[0] )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v10[0] + 40LL))(v10[0], a3, a4);
      if ( v10[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
      goto LABEL_9;
    }
  }
  *a4 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v7;
}
