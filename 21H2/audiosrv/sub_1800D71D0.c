/*
 * XREFs of sub_1800D71D0 @ 0x1800D71D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D71D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
         pv,
         a2,
         0LL,
         0LL,
         &v7);
  if ( v4 >= 0 )
  {
    v6 = xmmword_18015B730;
    v4 = sub_180020090(v7, 0, (__int64 *)&v6, a3);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v4;
}
