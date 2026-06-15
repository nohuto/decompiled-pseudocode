/*
 * XREFs of sub_1800175C0 @ 0x1800175C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18001325C @ 0x18001325C (sub_18001325C.c)
 */

__int64 __fastcall sub_1800175C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 240);
  if ( !v2 )
    return 0LL;
  v3 = sub_18001325C(v2, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_180003AB0(
    retaddr,
    4794,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    v3);
  return v4;
}
