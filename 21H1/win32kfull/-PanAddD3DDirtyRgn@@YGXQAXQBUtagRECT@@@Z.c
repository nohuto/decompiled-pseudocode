/*
 * XREFs of ?PanAddD3DDirtyRgn@@YGXQAXQBUtagRECT@@@Z @ 0x1F56D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PanAddD3DDirtyRgn(_DWORD *a1, const struct tagRECT *const a2)
{
  void (__stdcall *v2)(_DWORD, const struct tagRECT *const); // ecx

  v2 = (void (__stdcall *)(_DWORD, const struct tagRECT *const))a1[210];
  if ( v2 )
    v2(a1[8], a2);
}
