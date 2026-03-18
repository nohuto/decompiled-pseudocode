/*
 * XREFs of ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A8EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSpriteVisual::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 133);
  result = (unsigned int)v2 <= 0x3E && (v3 = 0x4000200000000001LL, _bittest64(&v3, v2)) || a2 == 112;
  return result;
}
