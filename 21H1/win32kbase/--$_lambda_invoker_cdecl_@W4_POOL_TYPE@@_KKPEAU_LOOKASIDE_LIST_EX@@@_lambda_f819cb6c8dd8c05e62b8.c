/*
 * XREFs of ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_@@CAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C003C650
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0152F6C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall _lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return NSInstrumentation::CTypeIsolation<36864,144>::Allocate(&Lookaside[-1].L.AllocateEx, NumberOfBytes, Tag);
}
