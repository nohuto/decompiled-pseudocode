/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch$48 @ 0x140061E77
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140062318 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch_48(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 224) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)a2,
                            a3,
                            a4);
  return 0LL;
}
