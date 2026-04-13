/*
 * XREFs of ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180005CDC
 * Callers:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180005DFC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x180043034 (-_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18004AA28 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180084CA0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::details::ReportFailure_HrMsg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        char *a10)
{
  wil::details::ReportFailure_Msg(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
