/*
 * XREFs of sub_1400303B0 @ 0x1400303B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall sub_1400303B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        wil::details::in1diag3 *a19,
        char *a20,
        void *Block,
        __int64 a22,
        LPCRITICAL_SECTION lpCriticalSection)
{
  __int64 v23; // [rsp+B8h] [rbp+20h]

  if ( (int)a20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      a19,
      (void *)0x555,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)a20);
    if ( a5 )
      LeaveCriticalSection(lpCriticalSection);
    operator delete(Block);
    if ( v23 )
      JUMPOUT(0x140030382LL);
    JUMPOUT(0x14003038ELL);
  }
  JUMPOUT(0x1400058A1LL);
}
