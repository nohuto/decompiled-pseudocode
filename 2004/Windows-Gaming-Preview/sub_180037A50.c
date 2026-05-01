/*
 * XREFs of sub_180037A50 @ 0x180037A50
 * Callers:
 *     sub_180037360 @ 0x180037360 (sub_180037360.c)
 *     sub_180037560 @ 0x180037560 (sub_180037560.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180037A50(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = 0LL;
  v7 = 0LL;
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    v7 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &unk_180051428, &v7);
    v3 = v7;
  }
  else
  {
    v5 = -2147467259;
  }
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 32LL))(v3, a2);
    v3 = v7;
  }
  if ( v3 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return (unsigned int)v5;
}
