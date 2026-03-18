/*
 * XREFs of _lambda_7d3559bef4d6fae1842b5ded287e2d56_::operator() @ 0x1C007F5AC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7d3559bef4d6fae1842b5ded287e2d56___ @ 0x1C007F53C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7d3559bef4d6fae1842b5ded287e2d5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7d3559bef4d6fae1842b5ded287e2d56_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
  result = 0LL;
  if ( v2 )
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v2 + 24);
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 72LL) + 80LL);
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
  }
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
