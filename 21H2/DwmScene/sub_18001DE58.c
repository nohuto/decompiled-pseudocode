/*
 * XREFs of sub_18001DE58 @ 0x18001DE58
 * Callers:
 *     sub_18001DD98 @ 0x18001DD98 (sub_18001DD98.c)
 * Callees:
 *     sub_18001DF10 @ 0x18001DF10 (sub_18001DF10.c)
 *     sub_180021AB0 @ 0x180021AB0 (sub_180021AB0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18001DE58(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  _UNKNOWN **result; // rax
  int v13; // eax
  __int64 v14; // rdi
  int v15; // [rsp+30h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a7 )
  {
    v13 = sub_180021AB0(a7, a6);
    v14 = a8;
    result = (_UNKNOWN **)sub_18001DF10(a1, a2, a3, a4, v13, 0, a8);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)qword_18021F840;
      if ( qword_18021F840 )
      {
        LOBYTE(v15) = 0;
        return (_UNKNOWN **)qword_18021F840(a2, a5, 0LL, a6, &a7, 0LL, v15, v14);
      }
    }
  }
  return result;
}
