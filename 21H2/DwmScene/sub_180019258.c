/*
 * XREFs of sub_180019258 @ 0x180019258
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 *     sub_1800F30C8 @ 0x1800F30C8 (sub_1800F30C8.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180019258(_DWORD *a1, __int64 a2)
{
  _DWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rdx

  v3 = a1;
  if ( !a2 )
    wassert(L"pArray != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0xCE4u);
  v4 = 4LL;
  v5 = a2 - (_QWORD)a1;
  do
  {
    *a1 = *(_DWORD *)((char *)a1 + v5);
    ++a1;
    --v4;
  }
  while ( v4 );
  v6 = v3 + 4;
  v7 = 4LL;
  do
  {
    *v6 = *(_DWORD *)((char *)v6 + v5);
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = v3 + 8;
  v9 = 4LL;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v5);
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = v3 + 12;
  v11 = 4LL;
  do
  {
    *v10 = *(_DWORD *)((char *)v10 + v5);
    ++v10;
    --v11;
  }
  while ( v11 );
  return v3;
}
