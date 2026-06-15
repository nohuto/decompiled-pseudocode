/*
 * XREFs of sub_18009D353 @ 0x18009D353
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall sub_18009D353(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *a10,
        __int64 a11,
        __int64 a12,
        char a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        wil::details::in1diag3 *a25)
{
  if ( (int)a10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      a25,
      (void *)0xDC7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)a10);
    ATL::CStringData::Release((ATL::CStringData *)(a11 - 24));
    if ( a13 )
      JUMPOUT(0x18009D2FELL);
    JUMPOUT(0x18009D2BDLL);
  }
  JUMPOUT(0x18005254CLL);
}
