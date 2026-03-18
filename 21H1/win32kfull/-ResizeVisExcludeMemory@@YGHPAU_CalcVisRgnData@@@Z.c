/*
 * XREFs of ?ResizeVisExcludeMemory@@YGHPAU_CalcVisRgnData@@@Z @ 0xBFBBA
 * Callers:
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     ?ExcludeWindowRects@@YGHPAUtagWND@@00PAUtagRECT@@PAU_CalcVisRgnData@@PAH@Z @ 0x8D78E (-ExcludeWindowRects@@YGHPAUtagWND@@00PAUtagRECT@@PAU_CalcVisRgnData@@PAH@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall ResizeVisExcludeMemory(_DWORD *this)
{
  int v2; // edi
  void *v3; // ebx
  const void *v5; // [esp+Ch] [ebp-4h]

  v2 = this[2] + 30;
  v3 = (void *)Win32AllocPool(4 * v2, 1769370453);
  if ( !v3 )
    return 0;
  v5 = (const void *)this[3];
  memcpy(v3, v5, 4 * this[2]);
  if ( *this )
    Win32FreePool(v5);
  else
    *this = 1;
  this[2] = v2;
  this[3] = v3;
  return 1;
}
