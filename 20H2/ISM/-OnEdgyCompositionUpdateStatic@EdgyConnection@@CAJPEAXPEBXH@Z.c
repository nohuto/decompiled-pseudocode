/*
 * XREFs of ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x180177690
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180177620 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall EdgyConnection::OnEdgyCompositionUpdateStatic(
        EdgyConnection *a1,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 2);
  if ( v4 >= 0 )
  {
    if ( v4 <= 1 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        143LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)0x80004001LL);
      JUMPOUT(0x1801776EELL);
    }
    if ( v4 <= 3 )
    {
      if ( (_DWORD)a3 != 152 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          153LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
          a4);
        __debugbreak();
      }
      EdgyConnection::OnEdgyCompositionUpdate(a1, a2, a3, a4);
    }
  }
  return 0LL;
}
