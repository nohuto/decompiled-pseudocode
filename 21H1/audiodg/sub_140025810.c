/*
 * XREFs of sub_140025810 @ 0x140025810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall sub_140025810(
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
      JUMPOUT(0x1400257E2LL);
    JUMPOUT(0x1400257EELL);
  }
  JUMPOUT(0x140005871LL);
}
