/*
 * XREFs of _IsMiPEnabledForThread@4 @ 0x9AF9E
 * Callers:
 *     _IsMiPActive@8 @ 0x9AF76 (_IsMiPActive@8.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _NtUserAutoPromoteMouseInPointer@4 @ 0x15FA65 (_NtUserAutoPromoteMouseInPointer@4.c)
 *     _NtUserPromoteMouseInPointer@4 @ 0x167C3F (_NtUserPromoteMouseInPointer@4.c)
 *     _xxxMNEndMenuStateInternal@8 @ 0x1848C0 (_xxxMNEndMenuStateInternal@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMiPEnabledForThread(_DWORD *this)
{
  return (*(_BYTE *)(this[58] + 464) & 4) != 0 || (this[172] & 0x6000000) != 0;
}
