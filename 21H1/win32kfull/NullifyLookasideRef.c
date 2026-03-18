/*
 * XREFs of NullifyLookasideRef @ 0x184301
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _MNFlushDestroyedPopups@4 @ 0x184561 (_MNFlushDestroyedPopups@4.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 * Callees:
 *     <none>
 */

int __thiscall NullifyLookasideRef(_DWORD *this)
{
  bool v1; // zf
  int result; // eax

  *this = 0;
  v1 = this[1] == 0;
  *((_BYTE *)this + 8) = 1;
  if ( v1 )
    return Win32FreeToPagedLookasideList(gpStackRefLookAside, this);
  return result;
}
