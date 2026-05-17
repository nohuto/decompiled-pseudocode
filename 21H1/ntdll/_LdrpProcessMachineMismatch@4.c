/*
 * XREFs of _LdrpProcessMachineMismatch@4 @ 0x4B333CEC
 * Callers:
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 * Callees:
 *     _ZwRaiseHardError@24 @ 0x4B2F3FF0 (_ZwRaiseHardError@24.c)
 */

int __thiscall LdrpProcessMachineMismatch(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_WORD *)(LdrpAppHeaders + 72) > 3u )
    return 1073741838;
  v2 = this[8];
  v3 = v2 + 36;
  result = ZwRaiseHardError(1073741838, 1, 1, (int)&v3, 2, (int)&v4);
  if ( result >= 0 )
  {
    if ( v4 == 3 )
    {
      if ( LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
      return -1073741701;
    }
    else
    {
      *(_DWORD *)(v2 + 52) &= ~4u;
    }
  }
  return result;
}
