/*
 * XREFs of _GetMessageWindow@4 @ 0xA6974
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

int __thiscall GetMessageWindow(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = this[3];
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 52);
  return result;
}
