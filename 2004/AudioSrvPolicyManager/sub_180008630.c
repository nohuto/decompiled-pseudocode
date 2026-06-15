/*
 * XREFs of sub_180008630 @ 0x180008630
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 */

__int64 __fastcall sub_180008630(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall **v5)(); // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v7)(); // [rsp+58h] [rbp-10h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v5 = off_18003E0A0;
  v6 = a2;
  v7 = &v5;
  v2 = sub_18002D14C(&v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_180003AB0(
    retaddr,
    805,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    v2);
  return v3;
}
