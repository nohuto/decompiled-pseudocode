/*
 * XREFs of _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch$5 @ 0x1800464F7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800124D8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x18D,
                            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
                            a4);
  return 0LL;
}
