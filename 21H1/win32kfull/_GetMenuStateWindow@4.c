/*
 * XREFs of _GetMenuStateWindow@4 @ 0x1974A5
 * Callers:
 *     _NtUserEndMenu@0 @ 0xD4B30 (_NtUserEndMenu@0.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNDragOver@8 @ 0x1A7669 (_xxxMNDragOver@8.c)
 * Callees:
 *     <none>
 */

int __thiscall GetMenuStateWindow(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( !this )
    return 0;
  v2 = (_DWORD *)*this;
  if ( (*(_BYTE *)*this & 8) != 0 )
    return v2[2];
  if ( v2[3] )
    return v2[3];
  return v2[7];
}
