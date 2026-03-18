/*
 * XREFs of _EditionGetInputTransform@8 @ 0x15E974
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTransform@InputTransform@@YGHPBUtagWND@@PAUtagINPUT_TRANSFORM@@@Z @ 0xAEBB6 (-GetTransform@InputTransform@@YGHPBUtagWND@@PAUtagINPUT_TRANSFORM@@@Z.c)
 */

int __stdcall EditionGetInputTransform(int a1, void *a2)
{
  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  result = a1;
  v3 = *(_DWORD *)(a1 + 80);
  if ( v3 )
  {
    v4 = 3;
    v5 = v3 + 28;
    while ( v4 )
    {
      v5 += 4;
      --v4;
    }
    return InputTransform::GetTransform(v3, a2);
  }
  return result;
}
