/*
 * XREFs of sub_180037AF0 @ 0x180037AF0
 * Callers:
 *     sub_1800371D0 @ 0x1800371D0 (sub_1800371D0.c)
 *     sub_180037710 @ 0x180037710 (sub_180037710.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180037AF0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
  {
    v9 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &unk_180051428, &v9);
    v5 = v9;
  }
  else
  {
    v7 = -2147467259;
  }
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
    v5 = v9;
  }
  if ( v5 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v7;
}
