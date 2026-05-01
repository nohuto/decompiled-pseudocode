/*
 * XREFs of sub_18001F500 @ 0x18001F500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001602C @ 0x18001602C (sub_18001602C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001F500(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v9 = 0LL;
  if ( !v2
    || (v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &unk_180050EF8, &v9),
        v4 = v9,
        v6 = v5,
        v5 >= 0) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
    v4 = v9;
    v6 = v7;
  }
  if ( v4 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v6 < 0 )
    sub_18001602C((unsigned int)v6);
  return (unsigned int)v6;
}
