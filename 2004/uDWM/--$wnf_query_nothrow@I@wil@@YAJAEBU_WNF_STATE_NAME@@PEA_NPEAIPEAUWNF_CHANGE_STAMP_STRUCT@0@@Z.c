/*
 * XREFs of ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18008BE18
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3CC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007DF70 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18008C2B0 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned int>(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  unsigned int v6; // edi
  const char *v7; // r9
  const char *v9; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF
  int v13; // [rsp+5Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v11 = a1;
  v12 = 4;
  v5 = 0;
  *a2 = 0;
  v6 = NtQueryWnfStateData(&WNF_EOA_MAGNIFIER_RENDERING_INPUT, 0LL, 0LL, &v11, a3, &v12) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( (_DWORD)v11 && v12 != 4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        691LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
        v7);
      __debugbreak();
    }
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2B4,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (bool)"Inconsistent state data size in wnf_query",
      v9);
    if ( (_DWORD)v11 )
    {
      if ( v12 == 4 )
        v5 = 1;
    }
    *a2 = v5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B2,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v6);
    return v6;
  }
}
