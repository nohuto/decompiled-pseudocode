/*
 * XREFs of CoGetObjectContext_0 @ 0x1800922A1
 * Callers:
 *     ??$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@Z@Z @ 0x1804618C8 (--$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA-AU-$com_ptr@UICon.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoGetObjectContext_0(const IID *const riid, LPVOID *ppv)
{
  return CoGetObjectContext(riid, ppv);
}
