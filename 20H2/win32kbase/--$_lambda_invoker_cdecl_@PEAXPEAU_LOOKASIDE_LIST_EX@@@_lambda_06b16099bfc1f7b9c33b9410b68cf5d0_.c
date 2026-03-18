/*
 * XREFs of ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_06b16099bfc1f7b9c33b9410b68cf5d0_@@CAXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00A5CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C014A8A0 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall _lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>(
        PVOID Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<180224,704>::Free(&Lookaside[-1].L.AllocateEx, Buffer);
}
