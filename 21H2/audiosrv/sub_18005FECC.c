/*
 * XREFs of sub_18005FECC @ 0x18005FECC
 * Callers:
 *     sub_18005FE9C @ 0x18005FE9C (sub_18005FE9C.c)
 *     sub_180073264 @ 0x180073264 (sub_180073264.c)
 *     sub_1801376CC @ 0x1801376CC (sub_1801376CC.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     unknown_libname_209 @ 0x18005FE68 (unknown_libname_209.c)
 *     sub_18005FFB8 @ 0x18005FFB8 (sub_18005FFB8.c)
 *     sub_1800600A4 @ 0x1800600A4 (sub_1800600A4.c)
 *     sub_1800601FC @ 0x1800601FC (sub_1800601FC.c)
 *     sub_18006022C @ 0x18006022C (sub_18006022C.c)
 *     sub_1801344F0 @ 0x1801344F0 (sub_1801344F0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005FECC(__int64 a1)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rsi
  _QWORD **v5; // rdi
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  sub_18006022C(&v8);
  if ( unknown_libname_209(&v8) )
  {
    sub_18004BD84((int)retaddr, 910, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", -2147024882);
    sub_1801344F0(&v8);
    return 2147942414LL;
  }
  else
  {
    sub_1800601FC(v8);
    v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v9 = a1 + 56;
    v4 = a1 + 464;
    v5 = (_QWORD **)(a1 + 472);
    try
    {
      sub_18005FFB8();
      sub_1800600A4(v4, v6, **v5 + 16LL);
      if ( v3 )
        LeaveCriticalSection(v3);
      sub_1801344F0(&v8);
      result = 0LL;
    }
    catch ( ... )
    {
      LODWORD(v8) = sub_1800C437C(retaddr, 923LL, "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp");
      return (unsigned int)v8;
    }
  }
  return result;
}
