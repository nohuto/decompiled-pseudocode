/*
 * XREFs of ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x1800C4030
 * Callers:
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800B0458 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call @ 0x1801396D0 (std--_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTE_ea_1801396D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerTypeToInputType(int a1, char a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = 2LL;
  v3 = a1 - 2;
  if ( !v3 )
    return 8LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 16LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      return a2 != 0 ? 0x2000000 : 32;
    else
      return 0LL;
  }
  return result;
}
