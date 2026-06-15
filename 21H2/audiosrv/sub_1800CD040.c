/*
 * XREFs of sub_1800CD040 @ 0x1800CD040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CD040(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned int v13; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v5 = *a1;
  v8 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"AudioSessionSetChannelVolume");
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v5 + 328LL))(
          v5,
          a2,
          a5,
          a4,
          a5);
  v13 = v10;
  if ( v10 >= 0 )
    v13 = 0;
  else
    sub_18004BD84((int)retaddr, 2186, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp", v10);
  sub_18000F690((__int64)pv, v11, v12);
  return v13;
}
