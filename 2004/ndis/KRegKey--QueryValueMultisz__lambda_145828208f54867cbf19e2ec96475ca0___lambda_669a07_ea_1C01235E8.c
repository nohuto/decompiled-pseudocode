/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C01235E8
 * Callers:
 *     ndisLoadNamedFilterAltitudes @ 0x1C0124F24 (ndisLoadNamedFilterAltitudes.c)
 * Callees:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C01233F8 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0(
        HANDLE *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  _UNICODE_STRING v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0x7FFFLL;
  v6 = 0LL;
  v3 = L"NamedAltitudes";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = (0x7FFF - v2) & -(__int64)(v2 != 0);
  result = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
  {
    v6.Buffer = L"NamedAltitudes";
    v6.Length = 2 * v4;
    v6.MaximumLength = 2 * v4 + 2;
    return KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
             a1,
             &v6);
  }
  return result;
}
