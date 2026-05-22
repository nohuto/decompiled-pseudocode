/*
 * XREFs of ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180177B70
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x180177BE0 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178F60 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180179C1C (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

void __fastcall EdgyConnection::OnEdgyCompositionUpdate(
        EdgyConnection *this,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        __int64 a3,
        const char *a4)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a2 + 2) == 2 )
  {
    if ( Edges::AddOrUpdate((EdgyConnection *)((char *)this + 72), a2) < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        171LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        v4);
      JUMPOUT(0x180177BCDLL);
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) != 3 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        181LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        a4);
      __debugbreak();
    }
    Edges::Remove((EdgyConnection *)((char *)this + 72), a2);
  }
}
