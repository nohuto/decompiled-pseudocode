/*
 * XREFs of _QueueGenericWorkItem_::_1_::catch$10 @ 0x18003C840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000FA80 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall QueueGenericWorkItem_::_1_::catch_10(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 136) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x41F,
                            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
                            a4);
  return 0LL;
}
