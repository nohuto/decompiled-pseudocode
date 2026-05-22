/*
 * XREFs of _lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_ @ 0x18011EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_(__int64 a1)
{
  int v1; // edx
  bool v2; // r8
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 1236);
  v2 = *(_BYTE *)(a1 + 7520) && !v1;
  if ( (*(_DWORD *)(a1 + 332) != *(_DWORD *)(a1 + 7524) || *(_DWORD *)(a1 + 336) != *(_DWORD *)(a1 + 7528)) && !v1 || v2 )
    *(_BYTE *)(a1 + 7720) = 1;
  *(_QWORD *)(a1 + 7524) = *(_QWORD *)(a1 + 332);
  result = 0LL;
  *(_BYTE *)(a1 + 7520) = v1 != 0;
  return result;
}
