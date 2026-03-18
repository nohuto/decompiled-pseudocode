/*
 * XREFs of sub_1C0042380 @ 0x1C0042380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 */

__int64 __fastcall sub_1C0042380(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rax

  v6 = sub_1C0016B5C(a2, a3, 0LL, 0x444E4654u);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 != a4
      || (v8 = sub_1C0011220(a4),
          (int)sub_1C0017B0C(
                 *((_QWORD *)v8 + 148),
                 1u,
                 (int)sub_1C0042430,
                 a4,
                 *((unsigned __int16 *)v8 + 714),
                 0x77464E44u,
                 0LL) < 0) )
    {
      sub_1C00171A0(a2, v7, 0LL, 0x444E4654u);
    }
  }
  return 0LL;
}
