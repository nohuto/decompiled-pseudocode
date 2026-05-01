/*
 * XREFs of ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1804446AC
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D6260 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _lambda_688f7da27bd069ce265bc30902a9ac85_::operator() @ 0x180442430 (_lambda_688f7da27bd069ce265bc30902a9ac85_--operator().c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall wil::SelectObject(_OWORD *a1, HDC a2, void *a3)
{
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]

  *(_QWORD *)&v6 = SelectObject(a2, a3);
  result = a1;
  *((_QWORD *)&v6 + 1) = a2;
  *a1 = v6;
  return result;
}
