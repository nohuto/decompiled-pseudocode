/*
 * XREFs of _IsSysShadow@4 @ 0x71BD0
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsSysShadow(_DWORD *this)
{
  return **(_WORD **)(this[19] + 4) == (unsigned __int16)gatomShadow;
}
